module assem_line#(
	parameter WIDTH=100
)(
	input clk,
	input rst,
	input validin,
	input [WIDTH-1:0]datain,
	input out_allow,
	output [WIDTH-1:0]dataout
);
reg pipe1_valid;
reg [WIDTH-1:0]pipe1_data;
reg pipe2_valid;
reg [WIDTH-1:0]pipe2_data;
reg pipe3_valid;
reg [WIDTH-1:0]pipe3_data;

//pipeline statge1
wire pipe1_allowin;
wire pipe1_ready_go;
wire pipe1_to_pipe2_valid;
assign pipe1_ready_go=1;
assign pipe1_allowin=!pipe1_valid||pipe1_ready_go&&pip2_allowin;
assign pipe1_to_pipe2_valid=pipe1_valid&&pipe1_ready_go;
always @(posedge clk)begin
	if(rst)begin
		pipe1_valid<=1'b0;
	end
	else if(pipe1_allowin)begin
		pipe1_valid<=validin;
	end
	if(validin&&pipe1_allowin)begin
		pipe1_data<=datain;
	end
end
endmodule
