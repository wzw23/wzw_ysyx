module mem2 #(parameter ADDR_WIDTH=64,//地址位宽
	                parameter DATA_WIDTH=64)//数据位宽
(
	input clk,
	input rst,
	input r_ren,
	input [ADDR_WIDTH-1:0] r_raddr,
	output [DATA_WIDTH-1:0]r_rdata,

	input [ADDR_WIDTH-1:0] r_waddr,
	input [8-1:0] r_mask,
	input r_wen,
	input [DATA_WIDTH-1:0]r_wdata,
	input [6:0]l_choose,
	input inst_update,
	output mem_finish,
	output inst_finish,
	//总线信号
	output [31:0]araddr2,
	output arvalid2,
	output [1:0]arburst2,
	output [7:0]arlen2,
	output [2:0]arsize2,
	input arready2,
	input [63:0]rdata2,
	input [1:0]rresp2,
	input rvalid2,
	input rlast2,
	output rready2,
	//写地址通道
	output [31:0]awaddr2,
	output awvalid2,
	output [1:0]awburst2,
	output [7:0]awlen2,
	input awready2,
	//写数据通道
	output [63:0]wdata2,
  output wlast2,
	output [7:0]wstrb2,
	output wvalid2,
	input wready2,
	//写回复通道
	input [1:0]bresp2,
	input bvalid2,
	output bready2
);

//////////////////////////////////////////////crossbar/////////////
wire [31:0]araddr2_0;
wire arvalid2_0;
wire [1:0]arburst2_0;
wire [7:0]arlen2_0;
wire [2:0]arsize2_0;
wire arready2_0;
wire [63:0]rdata2_0;
wire [1:0]rresp2_0;
wire rvalid2_0;
wire rlast2_0;
wire rready2_0;
     //写地址通道
wire [31:0]awaddr2_0;
wire awvalid2_0;
wire [1:0]awburst2_0;
wire [7:0]awlen2_0;
wire awready2_0;
     //写数据通_0;
wire [63:0]wdata2_0;
wire wlast2_0;
wire [7:0]wstrb2_0;
wire wvalid2_0;
wire wready2_0;
     //写回复通_0;
wire [1:0]bresp2_0;
wire bvalid2_0;
wire bready2_0;
//////////代表mem_read_write////////////
wire [31:0]araddr2_1;
wire arvalid2_1;
wire [1:0]arburst2_1;
wire [7:0]arlen2_1;
wire [2:0]arsize2_1;
wire arready2_1;
wire [63:0]rdata2_1;
wire [1:0]rresp2_1;
wire rvalid2_1;
wire rlast2_1;
wire rready2_1;
     //写地址通道
wire [31:0]awaddr2_1;
wire awvalid2_1;
wire [1:0]awburst2_1;
wire [7:0]awlen2_1;
wire awready2_1;
     //写数据通_1;
wire [63:0]wdata2_1;
wire wlast2_1;
wire [7:0]wstrb2_1;
wire wvalid2_1;
wire wready2_1;

wire [1:0]bresp2_1;
wire bvalid2_1;
wire bready2_1;

//对于输出信号 若use_cache==1时 将信号2_0赋值 否则将2_1赋值
//对于输入信号 对于2_0若use_cache==1则将信号赋值 否则赋值为0 2_1同理
assign araddr2=use_cache?araddr2_0:
							araddr2_1
							;
assign arvalid2=use_cache?arvalid2_0:
							 arvalid2_1;
assign arburst2=use_cache?arburst2_0:
							 arburst2_1;
assign arlen2=use_cache?arlen2_0:
						 arlen2_1;
assign arsize2=use_cache?arsize2_0:
							arsize2_1;
assign arready2_0=use_cache?arready2:
								0;
assign arready2_1=(~use_cache)?arready2:
								0;
/////////////////////////////
assign rready2= use_cache?rready2_0:
							 rready2_1;
