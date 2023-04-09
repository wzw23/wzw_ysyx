module If(input clk,input rst,output [63:0]cpupc,input [1:0]sel_nextpc,input [63:0]imm,input [63:0]src1,output [31:0]inst,output [63:0]dnpc,input[63:0]c_rdata,output inst_update,input mem_finish);
//位宽为32bit，复位值为0x80000000,写使能一直有效
//wire [31:0]zhongjian;
//assign zhongjian=cpupc+4;
//Reg #(32,32'h80000000) i0 (clk,rst,zhongjian,cpupc,1'b1);
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);

wire [63:0]dnpc_0;
//reg  inst_finish;//完成一条指令的信号
//Reg #(1,1'b0) finish(clk,rst,inst_update,inst_finish,1'b1);
MuxKey #(4,2,64) mux4(dnpc_0,sel_nextpc,{//alu_src2赋值
  2'b00,cpupc+4,
	2'b01,cpupc+imm,
	2'b10,(src1+imm)&~1,
	2'b11,c_rdata
	});
MuxKey #(2,1,64) mux5(dnpc,mem_finish,{//alu_src2赋值
  1'b0,cpupc,
	1'b1,dnpc_0
	});
Reg #(64,64'h80000000) i0 (clk,rst,dnpc,cpupc,1'b1);
/*wire [63:0]inst_64;*/
/*always @(*)begin*/
		/*vpmem_read(cpupc, inst_64);*/
/*end*/
//assign inst=inst_64[31:0];

//总线信号
wire arvalid;
wire arready;
wire [31:0]araddr;

wire [63:0]rdata;
wire [1:0]rresp;
wire rvalid;
wire rready;
wire rvalid_rready;

assign inst_update=(state==READ_FINISH);

assign rvalid_rready=rvalid&rready;

assign araddr=cpupc[31:0];
//寄存器
reg [63:0]r_rdata;
//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARREADY		 =3'd1,
						READ_FINISH 		 =3'd2;
reg [2:0]state;
always @(posedge clk)begin
	if(rst)
		state<=READ_IDLE;
	else if((state==READ_IDLE)&arready)
		state<=READ_ARREADY;
	else if(state==READ_IDLE)
		state<=READ_IDLE;
	else if((state==READ_ARREADY)&rvalid)
		state<=READ_FINISH;
	else if(state==READ_ARREADY)
		state<=READ_ARREADY;
	else if(state==READ_FINISH)
		state<=READ_IDLE;
end
//arvalid信号
MuxKey #(3,3,1) mux0(arvalid,state,{
		READ_ARREADY,1'd0,
		READ_FINISH,1'd0,
		READ_IDLE,1'd1
		});
//r_data信号
always @(posedge clk)begin
	if(rvalid&rready)
		r_rdata<=rdata;
	else
		r_rdata<=r_rdata;
end
//rready信号
MuxKey #(3,3,1) mux1(rready,state,{
		READ_ARREADY,1'd1,
		READ_FINISH,1'd0,
		READ_IDLE,1'd0
		});
///////////////axi_slave模块////////////
axi_lite_s axi_lite_s0(
	.clk(clk),
	.rst(rst),
	.araddr(araddr),
	.arvalid(arvalid),
	.arready(arready),
	.rdata(rdata),
	.rresp(rresp),
	.rvalid(rvalid),
	.rready(rready)
);
///////////////////////////////////////
assign inst=r_rdata[31:0];
endmodule
