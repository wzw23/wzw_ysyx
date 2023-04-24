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
.araddr2(araddr2),
.arvalid2(arvalid2),
.arburst2(arburst2),
.arlen2(arlen2),
.arsize2(arsize2),
.arready2(arready2),
.rdata2(rdata2),
.rresp2(rresp2),
.rvalid2(rvalid2),
.rlast2(rlast2),
.rready2(rready2),
.awaddr2(awaddr2),
.awvalid2(awvalid2),
.awburst2(awburst2),
.awlen2(awlen2),
.awready2(awready2),
.wdata2(wdata2),
.wlast2(wlast2),
.wstrb2(wstrb2),
.wvalid2(wvalid2),
.wready2(wready2),
.bresp2(bresp2),
.bvalid2(bvalid2),
.bready2(bready2)
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
.use_device_finish(device_finish)
);
///////////////////////////////////////////////////////////////////
//assign device_finish=((use_cache==0)&inst_update);
assign mem_finish=(use_cache&cache_finish)|((!use_cache)&device_finish);
assign r_rdata_ld=(use_cache)?r_rdata_ld_cache:
									r_rdata_ld_device;
endmodule