assign rdata2_0=use_cache?rdata2:
								0;
assign rdata2_1=(~use_cache)?rdata2:
								0;
assign rresp2_0=use_cache?rresp2:
								0;
assign rresp2_1=(!use_cache)?rresp2:
								0;
assign rvalid2_0=use_cache?rvalid2:
								0;
assign rvalid2_1=(!use_cache)?rvalid2:
								0;
assign rlast2_0=use_cache?rlast2:
								0;
assign rlast2_1=(!use_cache)?rlast2:
								0;

assign awaddr2 =(!use_cache)?awaddr2_1:
							awaddr2_0;
assign awvalid2=(!use_cache)?awvalid2_1:
							awvalid2_0;
assign awburst2 =(!use_cache)?awburst2_1:
							awburst2_0;
assign awlen2=(!use_cache)?awlen2_1:
							awlen2_0;
assign awready2_1=(!use_cache)?awready2:
								0;
assign awready2_0=(use_cache)?awready2:
								0;
assign wlast2=(!use_cache)?wlast2_1:
							wlast2_0;

assign wdata2  =(!use_cache)?wdata2_1:
							wdata2_0;
assign wstrb2  =(!use_cache)?wstrb2_1:
							wstrb2_0;
assign wvalid2 =(!use_cache)?wvalid2_1:
							wvalid2_0;
assign wready2_1=(!use_cache)?wready2:
								0;
assign wready2_0=(use_cache)?wready2:
								0;

assign bready2=(!use_cache)?bready2_1:
							bready2_0;
assign bresp2_1=(!use_cache)?bresp2:
								0;
assign bresp2_0=(use_cache)?bresp2:
								0;
assign bvalid2_1=(!use_cache)?bvalid2:
								0;
assign bvalid2_0=(use_cache)?bvalid2:
								0;
//////////////////////////////////////////////////////////////////
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);

