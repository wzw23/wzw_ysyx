module top_test(
	input clock,
  input reset,
	output [31:0]inst,
  //input [31:0] in,
  output [63:0] cpupc,
  output ebreak,
	output not_have,
	output [63:0]dnpc,
	output reg inst_finish,
	output mem_finish,
	output inst_update,
	output [63:0]dnpc_reg_wb,
	output [63:0]cpupc_reg_wb,
	output [63:0]cpupc_reg_finish,
	output [31:0]inst_reg_wb
);
 	/////////////////////////////开启波形图/////////////////////
 /* initial begin*/
		/*if ($test$plusargs("trace") != 0) begin*/
			/*$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);*/
			/*$dumpfile("logs/vlt_dump.vcd");*/
			/*$dumpvars();*/
		/*end*/
		/*$display("[%0t] Model running...\n", $time);*/
	/*end*/
	/*/*//////////////////////////////////////////////////////////

wire      io_master_awready;
wire      io_master_awvalid;
wire[3:0] io_master_awid ;
wire[31:0]io_master_awaddr;
wire[7:0] io_master_awlen;
wire[2:0] io_master_awsize;
wire[1:0] io_master_awburst;
wire      io_master_wready;
wire      io_master_wvalid;
wire[63:0]io_master_wdata;
wire[7:0] io_master_wstrb;
wire      io_master_wlast;
wire      io_master_bready;
wire      io_master_bvalid;
wire[3:0] io_master_bid;
wire[1:0] io_master_bresp;
wire      io_master_arready;
wire      io_master_arvalid;
wire[3:0] io_master_arid;
wire[31:0]io_master_araddr;
wire[7:0] io_master_arlen;
wire[2:0] io_master_arsize;
wire[1:0] io_master_arburst;
wire      io_master_rready;
wire      io_master_rvalid;
wire[3:0] io_master_rid;
wire[1:0] io_master_rresp;
wire[63:0]io_master_rdata;
wire      io_master_rlast;
wire      io_interrupt;

ysyx_22050533_axi_full_s2 ysyx_22050533_axi_full_s2_0(
	.clock(clock),
	.reset(reset),
	.araddr(io_master_araddr),
	.arvalid(io_master_arvalid),
	.arburst(io_master_arburst),
	.arlen(io_master_arlen),
	.arsize(io_master_arsize),
	.arready(io_master_arready),
	.rdata(io_master_rdata),
	.rresp(io_master_rresp),
	.rvalid(io_master_rvalid),
	.rlast(io_master_rlast),
	.rready(io_master_rready),
	.awaddr(io_master_awaddr),
	.awvalid(io_master_awvalid),
	.awburst(io_master_awburst),
	.awlen(io_master_awlen),
	.awready(io_master_awready),
	.wdata(io_master_wdata),
	.wlast(io_master_wlast),
	.wstrb(io_master_wstrb),
	.wvalid(io_master_wvalid),
	.wready(io_master_wready),
	.bresp(io_master_bresp),
	.bvalid(io_master_bvalid),
	.bready(io_master_bready)
);
///////////wire信号////////
wire [5:0]io_sram0_addr;
wire io_sram0_cen;
wire io_sram0_wen;
wire [127:0]io_sram0_wmask;
wire [127:0] io_sram0_wdata;
wire [127:0] io_sram0_rdata;

wire [5:0] io_sram1_addr;
wire io_sram1_cen;
wire io_sram1_wen;
wire [127:0]io_sram1_wmask;
wire [127:0] io_sram1_wdata;
wire [127:0] io_sram1_rdata;

wire [5:0] io_sram2_addr;
wire io_sram2_cen;
wire io_sram2_wen;
wire [127:0]io_sram2_wmask;
wire [127:0] io_sram2_wdata;
wire [127:0] io_sram2_rdata;

wire [5:0] io_sram3_addr;
wire io_sram3_cen;
wire io_sram3_wen;
wire [127:0]io_sram3_wmask;
wire [127:0] io_sram3_wdata;
wire [127:0] io_sram3_rdata;

wire[5:0] io_sram4_addr;
wire io_sram4_cen;
wire io_sram4_wen;
wire [127:0]io_sram4_wmask;
wire[127:0] io_sram4_wdata;
wire[127:0] io_sram4_rdata;

wire[5:0] io_sram5_addr;
wire io_sram5_cen;
wire io_sram5_wen;
wire [127:0]io_sram5_wmask;
wire[127:0] io_sram5_wdata;
wire[127:0] io_sram5_rdata;

