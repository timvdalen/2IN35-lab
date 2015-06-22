`timescale 1ns / 1ps

module filter
 #(parameter DWIDTH = 16,
   parameter DDWIDTH = 2*DWIDTH,
	parameter L = 160,
	parameter L_LOG = 8,
	parameter M = 147,
	parameter M_LOG = 8,
	parameter CWIDTH = 4*L,
	parameter NR_STREAMS = 16,
   parameter NR_STREAMS_LOG = 4)
  (input clk,
   input rst,
	output req_in,
	input ack_in,
	input [0:DWIDTH-1] data_in,
	output req_out,
	input ack_out,
	output [0:DWIDTH-1] data_out);

	// Output request register
	reg req_out_buf;
	assign req_out = req_out_buf;

	// Input request register
	reg req_in_buf;
	assign req_in = req_in_buf;

	reg [0:NR_STREAMS_LOG-1] write_address;
	reg [0:NR_STREAMS_LOG-1] read_address;
	reg [0:NR_STREAMS_LOG-1] read_address_last;

	// Accumulator (assigned to output directly)
	reg signed [0:DDWIDTH-1] sum;
	assign data_out = sum>>>15;
	
	reg signed [0:DDWIDTH-1] mult_buf_0;
	reg signed [0:DDWIDTH-1] mult_buf_1;
	reg signed [0:DDWIDTH-1] mult_buf_2;
	reg signed [0:DDWIDTH-1] mult_buf_3;
	
	reg signed [0:DWIDTH-1] ram_0 [0:NR_STREAMS-1];
	reg signed [0:DWIDTH-1] ram_1 [0:NR_STREAMS-1];
	reg signed [0:DWIDTH-1] ram_2 [0:NR_STREAMS-1];
	reg signed [0:DWIDTH-1] ram_3 [0:NR_STREAMS-1];
	reg signed [0:DWIDTH-1] ram_out_0;
	reg signed [0:DWIDTH-1] ram_out_1;
	reg signed [0:DWIDTH-1] ram_out_2;
	reg signed [0:DWIDTH-1] ram_out_3;
	
	reg signed [0:DWIDTH-1] last_ram_out_0;
	reg signed [0:DWIDTH-1] last_ram_out_1;
	reg signed [0:DWIDTH-1] last_ram_out_2;

	reg signed [0:DWIDTH-1] ram_in_0;
	reg signed [0:DWIDTH-1] ram_in_1;
	reg signed [0:DWIDTH-1] ram_in_2;
	reg signed [0:DWIDTH-1] ram_in_3;

   always @(posedge clk) begin
		if (req_in && ack_in)
			ram_0[write_address] <= ram_in_0;
      ram_out_0 <= ram_0[read_address];
		last_ram_out_0 <= ram_0[read_address_last];
   end
	always @(posedge clk) begin
		if (req_in && ack_in)
			ram_1[write_address] <= ram_in_1;
      ram_out_1 <= ram_1[read_address];
		last_ram_out_1 <= ram_1[read_address_last];
   end
	always @(posedge clk) begin
		if (req_in && ack_in)
			ram_2[write_address] <= ram_in_2;
      ram_out_2 <= ram_2[read_address];
		last_ram_out_2 <= ram_2[read_address_last];
   end 
	always @(posedge clk) begin
		if (req_in && ack_in)
			ram_3[write_address] <= ram_in_3;
      ram_out_3 <= ram_3[read_address];
   end
	
	reg signed [0:DWIDTH-1] h_in_reg [0:CWIDTH-1];
	reg [0:L_LOG-1] cur_mod;
	reg [0:NR_STREAMS_LOG] i;

	initial begin
		$readmemh ("coef.txt", h_in_reg);
		
		for (i = 0; i < NR_STREAMS; i = i + 1) begin
			ram_0[i] = 0;
			ram_1[i] = 0;
			ram_2[i] = 0;
			ram_3[i] = 0;
		end
		
		last_ram_out_0 = 0;
		last_ram_out_1 = 0;
		last_ram_out_2 = 0;
	end

	always @(posedge clk) begin
		// Reset => initialize
		if (rst) begin
			req_in_buf <= 0;
			req_out_buf <= 0;
			sum <= 0;
			cur_mod <= 0;
			mult_buf_0 <= 0;
			mult_buf_1 <= 0;
			mult_buf_2 <= 0;
			mult_buf_3 <= 0;
			
			write_address <= 0;
			if(NR_STREAMS == 2) begin
				read_address_last <= 0;
				read_address <= 1;
			end
			else begin
				read_address_last <= 2;
				read_address <= 3;
			end
		end
		// !Reset => run
		else begin

			// Read handshake complete
			if (req_in && ack_in) begin
				ram_in_0 <= data_in;
				ram_in_1 <= last_ram_out_0;
				ram_in_2 <= last_ram_out_1;
				ram_in_3 <= last_ram_out_2;
				
				
				req_out_buf <= 1;
			end

			//Read handshake is pending then stop producing output
			if (req_in && !ack_in) begin
				req_out_buf <= 0;
			end

			// Write handshake complete
			if (req_out && ack_out) begin
				sum <= mult_buf_0 +
					mult_buf_1 +
					mult_buf_2 +
					mult_buf_3;
				
				if(read_address_last == (NR_STREAMS - 1)) begin
					read_address_last <= 0;
				end
				else begin
					read_address_last <= read_address_last + 1;
				end
				if(read_address == (NR_STREAMS - 1)) begin
					read_address <= 0;
				end
				else begin
					read_address <= read_address + 1;
				end
					
				if (write_address == (NR_STREAMS - 1)) begin
					write_address <= 0;
					if (cur_mod >= L - M) begin
						cur_mod <= cur_mod - (L - M);
						req_in_buf <= 1;
					end
					else begin
						cur_mod <= cur_mod + M;
						req_in_buf <= 0;
					end
				end
				else begin
					write_address <= write_address + 1;
				end
				
				mult_buf_0 <= ram_out_0 * h_in_reg[cur_mod];
				mult_buf_1 <= ram_out_1 * h_in_reg[cur_mod + L];
				mult_buf_2 <= ram_out_2 * h_in_reg[cur_mod + 2 * L];
				mult_buf_3 <= ram_out_3 * h_in_reg[cur_mod + 3 * L];
			end

			//Write handshake is pending then stop acquiring output.
			if (req_out && !ack_out) begin
				req_in_buf <= 0;
			end

			// Idle state
			if (!req_in && !ack_in && !req_out && !ack_out) begin
				req_in_buf <= 1;
			end

		end
	end

endmodule
