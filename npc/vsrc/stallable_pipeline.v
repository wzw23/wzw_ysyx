module stallable_pipeline(
	input clk,
	input rst,
	input mem_finish,
	input validin,
	input [31:0]inst,
	//id
	input not_jump,
	input [63:0]dnpc,
	input [63:0]cpupc,
	input [11:0]e_j_b_inst,
	output reg [63:0]dnpc_reg_id,
	output reg [63:0]cpupc_reg_id,
	output reg [31:0]inst_reg_id,
	output reg [11:0]e_j_b_inst_reg_id,
	//is
	input [3:0]alu_src1,
	input [2:0]alu_src2,
	input [16:0]alu_control,
	input data_ram_ren,
	input data_ram_wen,
	input [7:0]wmask,
	input [2:0]sel_rf_res,
	input [6:0]l_choose,
	input w_choose,
	input rf_wen,
	input [63:0]src1,
	input [63:0]src2,
	input [4:0]rd,//rf waddr
	input [63:0]imm,
	input [63:0]c_rdata,
	output reg [63:0]dnpc_reg_is,
	output reg [63:0]cpupc_reg_is,
	output reg [3:0]alu_src1_reg_is,
	output reg [2:0]alu_src2_reg_is,
	output reg [16:0]alu_control_reg_is,
	output reg data_ram_ren_reg_is,
	output reg data_ram_wen_reg_is,
	output reg [7:0]wmask_reg_is,
	//output reg [2:0]sel_rf_res_reg_is,
	output reg [6:0]l_choose_reg_is,
	output reg w_choose_reg_is,
	//output reg rf_wen_reg_is,
	output reg [63:0]src1_reg_is,
	output reg [63:0]src2_reg_is,
	//output reg [4:0]rd_reg_is,//rf waddr
	output reg [63:0]imm_reg_is,
	output reg [63:0]c_rdata_reg_is,
	output reg [11:0]e_j_b_inst_reg_is,
	//wb
	//input [2:0]sel_rf_res,
	//input rf_wen,
	input [63:0]alu_result,
	input [63:0]ram_data,
	input [63:0]set_dnpc_data,
	//input [63:0]rd,
	//input  [63:0]c_rdata,
	output reg [31:0]inst_reg_wb,
	output reg [11:0]e_j_b_inst_reg_wb,
	output reg [63:0]dnpc_reg_wb,
	output reg [63:0]cpupc_reg_wb,
	output reg [2:0]sel_rf_res_reg_wb,
	output reg rf_wen_reg_wb,
	output reg [63:0]alu_result_reg_wb,
	output reg [63:0]ram_data_reg_wb,
	output reg [4:0]rd_reg_wb,
	output reg [63:0]c_rdata_reg_wb,
	output reg [63:0]cpupc_reg_finish,
	
	input out_allow,
	output validout,

	output id_reg_finish,
  output is_reg_finish,
	output wb_reg_finish,


	output reg pipe1_valid,
	output reg pipe2_valid,
	output reg pipe3_valid,
	output reg ebreak_finish,
	input  control_hazard

);

	reg [2:0]sel_rf_res_reg_is;
	reg rf_wen_reg_is;
	reg [4:0]rd_reg_is;//rf waddr
//pipe1 id
//pipe2 ls
//pipe3 wb
	//reg pipe1_valid;
	reg [31:0]inst_reg_is;
	//reg pipe2_valid;
	//reg pipe3_valid;

	reg not_jump_reg_id;
	reg not_jump_reg_is;
	reg not_jump_reg_wb;
	wire pipe1_allow_in;
	wire pipe1_ready_go;
	wire pipe1_to_pipe2_valid;

	wire pipe2_allow_in;
	wire pipe2_ready_go;
	wire pipe2_to_pipe3_valid;
	
	wire pipe3_allow_in;
	wire pipe3_ready_go;