wire[5:0] io_sram6_addr;
wire io_sram6_cen;
wire io_sram6_wen;
wire [127:0]io_sram6_wmask;
wire[127:0] io_sram6_wdata;
wire[127:0] io_sram6_rdata;

wire[5:0] io_sram7_addr;
wire io_sram7_cen;
wire io_sram7_wen;
wire [127:0]io_sram7_wmask;
wire[127:0] io_sram7_wdata;
wire[127:0] io_sram7_rdata;
ysyx_22050533  ysyx_22050533_0(
.clock(clock),
.reset(reset),
.io_interrupt(),
.inst(inst),
.cpupc(cpupc),
.ebreak(ebreak),
.not_have(not_have),
.dnpc(dnpc),
.inst_finish(inst_finish),
.mem_finish(mem_finish),
.inst_update(inst_update),
.dnpc_reg_wb(dnpc_reg_wb),
.cpupc_reg_wb(cpupc_reg_wb),
.cpupc_reg_finish(cpupc_reg_finish),
.inst_reg_wb(inst_reg_wb),
.io_sram0_addr(io_sram0_addr),
.io_sram0_cen(io_sram0_cen),
.io_sram0_wen(io_sram0_wen),
.io_sram0_wmask(io_sram0_wmask),
.io_sram0_wdata(io_sram0_wdata),
.io_sram0_rdata(io_sram0_rdata),

.io_sram1_addr(io_sram1_addr),
.io_sram1_cen(io_sram1_cen),
.io_sram1_wen(io_sram1_wen),
.io_sram1_wmask(io_sram1_wmask),
.io_sram1_wdata(io_sram1_wdata),
.io_sram1_rdata(io_sram1_rdata),

.io_sram2_addr(io_sram2_addr),
.io_sram2_cen(io_sram2_cen),
.io_sram2_wen(io_sram2_wen),
.io_sram2_wmask(io_sram2_wmask),
.io_sram2_wdata(io_sram2_wdata),
.io_sram2_rdata(io_sram2_rdata),

.io_sram3_addr(io_sram3_addr),
.io_sram3_cen(io_sram3_cen),
.io_sram3_wen(io_sram3_wen),
.io_sram3_wmask(io_sram3_wmask),
.io_sram3_wdata(io_sram3_wdata),
.io_sram3_rdata(io_sram3_rdata),

.io_sram4_addr(io_sram4_addr),
.io_sram4_cen(io_sram4_cen),
.io_sram4_wen(io_sram4_wen),
.io_sram4_wmask(io_sram4_wmask),
.io_sram4_wdata(io_sram4_wdata),
.io_sram4_rdata(io_sram4_rdata),

.io_sram5_addr(io_sram5_addr),
.io_sram5_cen(io_sram5_cen),
.io_sram5_wen(io_sram5_wen),
.io_sram5_wmask(io_sram5_wmask),
.io_sram5_wdata(io_sram5_wdata),
.io_sram5_rdata(io_sram5_rdata),

.io_sram6_addr(io_sram6_addr),
.io_sram6_cen(io_sram6_cen),
.io_sram6_wen(io_sram6_wen),
.io_sram6_wmask(io_sram6_wmask),
.io_sram6_wdata(io_sram6_wdata),
.io_sram6_rdata(io_sram6_rdata),

.io_sram7_addr(io_sram7_addr),
.io_sram7_cen(io_sram7_cen),
.io_sram7_wen(io_sram7_wen),
.io_sram7_wmask(io_sram7_wmask),
.io_sram7_wdata(io_sram7_wdata),
.io_sram7_rdata(io_sram7_rdata),

.io_master_awready(io_master_awready),
.io_master_awvalid(io_master_awvalid),
.io_master_awid (io_master_awid ),
.io_master_awaddr(io_master_awaddr),
.io_master_awlen(io_master_awlen),
.io_master_awsize(io_master_awsize),
.io_master_awburst(io_master_awburst),
.io_master_wready(io_master_wready),
.io_master_wvalid(io_master_wvalid),
.io_master_wdata(io_master_wdata),
.io_master_wstrb(io_master_wstrb),
.io_master_wlast(io_master_wlast),
.io_master_bready(io_master_bready),
.io_master_bvalid(io_master_bvalid),
.io_master_bid(io_master_bid),
.io_master_bresp(io_master_bresp),
.io_master_arready(io_master_arready),
.io_master_arvalid(io_master_arvalid),
.io_master_arid(io_master_arid),
.io_master_araddr(io_master_araddr),
.io_master_arlen(io_master_arlen),
.io_master_arsize(io_master_arsize),
.io_master_arburst(io_master_arburst),
.io_master_rready(io_master_rready),
.io_master_rvalid(io_master_rvalid),
.io_master_rid(io_master_rid),
.io_master_rresp(io_master_rresp),
.io_master_rdata(io_master_rdata),
.io_master_rlast(io_master_rlast),

.io_slave_awready(),
.io_slave_awvalid(),
.io_slave_awid(),
.io_slave_awaddr(),
.io_slave_awlen(),
.io_slave_awsize(),
.io_slave_awburst(),
.io_slave_wready(),
.io_slave_wvalid(),
.io_slave_wdata(),
.io_slave_wstrb(),
.io_slave_wlast(),
.io_slave_bready(),
.io_slave_bvalid(),
.io_slave_bid(),
.io_slave_bresp(),
.io_slave_arready(),
.io_slave_arvalid(),
.io_slave_arid(),
.io_slave_araddr(),
.io_slave_arlen(),
.io_slave_arsize(),
.io_slave_arburst(),
.io_slave_rready(),
.io_slave_rvalid(),
.io_slave_rid(),
.io_slave_rresp(),
.io_slave_rdata(),
.io_slave_rlast()

);

 ysyx_22050533_sram sram_0(
.clock(clock),
.io_sram0_addr(io_sram0_addr),
.io_sram0_cen(io_sram0_cen),
.io_sram0_wen(io_sram0_wen),
.io_sram0_wmask(io_sram0_wmask),
.io_sram0_wdata(io_sram0_wdata),
.io_sram0_rdata(io_sram0_rdata),

.io_sram1_addr(io_sram1_addr),
.io_sram1_cen(io_sram1_cen),
.io_sram1_wen(io_sram1_wen),
.io_sram1_wmask(io_sram1_wmask),
.io_sram1_wdata(io_sram1_wdata),
.io_sram1_rdata(io_sram1_rdata),

.io_sram2_addr(io_sram2_addr),
.io_sram2_cen(io_sram2_cen),
.io_sram2_wen(io_sram2_wen),
.io_sram2_wmask(io_sram2_wmask),
.io_sram2_wdata(io_sram2_wdata),
.io_sram2_rdata(io_sram2_rdata),

.io_sram3_addr(io_sram3_addr),
.io_sram3_cen(io_sram3_cen),
.io_sram3_wen(io_sram3_wen),
.io_sram3_wmask(io_sram3_wmask),
.io_sram3_wdata(io_sram3_wdata),
.io_sram3_rdata(io_sram3_rdata),

.io_sram4_addr(io_sram4_addr),
.io_sram4_cen(io_sram4_cen),
.io_sram4_wen(io_sram4_wen),
.io_sram4_wmask(io_sram4_wmask),
.io_sram4_wdata(io_sram4_wdata),
.io_sram4_rdata(io_sram4_rdata),

.io_sram5_addr(io_sram5_addr),
.io_sram5_cen(io_sram5_cen),
.io_sram5_wen(io_sram5_wen),
.io_sram5_wmask(io_sram5_wmask),
.io_sram5_wdata(io_sram5_wdata),
.io_sram5_rdata(io_sram5_rdata),

.io_sram6_addr(io_sram6_addr),
.io_sram6_cen(io_sram6_cen),
.io_sram6_wen(io_sram6_wen),
.io_sram6_wmask(io_sram6_wmask),
.io_sram6_wdata(io_sram6_wdata),
.io_sram6_rdata(io_sram6_rdata),

.io_sram7_addr(io_sram7_addr),
.io_sram7_cen(io_sram7_cen),
.io_sram7_wen(io_sram7_wen),
.io_sram7_wmask(io_sram7_wmask),
.io_sram7_wdata(io_sram7_wdata),
.io_sram7_rdata(io_sram7_rdata)
);

