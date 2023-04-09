module arbiter(
	input  clk,
	input  rst,
	//读地址通道 
	input  [31:0]araddr,
	input  arvalid,
	output arready,
	//读数据通道
	output [63:0]rdata,
	output reg [1:0]rresp,
	output rvalid,
	input  rready,
	//写地址通道
	input  [31:0]awaddr,
	input  awvalid,
	output awready,
	//写数据通道
	input  [63:0]wdata,
	input  [7:0]wstrb,
	input  wvalid,
	output wready,
	//写回复通道
	output [1:0]bresp,
	output bvalid,
	input  bready,
	input choose
);
endmodule
