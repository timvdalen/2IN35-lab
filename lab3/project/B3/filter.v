`timescale 1ns / 1ps

module filter #(parameter NR_STAGES = 32,
                parameter DWIDTH = 16,
                parameter DDWIDTH = 2*DWIDTH,
                parameter CWIDTH = NR_STAGES * DWIDTH)
               (input  clk,
                input  rst,
                output req_in,
                input  ack_in,
                input  [0:DDWIDTH-1] data_in,
                output req_out,
                input  ack_out,
                output [0:DDWIDTH-1] data_out,
                input  [0:CWIDTH-1] h_in);

	// Output request register
	reg req_out_buf;
	assign req_out = req_out_buf;

	// Input request register
	reg req_in_buf;
	assign req_in = req_in_buf;

	// Split input into 2 samples
	wire signed [0:DWIDTH-1] a0, a1;
	assign {a0, a1} = data_in;

	// Buffer and combine 2 samples into output
	reg signed [0:DWIDTH-1] b0, b1;
	assign data_out = {b0, b1};

	//Coefficient wires
	wire [0:CWIDTH / 2 - 1] h_in_even;
	wire [0:CWIDTH / 2 - 1] h_in_odd;
	wire [0:NR_STAGES / 2 * (DWIDTH + 1) - 1] h_in_added;
	reg signed [0:NR_STAGES / 2 * (DWIDTH + 1) - 1] h_in_added_buf;
	assign h_in_added = h_in_added_buf;

	//Input ports
	wire [0:2] in_reqs;
	wire [0:2] in_acks;
	wire [0:DWIDTH-1] in_datas [0:1];
	wire [0:DWIDTH] in_datas_added;
	
	//Output ports
	wire [0:2] out_reqs;
	wire [0:2] out_acks;
	wire [0:DWIDTH-1] out_datas [0:1];
	wire [0:DWIDTH] out_datas_added;
	
	subfilter #(.NR_STAGES(NR_STAGES/2), .DWIDTH(DWIDTH), .DDWIDTH(DDWIDTH), .CWIDTH(CWIDTH / 2))
		filtereven (clk, rst, in_reqs[0], in_acks[0], in_datas[0], out_reqs[0], out_acks[0], out_datas[0], h_in_even
	);
	subfilter #(.NR_STAGES(NR_STAGES/2), .DWIDTH(DWIDTH), .DDWIDTH(DDWIDTH), .CWIDTH(CWIDTH / 2))
		filterodd (clk, rst, in_reqs[1], in_acks[1], in_datas[1], out_reqs[1], out_acks[1], out_datas[1], h_in_odd
	);
	subfilter #(.NR_STAGES(NR_STAGES/2), .DWIDTH(DWIDTH + 1), .DDWIDTH(DDWIDTH + 2), .CWIDTH(NR_STAGES / 2 * (DWIDTH + 1)))
		filteradded (clk, rst, in_reqs[2], in_acks[2], in_datas_added, out_reqs[2], out_acks[2], out_datas_added, h_in_added
	);

	generate
		genvar k;
		for (k = 0; k < NR_STAGES / 2; k = k + 1) begin : wires
			assign h_in_even[k * DWIDTH : (k + 1) * DWIDTH - 1] = h_in[k * 2 * DWIDTH : (k + 1) * 2 * DWIDTH - 1];
			assign h_in_odd[k * DWIDTH : (k + 1) * DWIDTH - 1] = h_in[(k * 2 + 1) * DWIDTH : (k * 2 + 2) * DWIDTH - 1];
		end
	endgenerate

	//Input port buffers
	reg in_ack_bufs [0:2];
	reg [0:DWIDTH-1] in_datas_buf [0:1];
	reg [0:DWIDTH] in_datas_added_buf;
	assign in_datas[0] = in_datas_buf[0];
	assign in_datas[1] = in_datas_buf[1];
	assign in_datas_added = in_datas_added_buf;
	generate
		for (k = 0; k < 3; k = k + 1) begin : stage
			assign in_acks[k] = in_ack_bufs[k];
		end
	endgenerate
	
	//Output port buffers
	reg out_ack_bufs [0:2];
	generate
		for (k = 0; k < 3; k = k + 1) begin : test
			assign out_acks[k] = out_ack_bufs[k];
		end
	endgenerate
	
	reg [0:5] i;
	reg [0:DWIDTH-1] del;
	reg [0:DWIDTH-1] p;
	
	always @(posedge clk) begin
		// Reset => initialize
		if (rst) begin
			req_in_buf <= 0;
			req_out_buf <= 0;
			b0 <= 0;
			b1 <= 0;
			del <= 0;
			p <= 0;
			
			in_datas_buf[0] <= 0;
			in_datas_buf[1] <= 0;
			in_datas_added_buf <= 0;
			
			for (i = 0; i < NR_STAGES / 2; i = i + 1) begin
				h_in_added_buf[i*(DWIDTH+1) +: DWIDTH + 1] <= $signed(h_in_even[i*DWIDTH +: DWIDTH]) + $signed(h_in_odd[i*DWIDTH +: DWIDTH]);
			end
		end
		// !Reset => run
		else begin
			// Input request & acknowledge => take the input & go back to computation a.s.a.p.
			if (req_in && ack_in) begin
				if(in_reqs[0] && !in_acks[0] && in_reqs[1] && !in_acks[1] && in_reqs[2] && !in_acks[2]) begin
					p <= a1;
					in_datas_buf[0] <= a1 - a0;
					in_datas_buf[1] <= del - a0;
					in_datas_added_buf <= a0;
					
					in_ack_bufs[0] <= 1;
					in_ack_bufs[1] <= 1;
					in_ack_bufs[2] <= 1;
				end else if(!in_reqs[0] && in_acks[0] && !in_reqs[1] && in_acks[1] && !in_reqs[2] && in_acks[2]) begin
					in_ack_bufs[0] <= 0;
					in_ack_bufs[1] <= 0;
					in_ack_bufs[2] <= 0;
				
					req_in_buf <= 0;
				end
			end
			// Output request & acknowledge => go back to computation a.s.a.p.
			if (req_out && ack_out) begin
				req_out_buf <= 0;
			end
			// If we need no inputs and have no outputs ready, then proceed with the computation
			if (!req_in && !req_out && !ack_in && !ack_out) begin
				if(out_reqs[0] && !out_acks[0] && out_reqs[1] && !out_acks[1] && out_reqs[2] && !out_acks[2]) begin
					b0 <= out_datas[1] + out_datas_added;
					b1 <= out_datas[0] + out_datas_added;
					
					out_ack_bufs[0] <= 1;
					out_ack_bufs[1] <= 1;
					out_ack_bufs[2] <= 1;
				end else if(!out_reqs[0] && out_acks[0] && !out_reqs[1] && out_acks[1] && !out_reqs[2] && out_acks[2]) begin
					out_ack_bufs[0] <= 0;
					out_ack_bufs[1] <= 0;
					out_ack_bufs[2] <= 0;
				
					req_in_buf <= 1;
					req_out_buf <= 1;
					del <= p;
				end
			end
		end
	end
	
	initial begin
		in_ack_bufs[0] = 0;
		in_ack_bufs[1] = 0;
		in_ack_bufs[2] = 0;
		
		out_ack_bufs[0] = 0;
		out_ack_bufs[1] = 0;
		out_ack_bufs[2] = 0;
	end

endmodule
