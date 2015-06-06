`timescale 1ns / 1ps

module filter #(parameter NR_STAGES = 32,
					parameter DWIDTH = 16,
					parameter DDWIDTH = 2*DWIDTH,
					parameter CWIDTH = NR_STAGES * DWIDTH)
					(input  clk,
					input  rst,
					output req_in,
					input  ack_in,
					input  signed [0:DWIDTH-1] data_in,
					output req_out,
					input  ack_out,
					output signed [0:DWIDTH-1] data_out,
					input  [0:CWIDTH-1] h_in);

	// Output request register
	reg req_out_buf;
	assign req_out = req_out_buf;

	// Input request register
	reg req_in_buf;
	assign req_in = req_in_buf;
  
	// Accumulator (assigned to output directly)
	reg signed [0:DWIDTH-1] sum;
	assign data_out = sum;
	 
	reg signed [0:DWIDTH-1] input_buf [0:NR_STAGES-1];
	reg signed [0:DDWIDTH-1] b_buf [0:NR_STAGES-1];
	reg [0:$clog2(NR_STAGES) + 1] input_buf_ptr;
	reg [0:$clog2(NR_STAGES) + 1] comp_ptr;
	reg [0:$clog2(NR_STAGES) + 1] comp_ptr_prev;
	 
	reg [0:$clog2(NR_STAGES) + 1] i;
	reg signed [0:DWIDTH - 1] h_in_buf [0:NR_STAGES-1];
	 
  
	always @(posedge clk) begin
		// Reset => initialize
		if (rst) begin
			req_in_buf <= 0;
         req_out_buf <= 0;
         sum <= 0;
			input_buf_ptr = NR_STAGES - 1;
			comp_ptr = 0;
				
			for(i = 0; i < NR_STAGES; i = i + 1) begin
				input_buf[i] = 0;
				h_in_buf[i] = h_in[i*DWIDTH +: DWIDTH];
				b_buf[i] = 0;
			end
		end
		// !Reset => run
		else begin
			// Input request & acknowledge => take the input & go back to computation a.s.a.p.
			if (req_in && ack_in) begin
				req_in_buf <= 0;
				req_out_buf <= 1;
				i = 0;
				input_buf_ptr = (input_buf_ptr + 1) % NR_STAGES;
				comp_ptr = input_buf_ptr;
				
				input_buf[input_buf_ptr] = data_in;
				b_buf[comp_ptr] = 0;
			end
			// Output request & acknowledge => go back to computation a.s.a.p.
			if (req_out && ack_out) begin
				req_out_buf <= 0;
			end
			// If we need no inputs and have no outputs ready, then proceed with the computation
			if (!req_in && !req_out && !ack_in && !ack_out) begin   
				comp_ptr_prev = comp_ptr;
				comp_ptr = (comp_ptr + 1) % NR_STAGES;
				
				b_buf[comp_ptr] = h_in_buf[i] * input_buf[comp_ptr] + b_buf[comp_ptr_prev];
				
				if (comp_ptr == input_buf_ptr) begin
					sum <= b_buf[comp_ptr][0:DWIDTH-1];
					
					req_out_buf <= 1;
					req_in_buf <= 1;
				end
				else begin
					i = i + 1;
				end
			end
		end
	end

endmodule
