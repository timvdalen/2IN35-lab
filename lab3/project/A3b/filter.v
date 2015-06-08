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
	reg signed [0:DDWIDTH-1] last_calc;
	reg signed [0:DDWIDTH-1] calc_buf;
	reg [0:5] i;
	reg [0:5] count;
	reg f;
  
    always @(posedge clk) begin
        // Reset => initialize
        if (rst) begin
            req_in_buf <= 0;
            req_out_buf <= 0;
            sum <= 0;
				count <= 0;
				f <= 0;
        end
        // !Reset => run
        else begin
            // Input request & acknowledge => take the input & go back to computation a.s.a.p.
            if (req_in && ack_in) begin
					req_in_buf <= 0;
					req_out_buf <= 0;
					calc_buf <= 0;
					last_calc <= 0;
					count <= 0;
					f <= 0;
					
					for(i = 0; i < NR_STAGES - 1; i = i + 1) begin
						input_buf[i + 1] <= input_buf[i]; 
					end
					
					input_buf[0] <= data_in;
            end
            // Output request & acknowledge => go back to computation a.s.a.p.
            if (req_out && ack_out) begin
                req_out_buf <= 0;
            end
            // If we need no inputs and have no outputs ready, then proceed with the computation
            if (!req_in && !req_out && !ack_in && !ack_out) begin
				if(count == NR_STAGES) begin
					sum <= calc_buf[0:DWIDTH-1];
				
					req_in_buf <= 1;
					req_out_buf <= 1;
				end
				else begin
					if (f) begin
						f <= 0;
						count <= count + 1;
						calc_buf <= calc_buf + last_calc;
					end
					else begin
						f <= 1;
						last_calc <= input_buf[count] * $signed(h_in[count * DWIDTH +: DWIDTH]);
					end
				end
            end
        end
    end

endmodule
