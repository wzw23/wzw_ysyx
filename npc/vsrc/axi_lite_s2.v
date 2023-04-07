module axi_lite_s(
	input  clk,
	input  rst,
	//读地址通道 
	input  [31:0]araddr,
	input  reg arvalid,
	output  arready,
	//读数据通道
	output [63:0]rdata,
	output reg [1:0]rresp,
	output rvalid,
	input reg rready,
	//写地址通道
	input  [31:0]awaddr,
	input  awvalid,
	output awready,
	//写数据通道
	input  [63:0]wdata,
	input  [3:0]wstrb,
	input  wvalid,
	output wready,
	//写回复通道
	output [1:0]bresp,
	output bvalid,
	input  bready
	//可能需要添加寄存器
);
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);

//寄存器 写回馈信号也需要寄存器
reg [31:0]r_araddr;
//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARVALID=3'd1,
						READ_FINISH=3'd2;

reg [2:0]state;
always @(posedge clk)begin
	if(rst)
		state<=READ_IDLE;
	else if((state==READ_IDLE)&arvalid)
		state<=READ_ARVALID;
	else if(state==READ_IDLE)
		state<=READ_IDLE;
	else if((state==READ_ARVALID)&rready)
		state<=READ_FINISH;
	else if(state==READ_ARVALID)
		state<=READ_ARVALID;
	else if(state==READ_FINISH)
		state<=READ_IDLE;
end
MuxKey #(2,3,1) mux0(arready,state,{
		READ_ARVALID,1'd0,
		READ_IDLE,1'd1
		});
//araddr信号寄存器
always @(posedge clk)begin
	if(arvalid&&arready)
		r_araddr<=araddr;
	else
		r_araddr<=araddr;
end
//rdata信号
always @(posedge clk)begin
	//if(rvalid&rready)begin
	if(state==READ_ARVALID)begin
	vpmem_read({{32'b0},r_araddr}, rdata);
	rresp<='d0;
	rvalid<='d1;//只有读出数据之后才能让其有效
end
else begin
		rresp<=2'b10;
		rvalid<='d0;
	end
end
endmodule
