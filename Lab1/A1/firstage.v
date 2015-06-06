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

    // Assigning output wires
    assign a_out = x;
    assign b_out = b_in + (a_in * h_in);

    // Process for the internal register
    always @(posedge clk) begin
        if (enabled) x <= a_in;
    end

endmodule
