`timescale 1ns / 1ps

module firtest;

// Parameters
parameter NR_STAGES = 32;
parameter DWIDTH = 16;
parameter DDWIDTH = 32;
parameter CWIDTH = NR_STAGES * DWIDTH;

// Inputs
reg clk;
reg enabled;
reg signed [0:DWIDTH-1] a_in;
wire [0:CWIDTH-1] h_in;

// Outputs
wire signed [0:DWIDTH-1] b_out;

// Instantiate the Unit Under Test (UUT)
fir #(NR_STAGES, DWIDTH, CWIDTH, DDWIDTH) my_fir (clk, enabled, a_in, b_out);


// Variables for handling the I/O files
integer input_file;
integer output_file;
reg signed [0:15] data_read;
integer io_error;
reg [0:639] io_error_str;

// Random variable for the enabled signal
reg random;

// The clock (100Mhz)
always #5 clk = ~clk;

// Process that writes the 8 MSBs of the output to a file
always @(posedge clk) begin
    if (enabled) begin
	   $fwrite(output_file, "%c", b_out[0:7]);
		$fwrite(output_file, "%c", b_out[8:15]);		
	 end
end


initial begin
    // Initialize Inputs
    clk = 0;
    enabled = 0;
    a_in = 0;   
   
    // Open the files
    input_file = $fopen("input.bin", "rb");
    if (input_file == 0) begin
        $display("Error: Failed to open input file, input.bin\nExiting Simulation.");
        $finish;
    end
    output_file = $fopen("output.bin", "wb");
    if (output_file == 0) begin
        $display("Error: Failed to open output file, output.bin\nExiting Simulation.");
        $finish;
    end

    // Wait 100 ns
    #100;

    // While there is data available, send it to the filter
    io_error = 0;
    while (io_error == 0) @(posedge clk) begin
        // The enable signal is random:
        random = $random;
        enabled = random;
        if (enabled) begin
            // When the filter was enabled, proceed to the next byte
			a_in[0:7] <= $fgetc(input_file);
            a_in[8:15] <= $fgetc(input_file);
            
            io_error = $ferror(input_file, io_error_str);
        end
    end

    // Close the files
    $fclose(input_file);
    $fclose(output_file);
		
    // Stop the simulation
    #100;
    $fdisplay("Simulation ended\n");
    $stop;

end
      
endmodule
