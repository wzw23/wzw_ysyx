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
	wire [31:0]araddr_0;wire arvalid_0;wire arready_0;wire [63:0]rdata_0;wire [1:0]rresp_0;wire rvalid_0;wire rready_0;
  //If i0(clk, rst,cpupc,sel_nextpc,imm,src1,inst,dnpc,c_rdata,inst_update,mem_finish,.araddr(araddr_0),.arvalid(arvalid_0),.arready(arready_0),.rdata(rdata_0),.rresp(rresp_0),.rvalid(rvalid_0),.rready(rready_0));//if
  If i0(clk, rst,cpupc,sel_nextpc,imm,src1,inst,dnpc,c_rdata,inst_update,mem_finish);//if
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
	id id_0(.inst(inst),.rs1(rs1),.rs2(rs2),.rd(rd),.imm(imm),.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.e_inst(e_inst),.c_raddr(c_raddr),.c_waddr(c_waddr));
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
	control control_0(.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.sel_rf_res(sel_rf_res),.data_ram_en(data_ram_en),.data_ram_wen(data_ram_wen),.wmask(wmask),.alu_equal(alu_equal),.sel_nextpc(sel_nextpc),.l_choose(l_choose),.not_have(not_have),.w_choose(w_choose),.c_wchoose(c_wchoose),.c_wen(c_wen),.e_inst(e_inst),.inst_update(inst_update),.c_wen1_2(c_wen1_2),.mem_finish(mem_finish)) ;//控制模块

	wire [63:0]alu_result;
	wire [63:0]ram_addr;
	wire [63:0]ram_data;
	wire [63:0]wdata;
	exe exe_0(.clk(clk),.rst(rst),.imm(imm),.rs1(rs1),.rs2(rs2),.rd(rd),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.wdata(wdata),.alu_result(alu_result),.ram_addr(ram_addr),.src1(src1),.alu_equal(alu_equal),.cpupc(cpupc),.w_choose(w_choose),.src2(src2),.c_wchoose(c_wchoose),.c_wen(c_wen),.c_raddr(c_raddr),.c_waddr(c_waddr),.c_rdata(c_rdata),.e_inst(e_inst),.c_wen1_2(c_wen1_2));

	//访存模块
	
	wire [31:0]araddr_1;
	wire arvalid_1;
	wire arready_1;
	wire [63:0]rdata_1;
	wire [1:0]rresp_1;
	wire rvalid_1;
	wire rready_1;
	wire [31:0]awaddr_1;
	wire awvalid_1;
	wire awready_1;
	wire [63:0]wdata_1;
	wire [7:0]wstrb_1;
	wire wvalid_1;
	wire wready_1;
	wire [1:0]bresp_1;
	wire bvalid_1;
	wire bready_1;
	//mem #(64,64) mem0(.clk(clk),.rst(rst),.r_ren(data_ram_en),.r_raddr(ram_addr),.r_rdata(ram_data),.r_waddr(ram_addr),.r_mask(wmask),.r_wen(data_ram_wen),.r_wdata(src2),.l_choose(l_choose),.inst_update(inst_update),.mem_finish(mem_finish),.inst_finish(inst_finish),.araddr(araddr_1),.arvalid(arvalid_1),.arready(arready_1),.rdata(rdata_1),.rresp(rresp_1),.rvalid(rvalid_1),.rready(rready_1),.awaddr(awaddr_1),.awvalid(awvalid_1),.awready(awready_1),.wdata(wdata_1),.wstrb(wstrb_1),.wvalid(wvalid_1),.wready(wready_1),.bresp(bresp_1),.bvalid(bvalid_1),.bready(bready_1));
mem2 #(64,64)mem1(
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
.inst_finish(inst_finish)
);

	//写回模块
	wb wb0(.r_data(ram_data),.alu_result(alu_result),.sel_rf_res(sel_rf_res),.wdata(wdata),c_rdata);
	//总线仲裁器
/*arbiter arbiter_0(*/
/*.clk(clk),*/
/*.rst(rst),*/
/*.araddr_0(araddr_0),*/
/*.araddr_1(araddr_1),*/
/*.arvalid_0(0),*/
/*.arvalid_1(arvalid_1),*/
/*.arready_0(arready_0),*/
/*.arready_1(arready_1),*/
/*.rdata_0(rdata_0),*/
/*.rdata_1(rdata_1),*/
/*.rresp_0(rresp_0),*/
/*.rresp_1(rresp_1),*/
/*.rvalid_0(rvalid_0),*/
/*.rvalid_1(rvalid_1),*/
/*.rready_0(rready_0),*/
/*.rready_1(rready_1),*/
/*.awaddr_1(awaddr_1),*/
/*.awvalid_1(awvalid_1),*/
/*.awready_1(awready_1),*/
/*.wdata_1(wdata_1),*/
/*.wstrb_1(wstrb_1),*/
/*.wvalid_1(wvalid_1),*/
/*.wready_1(wready_1),*/
/*.bresp_1(bresp_1),*/
/*.bvalid_1(bvalid_1),*/
/*.bready_1(bready_1),*/
/*.inst_update(inst_update),*/
/*.mem_finish(mem_finish)*/
/*);*/

 	/////////////////////////////开启波形图/////////////////////
	/*initial begin*/
		/*if ($test$plusargs("trace") != 0) begin*/
			/*$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);*/
			/*$dumpfile("logs/vlt_dump.vcd");*/
			/*$dumpvars();*/
		/*end*/
		/*$display("[%0t] Model running...\n", $time);*/
	/*end*/
	/*/*//////////////////////////////////////////////////////////
	endmodule