endmodule
module ysyx_22050533_sram(
	input clock,
	input [5:0]io_sram0_addr,
  input io_sram0_cen,
	input io_sram0_wen,
	input [127:0]io_sram0_wmask,
	input[127:0] io_sram0_wdata,
	output[127:0] io_sram0_rdata,

	input[5:0] io_sram1_addr,
	input io_sram1_cen,
	input io_sram1_wen,
	input [127:0]io_sram1_wmask,
	input[127:0] io_sram1_wdata,
	output[127:0] io_sram1_rdata,

	input[5:0] io_sram2_addr,
	input io_sram2_cen,
	input io_sram2_wen,
	input [127:0]io_sram2_wmask,
	input[127:0] io_sram2_wdata,
	output[127:0] io_sram2_rdata,

	input[5:0] io_sram3_addr,
	input io_sram3_cen,
	input io_sram3_wen,
	input [127:0]io_sram3_wmask,
	input[127:0] io_sram3_wdata,
	output[127:0] io_sram3_rdata,

	input[5:0] io_sram4_addr,
	input io_sram4_cen,
	input io_sram4_wen,
	input [127:0]io_sram4_wmask,
	input[127:0] io_sram4_wdata,
	output[127:0] io_sram4_rdata,

	input[5:0] io_sram5_addr,
	input io_sram5_cen,
	input io_sram5_wen,
	input [127:0]io_sram5_wmask,
	input[127:0] io_sram5_wdata,
	output[127:0] io_sram5_rdata,

	input[5:0] io_sram6_addr,
	input io_sram6_cen,
	input io_sram6_wen,
	input [127:0]io_sram6_wmask,
	input[127:0] io_sram6_wdata,
	output[127:0] io_sram6_rdata,

	input[5:0] io_sram7_addr,
	input io_sram7_cen,
	input io_sram7_wen,
	input [127:0]io_sram7_wmask,
	input[127:0] io_sram7_wdata,
	output[127:0] io_sram7_rdata
);
ysyx_22050533_S011HD1P_X32Y2D128_BW sram_0(
.Q(io_sram0_rdata),
.CLK(clock),
.CEN(io_sram0_cen),
.WEN(io_sram0_wen),
.BWEN(io_sram0_wmask),
.A(io_sram0_addr),
.D(io_sram0_wdata)
);
ysyx_22050533_S011HD1P_X32Y2D128_BW sram_1(
.Q(io_sram1_rdata),
.CLK(clock),
.CEN(io_sram1_cen),
.WEN(io_sram1_wen),
.BWEN(io_sram1_wmask),
.A(io_sram1_addr),
.D(io_sram1_wdata)
);
ysyx_22050533_S011HD1P_X32Y2D128_BW sram_2(
.Q(io_sram2_rdata),
.CLK(clock),
.CEN(io_sram2_cen),
.WEN(io_sram2_wen),
.BWEN(io_sram2_wmask),
.A(io_sram2_addr),
.D(io_sram2_wdata)
);
ysyx_22050533_S011HD1P_X32Y2D128_BW sram_3(
.Q(io_sram3_rdata),
.CLK(clock),
.CEN(io_sram3_cen),
.WEN(io_sram3_wen),
.BWEN(io_sram3_wmask),
.A(io_sram3_addr),
.D(io_sram3_wdata)
);

