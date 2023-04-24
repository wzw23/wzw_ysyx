//`include "hong.v"
`define alu_length 17
//单周期cpu总模块
module top(
  input clk,
  input rst,
	output [31:0]inst,
  //input [31:0] in,
  output [63:0] cpupc,
  output ebreak,
	output not_have,
	output [63:0]dnpc,
	output inst_finish,
	output mem_finish,
	output inst_update
);
//////////////////if///////////////////////
	wire [63:0]c_rdata;
	wire [1:0]sel_nextpc;
	wire [63:0]imm;
	wire [63:0]src1;
	wire [63:0]src2;
  // 位宽为1比特, 复位值为1'b1, 写使能一直有效
  //Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);
  // 位宽为3比特, 复位值为3'b0, 写使能为out[0]
  //Reg #(3, 3'b0) i1 (clk, rst, in[3:1], out[3:1], out[0]);
  //pc test
	
	//IF模块
	//wire [31:0]inst;
	wire [31:0]araddr_1;wire arvalid_1;wire arready_1;wire [63:0]rdata_1;wire [1:0]rresp_1;wire rvalid_1;wire rready_1;
  //If i0(clk, rst,cpupc,sel_nextpc,imm,src1,inst,dnpc,c_rdata,inst_update,mem_finish,.araddr(araddr_1),.arvalid(arvalid_1),.arready(arready_1),.rdata(rdata_1),.rresp(rresp_1),.rvalid(rvalid_1),.rready(rready_1));//if

wire [31:0]araddr1;
wire arvalid1;
wire [1:0]arburst1;
wire [7:0]arlen1;
wire [2:0]arsize1;
wire arready1;
wire [63:0]rdata1;
wire [1:0]rresp1;
wire rvalid1;
wire rlast1;
wire rready1;

wire [31:0]araddr2;
wire arvalid2;
wire [1:0]arburst2;
wire [7:0]arlen2;
wire [2:0]arsize2;
wire arready2;
wire [63:0]rdata2;
wire [1:0]rresp2;
wire rvalid2;
wire rlast2;
wire rready2;
 
wire [31:0]awaddr2;
wire awvalid2;
wire [1:0]awburst2;
wire [7:0]awlen2;
wire awready2;
wire [63:0]wdata2;
wire wlast2;
wire [7:0]wstrb2;
wire wvalid2;
wire wready2;
wire [1:0]bresp2;
wire bvalid2;
wire bready2;


 If i0(
.clk(clk), 
.rst(rst),
.cpupc(cpupc),
.sel_nextpc(sel_nextpc),
.imm(imm),
.src1(src1),
.inst(inst),
.dnpc(dnpc),
.c_rdata(c_rdata),
.inst_update(inst_update),
.mem_finish(mem_finish),
.araddr1(araddr1),
.arvalid1(arvalid1),
.arburst1(arburst1),
.arlen1(arlen1),
.arsize1(arsize1),
.arready1(arready1),
.rdata1(rdata1),
.rresp1(rresp1),
.rvalid1(rvalid1),
.rlast1(rlast1),
.rready1(rready1)
);//if
  //decode_exec de(clk,inst,cpupc,dnpc);
///////////////////////////////////////////
	
	wire [4:0]rs1;
	wire [4:0]rs2;
	wire [4:0]rd;
	wire [11:0]op_d;
	wire [4:0]fu_7_d;
	wire [7:0]fu_3_d;
	wire [1:0]c_raddr;
	wire [1:0]c_waddr;
	wire [2:0]e_inst;
	id id_1(.inst(inst),.rs1(rs1),.rs2(rs2),.rd(rd),.imm(imm),.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.e_inst(e_inst),.c_raddr(c_raddr),.c_waddr(c_waddr));
	assign ebreak=e_inst[0];
	wire [3:0]sel_alu_src1;
	wire [2:0]sel_alu_src2;
	wire [`alu_length-1:0]alu_control;
	wire rf_wen;
	wire [2:0]sel_rf_res;
	wire data_ram_en;
	wire data_ram_wen;
	wire [2:0]alu_equal;
	wire [6:0]l_choose;
	wire w_choose;
	wire c_wchoose;
	wire c_wen;
	wire [7:0]wmask;
	wire c_wen1_2;
	control control_1(.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.sel_rf_res(sel_rf_res),.data_ram_en(data_ram_en),.data_ram_wen(data_ram_wen),.wmask(wmask),.alu_equal(alu_equal),.sel_nextpc(sel_nextpc),.l_choose(l_choose),.not_have(not_have),.w_choose(w_choose),.c_wchoose(c_wchoose),.c_wen(c_wen),.e_inst(e_inst),.inst_update(inst_update),.c_wen1_2(c_wen1_2),.mem_finish(mem_finish)) ;//控制模块

	wire [63:0]alu_result;
	wire [63:0]ram_addr;
	wire [63:0]ram_data;
	wire [63:0]wdata;
	exe exe_1(.clk(clk),.rst(rst),.imm(imm),.rs1(rs1),.rs2(rs2),.rd(rd),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.wdata(wdata),.alu_result(alu_result),.ram_addr(ram_addr),.src1(src1),.alu_equal(alu_equal),.cpupc(cpupc),.w_choose(w_choose),.src2(src2),.c_wchoose(c_wchoose),.c_wen(c_wen),.c_raddr(c_raddr),.c_waddr(c_waddr),.c_rdata(c_rdata),.e_inst(e_inst),.c_wen1_2(c_wen1_2));

	//访存模块
	
 /* wire [31:0]araddr_2;*/
	/*wire arvalid_2;*/
	/*wire arready_2;*/
	/*wire [63:0]rdata_2;*/
	/*wire [1:0]rresp_2;*/
	/*wire rvalid_2;*/
	/*wire rready_2;*/
	/*wire [31:0]awaddr_2;*/
	/*wire awvalid_2;*/
	/*wire awready_2;*/
	/*wire [63:0]wdata_2;*/
	/*wire [7:0]wstrb_2;*/
	/*wire wvalid_2;*/
	/*wire wready_2;*/
	/*wire [1:0]bresp_2;*/
	/*wire bvalid_2;*/
	/*wire bready_2;*/
	//mem #(64,64) mem0(.clk(clk),.rst(rst),.r_ren(data_ram_en),.r_raddr(ram_addr),.r_rdata(ram_data),.r_waddr(ram_addr),.r_mask(wmask),.r_wen(data_ram_wen),.r_wdata(src2),.l_choose(l_choose),.inst_update(inst_update),.mem_finish(mem_finish),.inst_finish(inst_finish),.araddr(araddr_2),.arvalid(arvalid_2),.arready(arready_2),.rdata(rdata_2),.rresp(rresp_2),.rvalid(rvalid_2),.rready(rready_2),.awaddr(awaddr_2),.awvalid(awvalid_2),.awready(awready_2),.wdata(wdata_2),.wstrb(wstrb_2),.wvalid(wvalid_2),.wready(wready_2),.bresp(bresp_2),.bvalid(bvalid_2),.bready(bready_2));
