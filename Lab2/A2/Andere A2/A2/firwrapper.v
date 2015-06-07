`timescale 1ns / 1ps
(*KEEP_HIERARCHY = "YES"*)

module firwrapper #(
    parameter NR_STAGES = 32,
    parameter DWIDTH = 16,
    parameter CWIDTH = NR_STAGES * DWIDTH,
    parameter DDWIDTH = 2 * DWIDTH,
	 parameter SWIDTH = 16) (
    input clk,
    input enabled,
    input signed [0:DWIDTH-1] a_in,
    output signed [0:DWIDTH-1] b_out,
    input  [0:SWIDTH] h_in_w,
	 input  h_enabled);

	reg [0:CWIDTH-1] h_in;
	reg enabled_reg;
	fir #(NR_STAGES, DWIDTH, CWIDTH, DDWIDTH) firfilter (clk, enabled_reg, a_in, b_out, h_in);    
	
	generate
        genvar i;
        for (i = 0; i <= CWIDTH - 2*SWIDTH ; i = i + SWIDTH) begin : coef_delayline
	 	 	 always @(posedge clk) begin
		 	 	  if (h_enabled) begin					 							
						 h_in[i + SWIDTH : i + ( 2*SWIDTH - 1)] <= h_in[i : i + SWIDTH-1];
		  	 	  end
	 	 	  end
        end
    endgenerate
	 
	 
	 always @(posedge clk) begin
	 	 if (h_enabled) begin
		 	 h_in[0:SWIDTH-1] <= h_in_w[0:SWIDTH-1];		 	
	 	 end
		 
		 enabled_reg <= enabled;
	 end

	 
endmodule
