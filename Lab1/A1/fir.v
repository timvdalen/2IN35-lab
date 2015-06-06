`timescale 1ns / 1ps
(*KEEP_HIERARCHY = "YES"*)

module fir #(
    parameter NR_STAGES = 32,
    parameter DWIDTH = 16,
    parameter CWIDTH = NR_STAGES * DWIDTH,
    parameter DDWIDTH = 2 * DWIDTH) (
    input clk,
    input enabled,
    input signed [0:DWIDTH-1] a_in,
    output signed [0:DWIDTH-1] b_out);

    // Internal registers and wires
    wire signed [0:DWIDTH-1] a [0:NR_STAGES];
    wire signed [0:DDWIDTH-1] b [0:NR_STAGES];
	 reg signed [0:DWIDTH-1] h_in_reg [0:NR_STAGES-1];	 
	 reg signed [0:DWIDTH-1] a_in_reg, b_out_reg; 

    //Read coefficients from a file using readmem command
	 initial $readmemh ("coef.txt", h_in_reg);
	 
    // Generate the filter stages
    generate
        genvar i;
        for (i = 0; i < NR_STAGES; i = i + 1) begin : stage
          firstage #(DWIDTH, DDWIDTH) comp (clk, enabled, a[i], b[i], a[i+1], b[i+1], h_in_reg[(NR_STAGES-1-i)]);
        end
    endgenerate
	 
	 always @(posedge clk) begin
        if (enabled) begin            
				a_in_reg <= a_in;
				b_out_reg <= b[NR_STAGES][0:DWIDTH-1];
        end
    end
	 
    // Connect the stages to the outside and to the default values
    assign a[0] = a_in_reg;
    assign b_out = b_out_reg; // Output the MSB bits
    assign b[0] = 0;

endmodule