mem2 #(64,64)mem_2(
.clk(clk),
.rst(rst),
.r_ren(data_ram_en),
.r_raddr(ram_addr),
.r_rdata(ram_data),
.r_waddr(ram_addr),
.r_mask(wmask),
.r_wen(data_ram_wen),
.r_wdata(src2),
.l_choose(l_choose),
.inst_update(inst_update),
.mem_finish(mem_finish),
.inst_finish(inst_finish),
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

	//写回模块
	wb wb0(.r_data(ram_data),.alu_result(alu_result),.sel_rf_res(sel_rf_res),.wdata(wdata),c_rdata);
	//总线仲裁器
arbiter arbiter_1(
.clk(clk),
.rst(rst),
.araddr_1(araddr1),
.araddr_2(araddr2),
.arvalid_1(arvalid1),
.arvalid_2(arvalid2),
.arburst_1(arburst1),
.arburst_2(arburst2),
.arlen_1(arlen1),
.arlen_2(arlen2),
.arsize_1(arsize1),
.arsize_2(arsize2),
.arready_1(arready1),
.arready_2(arready2),
.rdata_1(rdata1),
.rdata_2(rdata2),
.rresp_1(rresp1),
.rresp_2(rresp2),
.rvalid_1(rvalid1),
.rvalid_2(rvalid2),
.rlast_1(rlast1),
.rlast_2(rlast2),
.rready_1(rready1),
.rready_2(rready2),
.awaddr_2(awaddr2),
.awvalid_2(awvalid2),
.awburst_2(awburst2),
.awlen_2(awlen2),
.awready_2(awready2),
.wdata_2(wdata2),
.wlast_2(wlast2),
.wstrb_2(wstrb2),
.wvalid_2(wvalid2),
.wready_2(wready2),
.bresp_2(bresp2),
.bvalid_2(bvalid2),
.bready_2(bready2),
.inst_update(inst_update),
.mem_finish(mem_finish)
);

 	/////////////////////////////开启波形图/////////////////////
	initial begin
		if ($test$plusargs("trace") != 0) begin
			$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
			$dumpfile("logs/vlt_dump.vcd");
			$dumpvars();
		end
		$display("[%0t] Model running...\n", $time);
	end
	/*/*//////////////////////////////////////////////////////////
	endmodule