ysyx_22050533_S011HD1P_X32Y2D128_BW sram_4(
.Q(io_sram4_rdata),
.CLK(clock),
.CEN(io_sram4_cen),
.WEN(io_sram4_wen),
.BWEN(io_sram4_wmask),
.A(io_sram4_addr),
.D(io_sram4_wdata)
);
ysyx_22050533_S011HD1P_X32Y2D128_BW sram_5(
.Q(io_sram5_rdata),
.CLK(clock),
.CEN(io_sram5_cen),
.WEN(io_sram5_wen),
.BWEN(io_sram5_wmask),
.A(io_sram5_addr),
.D(io_sram5_wdata)
);
ysyx_22050533_S011HD1P_X32Y2D128_BW sram_6(
.Q(io_sram6_rdata),
.CLK(clock),
.CEN(io_sram6_cen),
.WEN(io_sram6_wen),
.BWEN(io_sram6_wmask),
.A(io_sram6_addr),
.D(io_sram6_wdata)
);
ysyx_22050533_S011HD1P_X32Y2D128_BW sram_7(
.Q(io_sram7_rdata),
.CLK(clock),
.CEN(io_sram7_cen),
.WEN(io_sram7_wen),
.BWEN(io_sram7_wmask),
.A(io_sram7_addr),
.D(io_sram7_wdata)
);
endmodule
module ysyx_22050533_S011HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : {4{$random}};
end

wire [Wen_Width-1:0]ram_0 ;
assign ram_0=ram[0];
endmodule

