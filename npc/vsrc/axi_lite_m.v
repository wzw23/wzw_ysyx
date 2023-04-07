module axi_lite_m(
	input clk,
	input rst,
  //读地址通道 
	output [31:0]araddr,
	output reg arvalid,
	input  arready,
  //读数据通道
	input  [63:0]rdata,
	input  [1:0]rresp,
	input  rvalid,
	output reg rready,
  //写地址通道
	output [31:0]awaddr,
	output awvalid,
	input  awready,
  //写数据通道
	output [63:0]wdata,
	output [3:0]wstrb,
	output wvalid,
	input  wready,
  //写回复通道
	input  [1:0]bresp,
	input  bvalid,
	output bready
);
//寄存器
reg [63:0]r_rdata;
//状态机
parameter   ST_IDLE        = 3'd0 ,
						ST_WAIT_RVALID_RREADY=3'd1;
reg [2:0]state;
always @(posedge clk)begin
	if(rst)
		state<=ST_IDLE;
	else if((state==ST_IDLE)&arvalid&arready)
		state<=ST_WAIT_RVALID_RREADY;
	else if(state==ST_IDLE)
		state<=ST_IDLE;
	else if((state==ST_WAIT_RVALID_RREADY)&rvalid&rready)
		state<=ST_IDLE;
	else if(state==ST_WAIT_RVALID_RREADY)
		state<=ST_WAIT_RVALID_RREADY;
end
MuxKey #(2,3,1) mux0(arvalid,state,{
		ST_WAIT_RVALID_RREADY,1'd0,	
		ST_IDLE,1'd1
		});
//r_data信号
always @(posedge clk)begin
	if(rvalid&rready)
		r_rdata<=rdata;
	else 
		r_rdata<=r_rdata;
end
//rready信号
MuxKey #(2,3,1) mux1(rready,state,{
		ST_WAIT_RVALID_RREADY,1'd1,	
		ST_IDLE,1'd0
		});
endmodule
