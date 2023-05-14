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
	output reg inst_finish,
	output mem_finish,
	output inst_update,
	output [63:0]dnpc_reg_wb,
	output [63:0]cpupc_reg_wb,
	output [63:0]cpupc_reg_finish,
	output [31:0]inst_reg_wb
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


wire isu_finish;
wire alu_finish;
wire ebreak_finish;
wire control_hazard;
//if
  wire not_jump;
	wire [63:0]c_rdata;
	//wire [1:0]sel_nextpc;
	wire [63:0]imm;
	wire [63:0]src1;
	wire [63:0]src2;

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
	wire [63:0]dnpc_jump_data;

	wire [11:0]e_j_b_inst;
//id
	//wire [4:0]rs1;
	//wire [4:0]rs2;
	wire rf_ren_src1;
	wire rf_ren_src2;
	wire [4:0]rd;
	wire [11:0]op_d;
	wire [4:0]fu_7_d;
	wire [7:0]fu_3_d;
	//wire [1:0]c_waddr;
//control
	wire [3:0]sel_alu_src1;
	wire [2:0]sel_alu_src2;
	wire [`alu_length-1:0]alu_control;
	wire rf_wen;
	wire [2:0]sel_rf_res;
	wire data_ram_en;
	wire data_ram_wen;
	//wire [2:0]alu_equal;
	wire [6:0]l_choose;
	wire w_choose;
	wire c_wchoose;
	wire c_wen;
	wire [7:0]wmask;
	wire c_wen1_2;
//is
	wire [63:0]alu_result;
	wire [63:0]ram_addr;
	wire [63:0]ram_data;
	wire [63:0]wdata;
///////////pipe////////////
  wire validin;
	wire [63:0]cpupc_reg_id;
	wire [31:0]inst_reg_id;
	wire [11:0]e_j_b_inst_reg_id;
	//wire [3:0]alu_src1;
	//wire [2:0]alu_src2;
	wire data_ram_ren;
	assign data_ram_ren=data_ram_en;
	wire [63:0]cpupc_reg_is;
	wire [3:0]alu_src1_reg_is;
	wire [2:0]alu_src2_reg_is;
	wire [16:0]alu_control_reg_is;
	wire data_ram_ren_reg_is;
	wire data_ram_wen_reg_is;
	wire [7:0]wmask_reg_is;
	//wire [2:0]sel_rf_res_reg_is;
	wire [6:0]l_choose_reg_is;
	wire w_choose_reg_is;
	//wire rf_wen_reg_is;
	wire [63:0]src1_reg_is;
	wire [63:0]src2_reg_is;
	//wire [4:0]rd_reg_is;//rf wadd;
	wire [63:0]imm_reg_is;
	wire [63:0]c_rdata_reg_is;
	wire [11:0]e_j_b_inst_reg_is;
	wire [11:0]e_j_b_inst_reg_wb;
	wire [63:0]dnpc_reg_id;
	wire [63:0]dnpc_reg_is;
	wire [2:0]sel_rf_res_reg_wb;
	wire rf_wen_reg_wb;
	wire [63:0]alu_result_reg_wb;
	wire [63:0]ram_data_reg_wb;
	wire [4:0]rd_reg_wb;
	wire [63:0]c_rdata_reg_wb;
	wire out_allow;
	wire validout;
	wire id_reg_finish;
  wire is_reg_finish;
	wire wb_reg_finish;
	wire pipe2_valid;
	wire pipe1_valid;
	wire pipe3_valid;
	assign out_allow=1;
	always@(posedge clk)begin
		if(rst)
			inst_finish<='d0;
		else if(validout)
			inst_finish<='d1;
		else 
			inst_finish<='d0;
	end

	
	assign validin=inst_update;
sram sram_0(
.clk(clk),
.io_sram0_addr(io_sram0_addr),
.io_sram0_cen(~io_sram0_cen),
.io_sram0_wen(~io_sram0_wen),
.io_sram0_wmask(~io_sram0_wmask),
.io_sram0_wdata(io_sram0_wdata),
.io_sram0_rdata(io_sram0_rdata),

.io_sram1_addr(io_sram1_addr),
.io_sram1_cen(~io_sram1_cen),
.io_sram1_wen(~io_sram1_wen),
.io_sram1_wmask(~io_sram1_wmask),
.io_sram1_wdata(io_sram1_wdata),
.io_sram1_rdata(io_sram1_rdata),

.io_sram2_addr(io_sram2_addr),
.io_sram2_cen(~io_sram2_cen),
.io_sram2_wen(~io_sram2_wen),
.io_sram2_wmask(~io_sram2_wmask),
.io_sram2_wdata(io_sram2_wdata),
.io_sram2_rdata(io_sram2_rdata),

.io_sram3_addr(io_sram3_addr),
.io_sram3_cen(~io_sram3_cen),
.io_sram3_wen(~io_sram3_wen),
.io_sram3_wmask(~io_sram3_wmask),
.io_sram3_wdata(io_sram3_wdata),
.io_sram3_rdata(io_sram3_rdata),

.io_sram4_addr(io_sram4_addr),
.io_sram4_cen(~io_sram4_cen),
.io_sram4_wen(~io_sram4_wen),
.io_sram4_wmask(~io_sram4_wmask),
.io_sram4_wdata(io_sram4_wdata),
.io_sram4_rdata(io_sram4_rdata),

.io_sram5_addr(io_sram5_addr),
.io_sram5_cen(~io_sram5_cen),
.io_sram5_wen(~io_sram5_wen),
.io_sram5_wmask(~io_sram5_wmask),
.io_sram5_wdata(io_sram5_wdata),
.io_sram5_rdata(io_sram5_rdata),

.io_sram6_addr(io_sram6_addr),
.io_sram6_cen(~io_sram6_cen),
.io_sram6_wen(~io_sram6_wen),
.io_sram6_wmask(~io_sram6_wmask),
.io_sram6_wdata(io_sram6_wdata),
.io_sram6_rdata(io_sram6_rdata),

.io_sram7_addr(io_sram7_addr),
.io_sram7_cen(~io_sram7_cen),
.io_sram7_wen(~io_sram7_wen),
.io_sram7_wmask(~io_sram7_wmask),
.io_sram7_wdata(io_sram7_wdata),
.io_sram7_rdata(io_sram7_rdata)
);

	stallable_pipeline stallable_pipeline_0(
	.clk(clk),
	.rst(rst),
	.isu_finish(isu_finish),
	.validin(validin),
	.inst(inst),
	//id
	.not_jump(not_jump),
	.dnpc(dnpc),
	.cpupc(cpupc),
	.e_j_b_inst(e_j_b_inst),
	.dnpc_reg_id(dnpc_reg_id),
	.cpupc_reg_id(cpupc_reg_id),
	.inst_reg_id(inst_reg_id),
	.e_j_b_inst_reg_id(e_j_b_inst_reg_id),
	//is
	.alu_src1(sel_alu_src1),
	.alu_src2(sel_alu_src2),
	.alu_control(alu_control),
	.data_ram_ren(data_ram_ren),
	.data_ram_wen(data_ram_wen),
	.wmask(wmask),
	.sel_rf_res(sel_rf_res),
	.l_choose(l_choose),
	.w_choose(w_choose),
	.rf_wen(rf_wen),
	.src1(src1),
	.src2(src2),
	.rd(rd),//rf waddr
	.imm(imm),
	.c_rdata(c_rdata),
	.dnpc_reg_is(dnpc_reg_is),
	.cpupc_reg_is(cpupc_reg_is),
	.alu_src1_reg_is(alu_src1_reg_is),
	.alu_src2_reg_is(alu_src2_reg_is),
	.alu_control_reg_is(alu_control_reg_is),
	.data_ram_ren_reg_is(data_ram_ren_reg_is),
	.data_ram_wen_reg_is(data_ram_wen_reg_is),
	.wmask_reg_is(wmask_reg_is),
	//.sel_rf_res_reg_is(sel_rf_res_reg_is),
	.l_choose_reg_is(l_choose_reg_is),
	.w_choose_reg_is(w_choose_reg_is),
	//.rf_wen_reg_is(rf_wen_reg_is),
	.src1_reg_is(src1_reg_is),
	.src2_reg_is(src2_reg_is),
	//.rd_reg_is(rd_reg_is),//rf waddr
	.imm_reg_is(imm_reg_is),
	.c_rdata_reg_is(c_rdata_reg_is),
	.e_j_b_inst_reg_is(e_j_b_inst_reg_is),
	 //wb
	.alu_result(alu_result),
	.ram_data(ram_data),
	.set_dnpc_data(dnpc_jump_data),
	.inst_reg_wb(inst_reg_wb),
	.e_j_b_inst_reg_wb(e_j_b_inst_reg_wb),
	.dnpc_reg_wb(dnpc_reg_wb),
	.cpupc_reg_wb(cpupc_reg_wb),

	.sel_rf_res_reg_wb(sel_rf_res_reg_wb),
	.rf_wen_reg_wb(rf_wen_reg_wb),
	.alu_result_reg_wb(alu_result_reg_wb),
	.ram_data_reg_wb(ram_data_reg_wb),
	.rd_reg_wb(rd_reg_wb),
	.c_rdata_reg_wb(c_rdata_reg_wb),
	.cpupc_reg_finish(cpupc_reg_finish),

	.out_allow(out_allow),
	.validout(validout),

	.id_reg_finish(id_reg_finish),
  .is_reg_finish(is_reg_finish),
	.wb_reg_finish(wb_reg_finish),

	.pipe1_valid(pipe1_valid),
	.pipe2_valid(pipe2_valid),
	.pipe3_valid(pipe3_valid),
	.ebreak_finish(ebreak_finish),
	.control_hazard(control_hazard)

);
//////////////////if///////////////////////
	If if_1(
		.clk(clk), 
		.rst(rst),
		.cpupc(cpupc),
		//.sel_nextpc(sel_nextpc),
		//.imm(imm),
		//.src1(src1),
		.inst(inst),
		.dnpc(dnpc),
		//.c_rdata(c_rdata),
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
		.rready1(rready1),
		.e_j_b_inst(e_j_b_inst),
		.dnpc_jump_data(dnpc_jump_data),
		.id_reg_finish(id_reg_finish),
		.cpupc_reg_is(cpupc_reg_is),
		.not_jump(not_jump),

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
  	.io_sram3_rdata(io_sram3_rdata)

	);//if
/////////////////////id//////////////////////
	id id_1(.clk(clk),.rst(rst),.inst(inst_reg_id),.rd(rd),.imm(imm),.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.e_j_b_inst(e_j_b_inst_reg_id),.rf_wen(rf_wen),.wdata(wdata),.src1(src1),.src2(src2),.c_rdata(c_rdata),.c_wchoose(c_wchoose),.c_wen(c_wen),.c_wen1_2(c_wen1_2),.cpupc(cpupc_reg_id),.rf_waddr(rd_reg_wb),.pipe1_valid(pipe1_valid),.pipe3_valid(pipe3_valid),.rf_wen_reg_wb(rf_wen_reg_wb),.rf_ren_src1(rf_ren_src1),.rf_ren_src2(rf_ren_src2),.control_hazard(control_hazard),.validout(validout),.id_reg_finish(id_reg_finish),.is_reg_finish(is_reg_finish));
	//assign ebreak=e_j_b_inst[0];
	//assign ebreak=e_j_b_inst_reg_wb[0];
	assign ebreak=ebreak_finish;
	control control_1(.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.sel_rf_res(sel_rf_res),.data_ram_en(data_ram_en),.data_ram_wen(data_ram_wen),.wmask(wmask),.l_choose(l_choose),.not_have(not_have),.w_choose(w_choose),.c_wchoose(c_wchoose),.c_wen(c_wen),.e_j_b_inst(e_j_b_inst_reg_id),.c_wen1_2(c_wen1_2),.rf_ren_src1(rf_ren_src1),.rf_ren_src2(rf_ren_src2)) ;//控制模块
/////////////////////////////////////////
///////////////////is//////////////////////
	exe exe_1(.clk(clk),.rst(rst),.imm(imm_reg_is),.sel_alu_src1(alu_src1_reg_is),.sel_alu_src2(alu_src2_reg_is),.alu_control(alu_control_reg_is),.alu_result(alu_result),.ram_addr(ram_addr),.src1(src1_reg_is),.cpupc(cpupc_reg_is),.w_choose(w_choose_reg_is),.src2(src2_reg_is),.e_j_b_inst(e_j_b_inst_reg_is),.c_rdata(c_rdata_reg_is),.dnpc_jump_data(dnpc_jump_data),.wb_reg_finish(wb_reg_finish),.alu_finish(alu_finish),.pipe2_valid(pipe2_valid));
	//访存模块
	mem2 #(64,64)mem_2(
		.clk(clk),
		.rst(rst),
		.r_ren(data_ram_ren_reg_is),
		.r_raddr(ram_addr),
		.r_rdata(ram_data),
		.r_waddr(ram_addr),
		.r_mask(wmask_reg_is),
		.r_wen(data_ram_wen_reg_is),
		.r_wdata(src2_reg_is),
		.l_choose(l_choose_reg_is),
		.pipe2_valid(pipe2_valid),
		.mem_finish(mem_finish),
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
		.bready2(bready2),
		.wb_reg_finish(wb_reg_finish),
		
		.io_sram0_addr(io_sram4_addr),
		.io_sram0_cen(io_sram4_cen),
		.io_sram0_wen(io_sram4_wen),
		.io_sram0_wmask(io_sram4_wmask),
		.io_sram0_wdata(io_sram4_wdata),
		.io_sram0_rdata(io_sram4_rdata),

		.io_sram1_addr(io_sram5_addr),
		.io_sram1_cen(io_sram5_cen),
		.io_sram1_wen(io_sram5_wen),
		.io_sram1_wmask(io_sram5_wmask),
		.io_sram1_wdata(io_sram5_wdata),
		.io_sram1_rdata(io_sram5_rdata),

		.io_sram2_addr(io_sram6_addr),
		.io_sram2_cen(io_sram6_cen),
		.io_sram2_wen(io_sram6_wen),
		.io_sram2_wmask(io_sram6_wmask),
		.io_sram2_wdata(io_sram6_wdata),
		.io_sram2_rdata(io_sram6_rdata),

		.io_sram3_addr(io_sram7_addr),
		.io_sram3_cen(io_sram7_cen),
		.io_sram3_wen(io_sram7_wen),
		.io_sram3_wmask(io_sram7_wmask),
		.io_sram3_wdata(io_sram7_wdata),
		.io_sram3_rdata(io_sram7_rdata)
	);
assign isu_finish=alu_finish&mem_finish;
/////////////////////////////////////////
///////////////////wb////////////////////
	//写回模块
	wb wb0(.r_data(ram_data_reg_wb),.alu_result(alu_result_reg_wb),.sel_rf_res(sel_rf_res_reg_wb),.wdata(wdata),.c_rdata(c_rdata_reg_wb));
////////////////////////////////////////
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
///////////////////////////////////////////

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