module ysyx_22050533_axi_full_s2(
	input  clock,
	input  reset,
	//读地址通道
	input  [31:0]araddr,
	input  arvalid,
	input  [1:0]arburst,//常为01 因为是通过cache传输
	input  [7:0]arlen,
	input  [2:0]arsize,//因为传输rdata为64bit 所以arsize恒为3 因为主机从机rdata宽度一样 所以用不到
	output  arready,
	//读数据通道
	output [63:0]rdata,
	output reg [1:0]rresp,
	output reg rvalid,
	output rlast,
	input reg rready,
	//写地址通道
	input  [31:0]awaddr,
	input  awvalid,
	input  [1:0]awburst,//常为01 因为是通过cache传输
	input  [7:0]awlen,
	output awready,
	//写数据通道
	input  [63:0]wdata,
	input  wlast,
	input  [7:0]wstrb,
	input  wvalid,
	output wready,
	//写回复通道
	output reg[1:0]bresp,
	output bvalid,
	input  bready
);
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);

import "DPI-C" function void vpmem_write(
			input longint waddr, input longint wdata, input byte wmask,input longint use_wen);

///////////////////////////////mem_write/////////////////
//寄存器 写回馈信号也需要寄存器
reg [31:0]r_araddr;
reg [7:0] c_arlen;
//reg [7:0] c_awlen;
reg [31:0]r_awaddr;
//reg testwrite;
//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARVALID=3'd1,
						READ_TRANS=3'd2,
						READ_FINISH=3'd3;

reg [2:0]state;
always @(posedge clock)begin
	if(reset)
		state<=READ_IDLE;
	else if((state==READ_IDLE)&arvalid)
		state<=READ_ARVALID;
	else if((state==READ_ARVALID)&rready)
		state<=READ_TRANS;
	else if((state==READ_TRANS)&rlast)
		state<=READ_FINISH;
	else if(state==READ_FINISH)
		state<=READ_IDLE;
end
//arready信号
assign arready=(state==READ_IDLE);
//araddr信号寄存器
always @(posedge clock)begin
	if(arvalid&&arready)
		r_araddr<=araddr;
end
//rdata信号
always @(posedge clock)begin
	//if(rvalid&rready)begin
	if(state==READ_TRANS&(arburst==2'b01))begin
		vpmem_read({{32'b0},r_araddr}, rdata);
		rresp<='d0;
		rvalid<='d1;//只有读出数据之后才能让其有效
		r_araddr<=r_araddr+32'd8;//因为一次限制读8B 所以每读上一个数据地址移动8位
	end
	else
		rvalid<='d0;
	if(rlast)begin
		rvalid<='d0;
	end
end
always @(posedge clock)begin
	if(reset)begin
		c_arlen<=0;
	end
	if(state==READ_TRANS&(arburst==2'b01))begin
		c_arlen<=c_arlen+1;
	end
	if(rlast|(c_arlen==arlen))begin
		c_arlen<=0;
	end
end
wire un_use;
assign un_use=0;
//
//rlast信号
assign rlast=(c_arlen==arlen);
//写信号状态机
//////////////////////////mem_write//////////////////////////////
reg [2:0]write_state;
parameter     WRITE_IDLE       = 3'd0 ,
							WRITE_AW_VALID	 =3'd1,
							WRITE_W_VALID	 =3'd2,
							WRITE_FINISH 		 =3'd3;
always @(posedge clock)begin
	if(reset)
		write_state<=WRITE_IDLE;
	else if((write_state==WRITE_IDLE)&awvalid)
		write_state<=WRITE_AW_VALID;
	else if((write_state==WRITE_AW_VALID)&(wvalid&wlast))
		write_state<=WRITE_FINISH;
	else if((write_state==WRITE_AW_VALID)&(wvalid&(~wlast)))
		write_state<=WRITE_W_VALID;
	else if((write_state==WRITE_W_VALID)&wlast)
		write_state<=WRITE_FINISH;
	else if(write_state==WRITE_FINISH)
		write_state<=WRITE_IDLE;
end
//awready wready信号
assign awready=(write_state==WRITE_IDLE);
assign wready =(write_state==WRITE_AW_VALID)|(write_state==WRITE_W_VALID);

always @(posedge clock)begin
	//if(write_state==WRITE_AW_VALID)begin
	if(wvalid&wready&(awburst==2'b01))begin
		vpmem_write({{32'b0},r_awaddr}, wdata, wstrb,64'd1);
		r_awaddr<=r_awaddr+32'd8;
		//testwrite<=1;
end
	//else testwrite<=0;
if(wlast)
		bresp<='d1;
else begin
		bresp<=2'b10;
	end
end
assign bvalid=(write_state==WRITE_W_VALID);
always @(posedge clock)begin
	if(awvalid&awready)
		r_awaddr<=awaddr;
end
endmodule


