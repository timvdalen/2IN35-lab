`timescale 1ns / 1ps

module filter
 #(parameter DWIDTH = 16,
   parameter DDWIDTH = 2*DWIDTH,
	parameter L = 160,
	parameter L_LOG = 8,
	parameter M = 147,
	parameter M_LOG = 8,
	parameter CWIDTH = 4*L,
	parameter J = 4,
	parameter J_LOG = 2)
  (input clk,
   input rst,
	output req_in,
	input ack_in,
	input signed [0:DWIDTH-1] data_in,
	output req_out,
	input ack_out,
	output signed [0:DWIDTH-1] data_out);

	// Output request register
	reg req_out_buf;
	assign req_out = req_out_buf;

	// Input request register
	reg req_in_buf;
	assign req_in = req_in_buf;
	
	// Accumulator (assigned to output directly)
	reg signed [0:DWIDTH-1] sum;
	assign data_out = sum;
	
	reg signed [0:DWIDTH-1] input_buf [0:J - 1];
	reg signed [0:DDWIDTH-1] calc_buf;
	reg signed [0:DDWIDTH-1] last_calc;
	reg [0:J_LOG - 1] i;
	reg [0:J_LOG] count;
	reg signed [0:DWIDTH-1] h_in_reg [0:CWIDTH - 1];
	reg [0:L_LOG - 1] cur_mod;
	reg [0:L_LOG + 1] count_times_L [0:J-1];
	reg f;
	
	//Read coefficients from a file using readmem command
	initial begin 
		$readmemh ("coef.txt", h_in_reg);
		count_times_L [0] = 0;
		count_times_L [1] = 160;
		count_times_L [2] = 320;
		count_times_L [3] = 480;
	end
	
	always @(posedge clk) begin
		// Reset => initialize
		if (rst) begin
			req_in_buf <= 1;
			req_out_buf <= 0;
			sum <= 0;
			count <= 0;
			cur_mod <= 0;
			f <= 0;
		end
		// !Reset => run
		else begin
			// Input request & acknowledge => take the input & go back to computation a.s.a.p.
			if (req_in && ack_in) begin
				req_in_buf <= 0;
				calc_buf <= 0;
				count <= 0;
				f <= 0;
				
				for(i = 0; i < J - 1; i = i + 1) begin
					input_buf[i + 1] <= input_buf[i]; 
				end

				input_buf[0] <= data_in;
			end
			// Output request & acknowledge => go back to computation a.s.a.p.
			if (req_out && ack_out) begin
				req_out_buf <= 0;
			end
			// If we need no inputs and have no outputs ready, then proceed with the computation
			else if (!req_in && !req_out && !ack_in && !ack_out) begin		
				if (count == J + 1) begin
					req_in_buf <= cur_mod < M;
					calc_buf <= 0;
					count <= 0;
				end
				else if (count == J) begin
					sum <= calc_buf[0:DWIDTH-1];
					cur_mod <= (cur_mod + M) % L;

					req_out_buf <= 1;
					count <= count + 1;
				end
				else begin
					if(f) begin
						f <= 0;
						calc_buf <= last_calc + calc_buf;
						count <= count + 1;
					end
					else begin
						f <= 1;
						last_calc <= input_buf[count] * h_in_reg[count_times_L[count] + cur_mod];
					end
				end
			end
		end
	end

endmodule