//pipe1
	assign pipe1_ready_go=~control_hazard;//译码是瞬时完成的
	assign pipe1_allow_in=!pipe1_valid||pipe1_ready_go&&pipe2_allow_in;//若!pipe1_valid&&pipe2_allowin表示pipe1向pipe2传输的是无效数据 并且已经传输 若pipe1_valid&&pipe1_ready_go&&pipe2_allowin表示传输的是有效数据 并且将在下个周期传输
	assign pipe1_to_pipe2_valid=pipe1_valid&&pipe1_ready_go;//认为教科书上解释错误 此处信号表示的原因是pipe1传输给pipe2的信号是否有效 即总线上的valid信号
	assign id_reg_finish=validin&&pipe1_allow_in;
	always@(posedge clk)begin
		if(rst)
			pipe1_valid<='d0;
		else if(pipe1_allow_in)
			pipe1_valid<=validin;
		if(validin&&pipe1_allow_in)begin
			inst_reg_id<=inst;
			e_j_b_inst_reg_id<=e_j_b_inst;
			cpupc_reg_id<=cpupc;
			dnpc_reg_id<=dnpc;
			not_jump_reg_id<=not_jump;
		end
	end
//pipe2
 assign pipe2_ready_go=mem_finish;//mem_finish时表示exe（is）完成
 	assign pipe2_allow_in=!pipe2_valid||pipe2_ready_go&&pipe3_allow_in;
	assign pipe2_to_pipe3_valid=pipe2_valid&&pipe2_ready_go;
	assign is_reg_finish=pipe1_to_pipe2_valid&&pipe2_allow_in;
	always@(posedge clk)begin
		if(rst)
			pipe2_valid<='d0;
		else if(pipe2_allow_in)
			pipe2_valid<=pipe1_to_pipe2_valid;
		if(pipe1_to_pipe2_valid&&pipe2_allow_in)begin
			alu_src1_reg_is<=alu_src1;
			alu_src2_reg_is<=alu_src2;
			alu_control_reg_is<=alu_control;
			data_ram_ren_reg_is<=data_ram_ren;
			data_ram_wen_reg_is<=data_ram_wen;
			wmask_reg_is<=wmask;
			sel_rf_res_reg_is<=sel_rf_res;
			l_choose_reg_is<=l_choose;
			w_choose_reg_is<=w_choose;
			rf_wen_reg_is<=rf_wen;
			src1_reg_is<=src1;
			src2_reg_is<=src2;
			rd_reg_is<=rd;
			imm_reg_is<=imm;
			c_rdata_reg_is<=c_rdata;
			e_j_b_inst_reg_is<=e_j_b_inst_reg_id;
			cpupc_reg_is<=cpupc_reg_id;
			dnpc_reg_is<=dnpc_reg_id;
			not_jump_reg_is<=not_jump_reg_id;
			inst_reg_is<=inst_reg_id;
		end
	end
//pipe3
 assign pipe3_ready_go=1;//对于寄存器来说写回信号一定能在一个周期内完成 因此
 //写回信号恒为1
 	assign pipe3_allow_in=!pipe3_valid||pipe3_ready_go&&out_allow;//out_allow表示是否能一直输出 此处设置为1
	assign wb_reg_finish=pipe2_to_pipe3_valid&&pipe3_allow_in;
	always@(posedge clk)begin
		if(rst)
			pipe3_valid<='d0;
		else if(pipe3_allow_in)
			pipe3_valid<=pipe2_to_pipe3_valid;
		if(pipe2_to_pipe3_valid&&pipe3_allow_in)begin
			sel_rf_res_reg_wb<=sel_rf_res_reg_is;
			rf_wen_reg_wb<=rf_wen_reg_is;
			alu_result_reg_wb<=alu_result;
			ram_data_reg_wb<=ram_data;
			rd_reg_wb<=rd_reg_is;
			c_rdata_reg_wb<=c_rdata_reg_is;
			cpupc_reg_wb<=cpupc_reg_is;
			dnpc_reg_wb<=set_dnpc_data;
			e_j_b_inst_reg_wb<=e_j_b_inst_reg_is;
			not_jump_reg_wb<=not_jump_reg_is;
			inst_reg_wb<=inst_reg_is;

		end
	end
	assign validout=pipe3_valid&&pipe3_ready_go;//新的结束信号
	always@(posedge clk)begin
		if(rst)begin
			cpupc_reg_finish<=64'h80000000;
			ebreak_finish<=0;
		end
		else begin
			ebreak_finish<=e_j_b_inst_reg_wb[0];
			if(not_jump_reg_wb)
				cpupc_reg_finish<=cpupc_reg_wb+4;
			else
				cpupc_reg_finish<=dnpc_reg_wb;
		end
	end

endmodule
