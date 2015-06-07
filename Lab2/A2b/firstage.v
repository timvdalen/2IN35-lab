`timescale 1ns / 1ps

module firstage #(
    parameter DWIDTH = 16,
    parameter DDWIDTH = 2 * DWIDTH)(
    input clk,
    input enabled,
    input signed [0:DWIDTH-1] a_in,
    input signed [0:DDWIDTH-1] b_in,
    output signed [0:DWIDTH-1] a_out,
    output signed [0:DDWIDTH-1] b_out,
    input signed [0:DWIDTH-1] h_in);

    // Internal registers and wires
    reg signed [0:DWIDTH-1] x;
	 reg signed [0:DWIDTH-1] x1;
	 reg signed [0:DDWIDTH-1] y;

    // Assigning output wires
    assign a_out = x1;
    assign b_out = y + (x * h_in);

    // Process for the internal register
    always @(posedge clk) begin
        if (enabled) begin
			x1 = x;
			x = a_in;
			y = b_in;
		  end
    end

endmodule