import "DPI-C" function void vpmem_write(
	input longint waddr, input longint wdata, input byte wmask,input longint use_wen);

	wire cache_finish;	
	wire use_cache;
  wire [DATA_WIDTH-1:0]r_rdata_ld;
  wire [DATA_WIDTH-1:0]r_rdata_ld_cache;
  wire [DATA_WIDTH-1:0]r_rdata_ld_device;
	wire [DATA_WIDTH-1:0]r_rdata_lw;
	wire [DATA_WIDTH-1:0]r_rdata_lwu;
	wire [DATA_WIDTH-1:0]r_rdata_lh;
	wire [DATA_WIDTH-1:0]r_rdata_lhu;
	wire [DATA_WIDTH-1:0]r_rdata_lb;
	wire [DATA_WIDTH-1:0]r_rdata_lbu;
	assign use_cache=((r_raddr[31:0]>=32'h80000000)&(r_raddr[31:0]<=32'h87ffffff))|((r_waddr[31:0]>=32'h80000000)&(r_waddr[31:0]<=32'h87ffffff));//当访问内存时调用cache 当访问设备时为了缓存一致性 另其直接访问内存

	assign r_rdata_lw ={{32{r_rdata_ld[31]}},r_rdata_ld[31:0]};
	assign r_rdata_lwu={{32'b0},r_rdata_ld[31:0]};

	assign r_rdata_lh ={{48{r_rdata_ld[15]}},r_rdata_ld[15:0]};
	assign r_rdata_lhu={{48'b0},r_rdata_ld[15:0]};

	assign r_rdata_lb ={{56{r_rdata_ld[7]}},r_rdata_ld[7:0]};
	assign r_rdata_lbu={{56'b0},r_rdata_ld[7:0]};
	MuxKey #(7,7,64) mux3(r_rdata,l_choose,{//alu_src2赋值
		7'b0000001,r_rdata_ld,
		7'b0000010,r_rdata_lw,
		7'b0000100,r_rdata_lwu,
		7'b0001000,r_rdata_lh,
		7'b0010000,r_rdata_lhu,
		7'b0100000,r_rdata_lb,
		7'b1000000,r_rdata_lbu
		});
		Reg #(1,1'b0) finish(clk,rst,mem_finish,inst_finish,1'b1);
dcache dcache_0(
.clk(clk),
.rst(rst),
.use_cache(use_cache),
.r_ren(r_ren),
.raddr(r_raddr[31:0]),
.rdata_align(r_rdata_ld_cache),
.r_wen(r_wen),
.waddr(r_waddr[31:0]),
.wdata(r_wdata),
.wmask(r_mask),
.inst_update(inst_update),
.cache_finish(cache_finish),
//总线信号
.araddr2(araddr2_0),
.arvalid2(arvalid2_0),
.arburst2(arburst2_0),
.arlen2(arlen2_0),
.arsize2(arsize2_0),
.arready2(arready2_0),
.rdata2(rdata2_0),
.rresp2(rresp2_0),
.rvalid2(rvalid2_0),
.rlast2(rlast2_0),
.rready2(rready2_0),
.awaddr2(awaddr2_0),
.awvalid2(awvalid2_0),
.awburst2(awburst2_0),
.awlen2(awlen2_0),
.awready2(awready2_0),
.wdata2(wdata2_0),
.wlast2(wlast2_0),
.wstrb2(wstrb2_0),
.wvalid2(wvalid2_0),
.wready2(wready2_0),
.bresp2(bresp2_0),
.bvalid2(bvalid2_0),
.bready2(bready2_0)
);
///////////////////////////////crossbar绕过cache///////////////////
//////////////////////////////直接访问mem_read和mem_write访问cache
/*wire [63:0]device_wen;*/
/*assign device_wen={63'b0,r_wen&inst_update&(~use_cache)};*/
wire device_finish;
/*always @(*)begin*/
	/*//if((use_cache==0)&inst_update)begin*/
		/*//if(r_ren)begin*/
			/*vpmem_read({r_raddr}, r_rdata_ld_device);*/
			/*vpmem_write({r_waddr}, r_wdata, r_mask,device_wen);*/
		/*//end*/
		/*//else if(r_wen)begin*/
		/*//end*/
	/*end*/
mem_read_write mem_read_write_0(
.clk(clk),
.rst(rst),
.ren(r_ren&(~use_cache)),
.r_raddr(r_raddr),
.r_rdata(r_rdata_ld_device),
.wen(r_wen&(~use_cache)),
.r_waddr(r_waddr),
.r_wdata(r_wdata),
.r_mask(r_mask),
.inst_update(inst_update),
.use_device_en(~use_cache),
.use_device_finish(device_finish),
.araddr2(araddr2_1),
.arvalid2(arvalid2_1),
.arburst2(arburst2_1),
.arlen2(arlen2_1),
.arsize2(arsize2_1),
.arready2(arready2_1),
.rdata2(rdata2_1),
.rresp2(rresp2_1),
.rvalid2(rvalid2_1),
.rlast2(rlast2_1),
.rready2(rready2_1),
.awaddr2(awaddr2_1),
.awvalid2(awvalid2_1),
.awburst2(awburst2_1),
.awlen2(awlen2_1),
.awready2(awready2_1),
.wdata2(wdata2_1),
.wlast2(wlast2_1),
.wstrb2(wstrb2_1),
.wvalid2(wvalid2_1),
.wready2(wready2_1),
.bresp2(bresp2_1),
.bvalid2(bvalid2_1),
.bready2(bready2_1)
);
///////////////////////////////////////////////////////////////////
//assign device_finish=((use_cache==0)&inst_update);
assign mem_finish=(use_cache&cache_finish)|((!use_cache)&device_finish);
assign r_rdata_ld=(use_cache)?r_rdata_ld_cache:
									r_rdata_ld_device;
endmodule
