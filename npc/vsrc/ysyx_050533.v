//`include "hong.v"
`define alu_length 17
module ysyx_050533_Alu3(input clk,input rst,input [63:0]alu_src1, input [63:0]alu_src2,input [`alu_length-1:0]alu_control,output [63:0]alu_result,output[63:0]ram_addr,output [2:0]alu_equal,input w_choose,input wb_reg_finish,output alu_finish,input pipe2_valid);
		wire op_add;
		wire op_sub;
		wire op_slt;//有符号比较
		wire op_sltu;//无符号比较
		wire op_and;
		wire op_nor;//或非
		wire op_or;
		wire op_xor;//异或
		wire op_sll;//逻辑左移
		wire op_srl;//逻辑右移
		wire op_sra;//算术右移
		wire op_lui;//高位加载
		wire op_mul;
		wire op_divu;
		wire op_div;
		wire op_remu;
		wire op_rem;
		//添加信号
		//除法信号
		wire div_valid;
		wire div_ready;
		wire div_out_valid;
		reg  div_doing;
		reg  div_finish;
		reg  [63:0]div_result_r;
		wire [63:0]qutient;
		//乘法信号
		wire mul_valid;
		wire mul_ready;
		wire mul_out_valid;
		reg  mul_doing;
		reg  mul_finish;
		reg  [63:0]mul_result_r;
		wire [63:0]product;//乘积

		assign op_add=alu_control[0];
		assign op_sub=alu_control[1];
		assign op_slt=alu_control[2];//有符号比较
		assign op_sltu=alu_control[3];//无符号比较
		assign op_and=alu_control[4];
		assign op_nor=alu_control[5];//或非
		assign op_or=alu_control[6];
		assign op_xor=alu_control[7];//异或
		assign op_sll=alu_control[8];//逻辑左移
		assign op_srl=alu_control[9];//逻辑右移
		assign op_sra=alu_control[10];//算术右移
		assign op_lui=alu_control[11];//高位加载
		assign op_mul=alu_control[12];//乘法
		assign op_divu=alu_control[13];
		assign op_div=alu_control[14];
		assign op_remu=alu_control[15];
		assign op_rem=alu_control[16];
		
		//添加信号
		//乘法信号赋值
		/*除法器接受数据之后到下一个除法到来之前，div_valid都应该是零*/
    assign div_valid =(op_div|op_divu)&&!div_doing&&!div_out_valid&&!div_finish&&pipe2_valid;
    /*在除法期间，div_out_valid 不为高表示计算结果还为得出，ALU正忙，需要阻塞流水*/
    assign alu_finish= ((op_div|op_divu)&&div_finish)|((op_mul)&&mul_finish)|(~(op_div|op_divu|op_mul));

		always @(posedge clk) begin
			if (rst) begin
				div_doing <= 1'b0;
			end
			/*除法结果输出后需要将div_doing置零*/
			else if (div_out_valid) begin
				div_doing <= 1'b0;
			end
			/*握手成功后，也就是除法器接受输入的数据后需要把div_doing置高*/
			else if(div_valid && div_ready) begin
				div_doing <= 1'b1;
			end
		end

		always@(posedge clk)begin
			if(rst|wb_reg_finish)begin
				div_finish<='b0;
				div_result_r<='d0;
			end
			else if(div_out_valid)begin
				div_finish<='d1;
				div_result_r<=qutient;
			end
		end
		//除法信号赋值
    assign mul_valid =(op_mul)&&!mul_doing&&!mul_out_valid&&!mul_finish&&pipe2_valid;
		always @(posedge clk) begin
			if (rst) begin
				mul_doing <= 1'b0;
			end
			/*除法结果输出后需要将div_doing置零*/
			else if (mul_out_valid) begin
				mul_doing <= 1'b0;
			end
			/*握手成功后，也就是除法器接受输入的数据后需要把div_doing置高*/
			else if(mul_valid && mul_ready) begin
				mul_doing <= 1'b1;
			end
		end

		always@(posedge clk)begin
			if(rst|wb_reg_finish)begin
				mul_finish<='b0;
				mul_result_r<='d0;
			end
			else if(mul_out_valid)begin
				mul_finish<='d1;
				mul_result_r<=product;
			end
		end

		wire [63:0] add_sub_result;
		wire [63:0] slt_result;
		wire [63:0] sltu_result;
		wire [63:0] and_result;
		wire [63:0] nor_result;
		wire [63:0] or_result;
		wire [63:0] xor_result;
		wire [63:0] sll_result;
		wire [63:0] srl_result;
		wire [63:0] sra_result;
		wire [63:0] lui_result;
		wire [63:0] mul_result;
		wire [63:0] divu_result;
		wire [63:0] div_result;
		wire [63:0] remu_result;
		wire [63:0] rem_result;

		assign and_result=alu_src1&alu_src2;
		assign or_result=alu_src1|alu_src2;
		assign nor_result=~or_result;
		assign xor_result=alu_src1^alu_src2;
		assign lui_result={alu_src2[63:12],12'b0};
		assign mul_result=mul_result_r;
		assign divu_result=div_result_r;
		assign div_result =div_result_r;
		assign remu_result=alu_src1%alu_src2;
		assign rem_result=$signed(alu_src1)%$signed(alu_src2);

		wire [63:0]adder_a;
		wire [63:0]adder_b;
		wire adder_cin;
		wire [63:0]adder_result;
		wire adder_cout;

		assign adder_a=alu_src1;
		assign adder_b=(op_sub|op_slt|op_sltu)? ~alu_src2:alu_src2;
		assign adder_cin=(op_sub|op_slt|op_sltu)? 1'b1:0;
		assign {adder_cout,adder_result}=adder_a+adder_b+{63'b0,adder_cin};

		assign add_sub_result=adder_result;

		assign sltu_result[63:1]=63'b0;
		assign sltu_result[0]=~adder_cout;
		assign alu_equal[1]=sltu_result[0];

		assign slt_result[63:1]=63'b0;
		assign slt_result[0]=(alu_src1[63]&~alu_src2[63])|(~(alu_src1[63]^alu_src2[63])&adder_result[63]);
		assign alu_equal[2]=slt_result[0];

		assign sll_result=alu_src1<<alu_src2[5:0];
		assign srl_result=alu_src1>>alu_src2[5:0];
		
		assign sra_result=($signed(alu_src1))>>>alu_src2[5:0];

		wire [63:0]alu_result_uw;
		wire [63:0]alu_result_w;
		assign alu_result_uw=({64{op_add|op_sub}}&add_sub_result)
								|     ({64{op_slt       }}&slt_result)
								|     ({64{op_sltu      }}&sltu_result)
								|     ({64{op_and       }}&and_result)
								|     ({64{op_nor       }}&nor_result)
								|     ({64{op_or        }}&or_result)
								|     ({64{op_xor       }}&xor_result)
								|     ({64{op_sll       }}&sll_result)
								|     ({64{op_srl       }}&srl_result)
								|     ({64{op_sra       }}&sra_result)
								|     ({64{op_lui       }}&lui_result)
								|     ({64{op_mul       }}&mul_result)
								|     ({64{op_divu      }}&divu_result)
								|     ({64{op_div       }}&div_result)
								|     ({64{op_remu      }}&remu_result)
								|     ({64{op_rem       }}&rem_result)
								;
		assign alu_result_w={{32{alu_result_uw[31]}},alu_result_uw[31:0]};
		ysyx_050533_MuxKey #(2,1,64) mux1(alu_result,w_choose,{//alu_src1赋值
			1'b0,alu_result_uw,
			1'b1,alu_result_w
		});
		assign ram_addr=add_sub_result;
		assign alu_equal[0]=(alu_src1==alu_src2);
		ysyx_050533_div ysyx_050533_div_0(
			.clk(clk),
			.reset(rst),
			.x(alu_src1),
			.y(alu_src2),
			.div_valid(div_valid),
			.div_signed(op_div),
			.div_ready(div_ready),
			.out_valid(div_out_valid),
			.s(qutient),
			.r()
		);

		ysyx_050533_mulu ysyx_050533_mulu_0(
				.clk(clk),
				.rst(rst), 
				.multiplicand({op_mul & alu_src1[63],alu_src1}),
				.multiplier({op_mul & alu_src2[63],alu_src2}),
				.mul_valid(mul_valid),
				.mul_ready(mul_ready),
				.out_valid(mul_out_valid),
				.result(product));
endmodule
module ysyx_050533_arbiter(
	input  clk,
	input  rst,
	//读地址通道 
	input  [31:0]araddr_1,
	input  [31:0]araddr_2,
	input  arvalid_1,
	input  arvalid_2,
	input  [1:0]arburst_1,
	input  [1:0]arburst_2,
	input  [7:0]arlen_1,
	input  [7:0]arlen_2,
	input  [2:0]arsize_1,
	input  [2:0]arsize_2,
	output arready_1,
	output arready_2,
	//读数据通道
	output reg[63:0]rdata_1,
	output reg[63:0]rdata_2,
	output [1:0]rresp_1,
	output [1:0]rresp_2,
	output rvalid_1,
	output rvalid_2,
	output rlast_1,
	output rlast_2,
	input  rready_1,
	input  rready_2,
	//写地址通道
	input  [31:0]awaddr_2,
	input  awvalid_2,
	input  [1:0]awburst_2,
	input  [7:0]awlen_2,
	output awready_2,
	//写数据通道
	input  [63:0]wdata_2,
	input  wlast_2,
	input  [7:0]wstrb_2,
	input  wvalid_2,
	output wready_2,
	//写回复通道
	output [1:0]bresp_2,
	output bvalid_2,
	input  bready_2,

	input inst_update,
	input mem_finish
);
//choose_index:0:代表IFU 1:代表LSU
reg [1:0]master_state;
parameter IDLE=0,
					S_MASTER_1=1,
					S_MASTER_2=2;
always@(posedge clk)begin
	if(rst)
		master_state<=IDLE;
	else if((arvalid_1)&(master_state==IDLE))
		master_state<=S_MASTER_1;
	else if((arvalid_2|awvalid_2)&(master_state==IDLE))
		master_state<=S_MASTER_2;
	else if((master_state==S_MASTER_1)&(inst_update))
		master_state<=IDLE;
	else if((master_state==S_MASTER_2)&(mem_finish))
		master_state<=IDLE;
end

wire master_1=(master_state==S_MASTER_1);
wire master_2=(master_state==S_MASTER_2);

/////////////////////////////
wire [31:0]araddr;
wire arvalid;
wire arready;
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
assign araddr=master_1?araddr_1:
							master_2?araddr_2:
							0;
assign arvalid=master_1?arvalid_1:
							 master_2?arvalid_2:
							 0;
assign arburst=master_1?arburst_1:
							 master_2?arburst_2:
							 0;
assign arlen=master_1?arlen_1:
						 master_2?arlen_2:
						 0;
assign arsize=master_1?arsize_1:
							master_2?arsize_2:
							0;
assign arready_1=master_1?arready:
								0;
assign arready_2=master_2?arready:
								0;
/////////////////////////////
wire [63:0]rdata;
wire [1:0]rresp;
wire rready;
wire rvalid;
wire rlast;
assign rready= master_1?rready_1:
							 master_2?rready_2:
							 0;
assign rdata_1=master_1?rdata:
								0;
assign rdata_2=master_2?rdata:
								0;
assign rresp_1=master_1?rresp:
								0;
assign rresp_2=master_2?rresp:
								0;
assign rvalid_1=master_1?rvalid:
								0;
assign rvalid_2=master_2?rvalid:
								0;
assign rlast_1=master_1?rlast:
								0;
assign rlast_2=master_2?rlast:
								0;

/////////////////////////////
wire [31:0]awaddr;
wire awready;
wire awvalid;
wire [1:0]awburst;
wire [7:0]awlen;
wire wlast;

assign awaddr =master_2?awaddr_2:
							0;
assign awvalid=master_2?awvalid_2:
							0;
assign awburst =master_2?awburst_2:
							0;
assign awlen =master_2?awlen_2:
							0;
assign awready_2=master_2?awready:
								0;
assign wlast =master_2?wlast_2:
							0;

/////////////////////////////
wire wready;
wire wvalid;
wire [63:0]wdata;
wire [7:0]wstrb;
assign wdata  =master_2?wdata_2:
							0;
assign wstrb  =master_2?wstrb_2:
							0;
assign wvalid =master_2?wvalid_2:
							0;
assign wready_2=master_2?wready:
								0;
///////////////////////////
wire [1:0]bresp;
wire bvalid;
wire bready;
assign bready=master_2?bready_2:
							0;
assign bresp_2=master_2?bresp:
								0;
assign bvalid_2=master_2?bvalid:
								0;

ysyx_050533_axi_full_s2 ysyx_050533_axi_full_s2_0(
	.clk(clk),
	.rst(rst),
	.araddr(araddr),
	.arvalid(arvalid),
	.arburst(arburst),
	.arlen(arlen),
	.arsize(arsize),
	.arready(arready),
	.rdata(rdata),
	.rresp(rresp),
	.rvalid(rvalid),
	.rlast(rlast),
	.rready(rready),
	.awaddr(awaddr),
	.awvalid(awvalid),
	.awburst(awburst),
	.awlen(awlen),
	.awready(awready),
	.wdata(wdata),
	.wlast(wlast),
	.wstrb(wstrb),
	.wvalid(wvalid),
	.wready(wready),
	.bresp(bresp),
	.bvalid(bvalid),
	.bready(bready)
);
endmodule
module ysyx_050533_axi_full_s2(
	input  clk,
	input  rst,
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
	output [1:0]bresp,
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
always @(posedge clk)begin
	if(rst)
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
always @(posedge clk)begin
	if(arvalid&&arready)
		r_araddr<=araddr;
end
//rdata信号
always @(posedge clk)begin
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
always @(posedge clk)begin
	if(rst)begin
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
always @(posedge clk)begin
	if(rst)
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

always @(posedge clk)begin
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
always @(posedge clk)begin
	if(awvalid&awready)
		r_awaddr<=awaddr;
end
endmodule
`define alu_length 17

module ysyx_050533_control(input [11:0]op_d,input[4:0]fu_7_d,input [7:0]fu_3_d,output [3:0]sel_alu_src1,output [2:0]sel_alu_src2,output [`alu_length-1:0]alu_control,output rf_wen,output [2:0]sel_rf_res,output data_ram_en,output data_ram_wen,output [7:0]wmask/*,input [2:0]alu_equal,output [1:0]sel_nextpc*/,output [6:0]l_choose,output not_have,output w_choose,output c_wchoose,output c_wen,input [11:0]e_j_b_inst,output c_wen1_2,output rf_ren_src1,output rf_ren_src2);

//下标标识
//op_d
// op_d[0]:7'b0110111//type_u
// op_d[1]:7'b0010111//type_u
// op_d[2]:7'b1101111//type_j
// op_d[3]:7'b1100111//type_i
// op_d[4]:7'b1100011//type_b
// op_d[5]:7'b0000011//type_i
// op_d[6]:7'b0100011//type_s
// op_d[7]:7'b0010011//type_i
// op_d[8]:7'b0110011//type_r
// op_d[9]:7'b1110011//type_i
//op_d[10]:7'b0000011//type_i
//op_d[11]:7'b0100011//type_s
//op_d[10]:7'b0011011//type_i
//op_d[11]:7'b0111011//type_r
//
//fu_7
//fu_7_d[0]:7'b0000000
//fu_7_d[1]:7'b0100000
//fu_7_d[2]:7'b0000001

	wire addi;
	assign addi=(fu_3_d[3'b000])&(op_d[7]);
	
	wire csrrw;
	assign csrrw=(fu_3_d[3'b001])&(op_d[9]);
  
	wire csrrs;
	assign csrrs=(fu_3_d[3'b010])&(op_d[9]);
  
  /*//wire ecall;*/
  /*//assign ecall={32'b00000000000000000000000001110011};*/
  
  /*//wire mret;*/
  /*//assign mret= {32'b00110000001000000000000001110011};*/
  
  
	wire andi;
	assign andi=(fu_3_d[3'b111])&(op_d[7]);
	
	wire xori;
	assign xori=(fu_3_d[3'b100])&(op_d[7]);
	
	wire ori;
	assign ori=(fu_3_d[3'b110])&(op_d[7]);
	
	wire sll;
	assign sll=(fu_7_d[0])&(fu_3_d[3'b001])&(op_d[8]);

	wire srl;
	assign srl=(fu_7_d[0])&(fu_3_d[3'b101])&(op_d[8]);

	wire sra;
	assign sra=(fu_7_d[1])&(fu_3_d[3'b101])&(op_d[8]);

	wire sllw;
	assign sllw=(fu_7_d[0])&(fu_3_d[3'b001])&(op_d[11]);

	wire srlw;
	assign srlw=(fu_7_d[0])&(fu_3_d[3'b101])&(op_d[11]);
	
	wire sraw;
	assign sraw=(fu_7_d[1])&(fu_3_d[3'b101])&(op_d[11]);

	wire addiw;
	assign addiw=(fu_3_d[3'b000])&(op_d[10]);
	
	wire slliw;
	assign slliw=(fu_7_d[3])&(fu_3_d[3'b001])&(op_d[10]);
	
	wire srliw;
	assign srliw=(fu_7_d[3])&(fu_3_d[3'b101])&(op_d[10]);
	
	//若是此处出现错误可以参考sraw
	wire sraiw;
	assign sraiw=(fu_7_d[4])&(fu_3_d[3'b101])&(op_d[10]);
	
	wire auipc;
	assign auipc=op_d[1];
		
	wire lui;
	assign lui=(op_d[0]);

	wire jal;
	assign jal=e_j_b_inst[3];
  
	wire jalr;
	assign jalr=e_j_b_inst[4];
	
	wire sd;
	assign sd=(fu_3_d[3'b011])&(op_d[6]);
	
	wire sh;
	assign sh=(fu_3_d[3'b001])&(op_d[6]);
	
	wire sw;
	assign sw=(fu_3_d[3'b010])&(op_d[6]);
	
	wire sb;
	assign sb=(fu_3_d[3'b000])&(op_d[6]);
	
	wire lw;
	assign lw=(fu_3_d[3'b010])&(op_d[5]);

	wire lwu;
	assign lwu=(fu_3_d[3'b110])&(op_d[5]);

	wire lh;
	assign lh=(fu_3_d[3'b001])&(op_d[5]);

	wire lhu;
	assign lhu=(fu_3_d[3'b101])&(op_d[5]);
	

	wire lb;
	assign lb=(fu_3_d[3'b000])&(op_d[5]);
	
	wire lbu;
	assign lbu=(fu_3_d[3'b100])&(op_d[5]);

	wire ld;
	assign ld=(fu_3_d[3'b011])&(op_d[5]);

	wire addw;
	assign addw=(fu_7_d[0])&(fu_3_d[3'b000])&(op_d[11]);
	
	wire subw;
	assign subw=(fu_7_d[1])&(fu_3_d[3'b000])&(op_d[11]);
	
	wire mulw;
	assign mulw=(fu_7_d[2])&(fu_3_d[3'b000])&(op_d[11]);
	
	wire divw;
	assign divw=(fu_7_d[2])&(fu_3_d[3'b100])&(op_d[11]);
	
	wire divuw;
	assign divuw=(fu_7_d[2])&(fu_3_d[3'b101])&(op_d[11]);

	wire remw;
	assign remw=(fu_7_d[2])&(fu_3_d[3'b110])&(op_d[11]);

	wire remuw;
	assign remuw=(fu_7_d[2])&(fu_3_d[3'b111])&(op_d[11]);
  
	wire divu;
	assign divu=(fu_7_d[2])&(fu_3_d[3'b101])&(op_d[8]);
	
	wire div;
	assign div=(fu_7_d[2])&(fu_3_d[3'b100])&(op_d[8]);
	
	wire rem;
	assign rem=(fu_7_d[2])&(fu_3_d[3'b110])&(op_d[8]);
	
	wire remu;
	assign remu=(fu_7_d[2])&(fu_3_d[3'b111])&(op_d[8]);
	
 
	wire Add;//Add=add
	assign Add=(fu_7_d[0])&(fu_3_d[3'b000])&(op_d[8]);
	
	wire Mul;//Mul=mul
	assign Mul=(fu_7_d[2])&(fu_3_d[3'b000])&(op_d[8]);
	
	wire And;//And=and
	assign And=(fu_7_d[0])&(fu_3_d[3'b111])&(op_d[8]);
	
	wire Xor;//Xor=xor
	assign Xor=(fu_7_d[0])&(fu_3_d[3'b100])&(op_d[8]);
	
	wire Or;//Or=or
	assign Or=(fu_7_d[0])&(fu_3_d[3'b110])&(op_d[8]);
	
	
	wire sltu;//And=and
	assign sltu=(fu_7_d[0])&(fu_3_d[3'b011])&(op_d[8]);
	
	wire slt;//And=and
	assign slt=(fu_7_d[0])&(fu_3_d[3'b010])&(op_d[8]);
	
	wire sub;
	assign sub=(fu_7_d[1])&(fu_3_d[3'b000])&(op_d[8]);
	
	wire sltiu;
	assign sltiu=(fu_3_d[3'b011])&(op_d[7]);
	
	wire srai;
	assign srai=(fu_7_d[4])&(fu_3_d[3'b101])&(op_d[7]);
	
	wire slli;
	assign slli=(fu_7_d[3])&(fu_3_d[3'b001])&(op_d[7]);	

	wire srli;
	assign srli=(fu_7_d[3])&(fu_3_d[3'b101])&(op_d[7]);	
	
	wire beq;
	assign beq=e_j_b_inst[5];
	
	wire bne;
	assign bne=e_j_b_inst[6];
	
	wire bge;
	assign bge=e_j_b_inst[7];
	
	wire bgeu;
	assign bgeu=e_j_b_inst[8];
	
	wire bltu;
	assign bltu=e_j_b_inst[9];
	
  wire blt;
  assign blt=e_j_b_inst[10];

	//////////////////////////控制信号书写////////////////////////////
	//此处jalr可能有问题//
	assign sel_alu_src1=({4{Add|addi|ld|sd|slt|sll|srl|sra|And|Or|Xor|sltiu|andi|ori|xori|Mul|divu|bge|bgeu|blt|bltu|lw|lwu|lh|lhu|lb|lbu|sw|sh|sb|div|rem|remu|addw|subw|sub|mulw|divw|divuw|remw|beq|bne|addiw|slli|srli|srai|sltu|remuw}} & {4'b0001})
	              |     ({4{jal|jalr|auipc}}& {4'b0010})
	              |     ({4{sllw|srlw|slliw|srliw}}& {4'b0100})
	              |     ({4{sraw|sraiw}}& {4'b1000});
	assign sel_alu_src2=({3{Add|slt|sll|srl|sra|And|Or|Xor|Mul|divu|bge|bgeu|blt|bltu|rem|remu|div|addw|subw|sub|mulw|remuw|divw|divuw|remw|beq|bne|sllw|srlw|sraw|sltu}}  & {3'b001})
	              |     ({3{addi|ld|sd|lui|sltiu|andi|ori|xori|lw|lwu|lh|lhu|lb|lbu|sw|sh|sb|auipc|addiw|srliw|slliw|sraiw|slli|srli|srai}}& {3'b010})
	              |     ({3{jal|jalr}}& {3'b100});

	// op_add;              //000000000001
	// op_sub;              //000000000010
	// op_slt;//有符号比较  //000000000100
	// op_sltu;//无符号比较 //000000001000
	// op_and;              //000000010000
	// op_nor;//或非        //000000100000
	// op_or;               //000001000000
	// op_xor;//异或        //000010000000
	// op_sll;//逻辑左移    //000100000000
	// op_srl;//逻辑右移    //001000000000
	// op_sra;//算术右移    //010000000000
	// op_lui;//高位加载    //100000000000
	// op_mul;             //1000000000000
	// op_divu;           //10000000000000
	assign alu_control =({`alu_length{Add|addi|ld|sd|jal|jalr|lw|lwu|lh|lhu|lb|lbu|sw|sh|sb|auipc|addw|addiw}} & {`alu_length'b000000000001})
							|       ({`alu_length{sub|subw}} &                {`alu_length'b000000000010})
							|       ({`alu_length{slt|bge|blt}} &             {`alu_length'b000000000100})
							|       ({`alu_length{sltu|sltiu|bgeu|bltu}}&     {`alu_length'b000000001000})
							|       ({`alu_length{And|andi}} &                {`alu_length'b000000010000})
							|       ({`alu_length{Or|ori}}  &                 {`alu_length'b000001000000})
							|       ({`alu_length{Xor|xori}} &                {`alu_length'b000010000000})
							|       ({`alu_length{sll|sllw|slliw|slli}} &     {`alu_length'b000100000000})
							|       ({`alu_length{srl|srlw|srliw|srli}} &     {`alu_length'b001000000000})
							|       ({`alu_length{sra|sraw|sraiw|srai}} &     {`alu_length'b010000000000})
							|       ({`alu_length{lui}} &                     {`alu_length'b100000000000})
							|       ({`alu_length{Mul|mulw}} &               {`alu_length'b1000000000000})
							|       ({`alu_length{divu|divuw}}&             {`alu_length'b10000000000000})
							|       ({`alu_length{div|divw}} &             {`alu_length'b100000000000000})
							|       ({`alu_length{remu}}&                 {`alu_length'b1000000000000000})
							|       ({`alu_length{rem|remw|remuw}} &           {`alu_length'b10000000000000000})
	;
	assign l_choose=({7{ld}} &{7'b0000001})
							|   ({7{lw}} &{7'b0000010})
							|   ({7{lwu}}&{7'b0000100})
							|   ({7{lh}} &{7'b0001000})
							|   ({7{lhu}}&{7'b0010000})
							|   ({7{lb}} &{7'b0100000})
							|   ({7{lbu}}&{7'b1000000})
	;

	assign rf_wen=(Add|addi|ld|jal|jalr|slt|sltu|sll|srl|sra|sltiu|andi|ori|xori|lw|lwu|lh|lhu|lb|lbu|auipc|sub|sllw|srlw|sraw|addiw|slliw|srliw|sraiw|addw|srli|srai|slli|And|Or|mulw|divw|remw|lui|subw|Mul|Xor|divu|divuw|rem|div|csrrs|csrrw|remu|remuw);

	assign sel_rf_res=(ld|lw|lwu|lh|lhu|lb|lbu)?3'b010:
										(csrrw|csrrs)?3'b100:
										3'b001;

	assign data_ram_en=ld|lw|lwu|lh|lhu|lb|lbu;
	assign data_ram_wen=(sd|sb|sh|sw|sb);

	assign wmask=sb?8'b00000001:
							 sh?8'b00000011:
							 sw?8'b00001111:
							 sd?8'b11111111:
							 8'b00000000
							 ;
	/////////////////////////////////////////////////////////////////
	assign c_wchoose=csrrs;
	//assign c_wen=(csrrw|csrrs)&mem_finish;
	assign c_wen=(csrrw|csrrs);
	//assign c_wen1_2=mem_finish&e_j_b_inst[1];
	assign c_wen1_2=e_j_b_inst[1];
	
	assign not_have=addi|andi|xori|ori|sll|srl|sra|lui|jal|jalr|sd|sh|sw|sb|lw|lwu|lh|lhu|lb|lbu|ld|divu|Add|Mul|And|Xor|Or|sltu|slt|sub|sltiu|beq|bne|bge|bgeu|bltu|blt|auipc|rem|remu|div|addw|subw|mulw|remuw|divw|divuw|remw|addiw|srliw|slliw|sraiw|slli|srli|srai|sllw|sraw|srlw|csrrs|csrrw|e_j_b_inst[1]|e_j_b_inst[2]|e_j_b_inst[0];
	assign w_choose=addw|subw|mulw|divw|divuw|remw|sllw|srlw|sraw|addiw|sraiw|slliw|srliw|remuw;
	assign rf_ren_src1={Add|addi|ld|sd|slt|sll|srl|sra|And|Or|Xor|sltiu|andi|ori|xori|Mul|divu|bge|bgeu|blt|bltu|lw|lwu|lh|lhu|lb|lbu|sw|sh|sb|div|rem|remu|addw|subw|sub|mulw|divw|divuw|remw|beq|bne|addiw|slli|srli|srai|sltu|remuw}|{slliw|srliw|sraiw|jalr|sraw|sllw};
	assign rf_ren_src2={Add|slt|sll|srl|sra|And|Or|Xor|Mul|divu|bge|bgeu|blt|bltu|rem|remu|div|addw|subw|sub|mulw|remuw|divw|divuw|remw|beq|bne|sllw|srlw|sraw|sltu}|{sw|sh|sb|sd};
endmodule
//icache描述如下
//大小：4kB
//为直接映射cache 每行大小为64B 共有2^6行
//采取写分配和写回策略
module ysyx_050533_dcache(
	input  clk,
	input  rst,
	input  use_cache,
	input  r_ren,
	input  [31:0]raddr,
	output [63:0]rdata_align,
	input  r_wen,
	input  [31:0]waddr,
	input  [63:0]wdata,
	input  [7:0]wmask,
	input  pipe2_valid,
	output  cache_finish,
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
	output bready2,
	
	input wb_reg_finish,

  output [5:0]io_sram0_addr,
  output io_sram0_cen,
  output io_sram0_wen,
  output [127:0]io_sram0_wmask,
  output [127:0] io_sram0_wdata,
  input  [127:0] io_sram0_rdata,
  
  output [5:0] io_sram1_addr,
  output io_sram1_cen,
  output io_sram1_wen,
  output [127:0]io_sram1_wmask,
  output [127:0] io_sram1_wdata,
  input  [127:0] io_sram1_rdata,
  
  output [5:0] io_sram2_addr,
  output io_sram2_cen,
  output io_sram2_wen,
  output [127:0]io_sram2_wmask,
  output [127:0] io_sram2_wdata,
  input  [127:0] io_sram2_rdata,
  
  output [5:0] io_sram3_addr,
  output io_sram3_cen,
  output io_sram3_wen,
  output [127:0]io_sram3_wmask,
  output [127:0] io_sram3_wdata,
  input  [127:0] io_sram3_rdata
);
 parameter CACHE_SIZE=4096;//cache大小为4kB 4096B
 parameter LINE_SIZE=64;//line size 64B
 parameter NUM_LINES=CACHE_SIZE/LINE_SIZE;//行数
 parameter TAGARRAY_WIDTH=22;//tag width
 parameter INDEX_WIDTH=6;//index width
 parameter OFFSET_WIDTH=6;//offset width
 parameter TAG_WIDTH=20;//tag width
 //tag array
 reg [TAGARRAY_WIDTH-1:0]tagarray[NUM_LINES-1:0];//21位代表valid 22位代表dirty
//dataarray
 //reg  [63:0]dataarray[NUM_LINES-1:0][(LINE_SIZE)/8-1:0];//生成line列 长为64B大小的cache 由于每一行是以8字节为存储单位 所以设置为8个8字节
//addr:index tag offset
//状态机
parameter    WRITE_IDLE       = 3'd0 ,
	WRITE_AW_READY	 =3'd1,
	WRITE_W_READY	 =3'd2,
	WRITE_FINISH 		 =3'd3;

wire   [31:0]araddr;
wire 	 [63:0]rdata;
wire awvalid;
wire   [OFFSET_WIDTH-1:0]araddr_offset;
wire   [INDEX_WIDTH-1:0]araddr_index;
wire   [TAG_WIDTH-1:0]araddr_tag;
wire   [INDEX_WIDTH-1:0]waddr_index;
wire   [OFFSET_WIDTH-1:0]waddr_offset;
reg [2:0]write_state;
//wire   [TAG_WIDTH-1:0]waddr_tag;
wire   [63:0]rdata_axi;
wire   rlast;
assign araddr_offset=araddr[OFFSET_WIDTH-1:0];
assign araddr_index =araddr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
assign araddr_tag   =araddr[31:OFFSET_WIDTH+INDEX_WIDTH];

assign waddr_offset=waddr[OFFSET_WIDTH-1:0];
assign waddr_index =waddr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
//assign waddr_tag   =waddr[31:OFFSET_WIDTH+INDEX_WIDTH];

parameter CACHE_IDLE=0,
        	CACHE_UPDATE_BEGIN=1,
					CACHE_MEMWRITE=2,
        	CACHE_MEMREAD=3,
        	CACHE_GET=4,
					CACHE_FINISH=5,
					CACHE_WRITE=6
					;
reg [2:0]cache_state;
wire rcache_en;//读写cache使能信号
wire wcache_en;
wire mem_write_begin;
wire mem_write_finish;
//wire mem_read_finish;
wire mem_read_begin;
assign araddr=(rcache_en)?raddr:
							(wcache_en)?waddr:
							0;
assign rcache_en=r_ren&pipe2_valid;
assign wcache_en=r_wen&pipe2_valid;
always @(posedge clk)begin
	if(rst)
		cache_state<=CACHE_IDLE;
	else if((cache_state==CACHE_IDLE)&(araddr_tag==tagarray[araddr_index][19:0])&(tagarray[araddr_index][20])&(rcache_en)&pipe2_valid&(use_cache))
		cache_state<=CACHE_GET;
	else if((cache_state==CACHE_IDLE)&(araddr_tag==tagarray[araddr_index][19:0])&(tagarray[araddr_index][20])&(wcache_en)&pipe2_valid&(use_cache))
		cache_state<=CACHE_WRITE;
	else if(cache_state==CACHE_IDLE&(rcache_en|wcache_en)&pipe2_valid&(use_cache))
		cache_state<=CACHE_UPDATE_BEGIN;
	else if(cache_state==CACHE_UPDATE_BEGIN&(tagarray[araddr_index][21]==0))
		cache_state<=CACHE_MEMREAD;
	else if(cache_state==CACHE_UPDATE_BEGIN&(tagarray[araddr_index][21]==1))begin
		cache_state<=CACHE_MEMWRITE;
		tagarray[araddr_index][21]<='d0;
	end
	else if(cache_state==CACHE_MEMWRITE&(mem_write_finish))
		cache_state<=CACHE_MEMREAD;
	else if((cache_state==CACHE_MEMREAD)&rcache_en&rlast)
		cache_state<=CACHE_GET;
	else if((cache_state==CACHE_MEMREAD)&wcache_en&rlast)
		cache_state<=CACHE_WRITE;
	else if(cache_state==CACHE_GET)
		cache_state<=CACHE_FINISH;
	else if(cache_state==CACHE_WRITE)
		cache_state<=CACHE_FINISH;
	else if(cache_state==CACHE_FINISH&wb_reg_finish)
		cache_state<=CACHE_IDLE;
end
assign cache_finish=(cache_state==CACHE_FINISH);
//chache_finish阶段 rdata成立
//;//对齐
assign rdata_align=rdata>>((araddr&{29'b0,3'b111})*8);//读数据对齐 如果是ld 右移8位 lh16 lw32
//总线读写地址
wire [31:0]araddr_block;
assign araddr_block=araddr&(~32'b111111);

wire [31:0]wraddr_block;
//assign wraddr_block={araddr_tag[19:0],araddr_index,6'b0};
assign wraddr_block={tagarray[araddr_index][19:0],araddr_index,6'b0};
assign mem_read_begin=(cache_state==CACHE_MEMREAD);
//总线信号
///////////////////mem_read////////////////////////可以看成一个相对独立的模块
//输入:mem_read_begin araddr_block 输出:mem_read_end,dataarray
//读通道
wire rvalid;
wire rready;
wire arready;
wire arvalid;
reg  [2:0]d_r_len;
reg  [2:0]d_w_len;
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]rresp;

//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARREADY		 =3'd1,
						READ_TRANS       =3'd2,
						READ_FINISH 		 =3'd3;
reg [2:0]read_state;
always @(posedge clk)begin
	if(rst)
		read_state<=READ_IDLE;
	else if((read_state==READ_IDLE)&arready&arvalid)
		read_state<=READ_ARREADY;
	else if((read_state==READ_ARREADY)&rvalid&rready)
		read_state<=READ_TRANS;
	else if((read_state==READ_TRANS)&rlast)
		read_state<=READ_FINISH;
	else if(read_state==READ_FINISH&(cache_finish))
		read_state<=READ_IDLE;
end
//read_finish信号
assign mem_write_finish=(write_state==WRITE_FINISH);
//arvalid信号
assign arvalid=(read_state==READ_IDLE)&mem_read_begin;
//r_data信号
//mem_read
always @(posedge clk)begin
		if(rvalid&rready)begin
		d_r_len<=d_r_len+1;
	end
	if(rlast)begin
		tagarray[araddr_index][20]<='d1;
		tagarray[araddr_index][19:0]<=araddr_tag;
		d_r_len<=0;
	end
	if(rst)begin
		for(integer i=0;i<NUM_LINES;i=i+1)
			tagarray[i]<=22'b0;
				d_r_len<=0;
	end
end
assign arburst=2'b01;
assign arlen=8;
assign arsize='d3;
//rready信号
assign rready=(read_state==READ_ARREADY)|(read_state==READ_TRANS);
////////////////////////////////////////////////////
assign mem_write_begin=(cache_state==CACHE_MEMWRITE);
///////////////////mem_write////////////////////////可以看成一个相对独立的模块
//输入:mem_write_begin awaddr_block dataarray输出:mem_write_finish
//写通道信号
//写信号
wire [1:0]awburst;
wire [7:0]awlen;
wire awready;
wire wlast;
wire wready;
wire [1:0]bresp;
wire bready;
wire bvalid;
assign awburst=2'b01;
assign awlen=8;
always @(posedge clk)begin
	if(rst)
		write_state<=WRITE_IDLE;
	else if((write_state==WRITE_IDLE)&awready&awvalid)
		write_state<=WRITE_AW_READY;
	else if((write_state==WRITE_AW_READY)&wready)
		write_state<=WRITE_W_READY;
	else if((write_state==WRITE_W_READY)&wlast)
		write_state<=WRITE_FINISH;
	else if(write_state==WRITE_FINISH&(cache_finish))
		write_state<=WRITE_IDLE;
end
//awvalid wvalid wdata wstrb信号

reg   wvalid;
wire [63:0]wdata_axi;
wire [31:0]awaddr;
reg  [63:0]r_wdata;
wire [7:0]wstrb;
reg  [7:0]c_awlen;
assign awvalid=(write_state==WRITE_IDLE)&(mem_write_begin);
assign awaddr=wraddr_block;
assign wdata_axi =r_wdata;
assign wstrb =8'b11111111;
//r_wdata信号
always@(posedge clk)begin
	if(wready)begin
		d_w_len<=d_w_len+1;
		c_awlen<=c_awlen+1;
		wvalid<=1;
	end
	else begin 
	end
	if(wlast)
	begin
		d_w_len<=0;
		c_awlen<=0;
		wvalid<=0;
	end
	if(rst)begin
			d_r_len<=0;
			d_w_len<=0;
			c_awlen<=0;
			wvalid<=0;
	end
end
//wlast信号
assign wlast=(c_awlen==awlen);
//bready信号
assign bready=(write_state==WRITE_AW_READY)&(write_state==WRITE_W_READY);
///////////////////////////////////////
/////////////////cache_write//////////
wire [63:0]wmask_full;
assign wmask_full=(wmask==8'b00000001)?64'h00ff:
							  	(wmask==8'b00000011)?64'hffff:
							  	(wmask==8'b00001111)?64'hffffffff:
									64'hffffffffffffffff
	;
wire [63:0]wdata_align;
wire [63:0]wmask_align;
assign wdata_align=wdata<<((waddr&{29'b0,3'b111})*8);
assign wmask_align=wmask_full<<((waddr&{29'b0,3'b111})*8);
always @(posedge clk)
	if(cache_state==CACHE_WRITE)begin
	  tagarray[waddr_index][21]<=1'b1;
	if(rst)
	  tagarray[waddr_index][21]<=1'b0;
		
		end
assign araddr2=araddr_block;
assign arvalid2=arvalid;
assign arburst2=arburst;
assign arlen2=arlen;
assign arsize2=arsize;
assign arready=arready2;
assign rdata_axi=rdata2;
assign rresp=rresp2;
assign rvalid=rvalid2;
assign rlast=rlast2;
assign rready2=rready;

assign awaddr2=awaddr;
assign awvalid2=awvalid;
assign awburst2=awburst;
assign awlen2=awlen;
assign awready=awready2;
assign wdata2=wdata_axi;
assign wlast2=wlast;
assign wstrb2=wstrb;
assign wvalid2=wvalid;
assign wready=wready2;
assign bresp=bresp2;
assign bvalid=bvalid2;
assign bready2=bready;


 assign io_sram0_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;
 assign io_sram1_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;
 assign io_sram2_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;
 assign io_sram3_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;

 assign io_sram0_cen=1;
 assign io_sram1_cen=1;
 assign io_sram2_cen=1;
 assign io_sram3_cen=1;


 assign io_sram0_wen=((rvalid&rready)&((d_r_len=='d0)|(d_r_len=='d1)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d0)|(waddr_offset[5:3]=='d1));
 assign io_sram1_wen=((rvalid&rready)&((d_r_len=='d2)|(d_r_len=='d3)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d2)|(waddr_offset[5:3]=='d3));
 assign io_sram2_wen=((rvalid&rready)&((d_r_len=='d4)|(d_r_len=='d5)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d4)|(waddr_offset[5:3]=='d5));
 assign io_sram3_wen=((rvalid&rready)&((d_r_len=='d6)|(d_r_len=='d7)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d6)|(waddr_offset[5:3]=='d7));

assign io_sram0_wdata=((rvalid&rready)&(d_r_len==0))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==1))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d0))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d1))?{wdata_align,64'b0}:'d0
											 ;
assign io_sram1_wdata=((rvalid&rready)&(d_r_len==2))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==3))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d2))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d3))?{wdata_align,64'b0}:'d0
											 ;
assign io_sram2_wdata=((rvalid&rready)&(d_r_len==4))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==5))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d4))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d5))?{wdata_align,64'b0}:'d0
											 ;
assign io_sram3_wdata= ((rvalid&rready)&(d_r_len==6))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==7))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d6))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d7))?{wdata_align,64'b0}:'d0
											 ;

assign io_sram0_wmask=((rvalid&rready)&(d_r_len==0))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==1))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d0))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d1))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign io_sram1_wmask=((rvalid&rready)&(d_r_len==2))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==3))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d2))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d3))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign io_sram2_wmask=((rvalid&rready)&(d_r_len==4))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==5))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d4))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d5))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign io_sram3_wmask=((rvalid&rready)&(d_r_len==6))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==7))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d6))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d7))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign rdata=	(araddr_offset[5:3]==0)?io_sram0_rdata[63:0]:
							 	(araddr_offset[5:3]==1)?io_sram0_rdata[127:64]:
							 	(araddr_offset[5:3]==2)?io_sram1_rdata[63:0]:
							 	(araddr_offset[5:3]==3)?io_sram1_rdata[127:64]:
							 	(araddr_offset[5:3]==4)?io_sram2_rdata[63:0]:
							 	(araddr_offset[5:3]==5)?io_sram2_rdata[127:64]:
							 	(araddr_offset[5:3]==6)?io_sram3_rdata[63:0]:
							 	io_sram3_rdata[127:64];
 always@(posedge clk)begin
	 if(wready)begin
		 if(d_w_len==0)
			 r_wdata<=io_sram0_rdata[63:0];
		 else if(d_w_len==1)
			 r_wdata<=io_sram0_rdata[127:64];
		 else if(d_w_len==2)
			 r_wdata<=io_sram1_rdata[63:0];
		 else if(d_w_len==3)
			 r_wdata<=io_sram1_rdata[127:64];
		 else	 if(d_w_len==4)
			 r_wdata<=io_sram2_rdata[63:0];
		 else if(d_w_len==5)
			 r_wdata<=io_sram2_rdata[127:64];
	   else if(d_w_len==6)
			 r_wdata<=io_sram3_rdata[63:0];
		 else if(d_w_len==7)
			 r_wdata<=io_sram3_rdata[127:64];
	 end
							end
endmodule

module ysyx_050533_de_len_olen #(LEN=7,OLEN=128)(
	input [(LEN-1):0]sig,
	output[(OLEN-1):0]o_h
);
	assign o_h=1<<sig;
endmodule

 module ysyx_050533_div(
  input                          clk           ,
  input                          reset         ,
  input  [63:0] x,
  input  [63:0] y,
  input         div_valid,
  input         div_signed,
  output reg    div_ready,
  output reg    out_valid,
  output [63:0] s,
  output [63:0] r

);
reg [127:0] dividend;
reg [63:0] divisor,qutient,remain;
reg running_r,divisor_s,dividend_s;
reg [6:0] count;
wire done,div_prepare;

//state transition
assign div_prepare = div_ready && div_valid;
assign done = running_r &&  count == 7'h40;
always @(posedge clk) begin
    if (reset  || out_valid) begin
        div_ready <= 1'b1;
    end
    else if (div_prepare) begin
        div_ready <= 1'b0;
    end 
end

always @(posedge clk) begin
    if (reset || done ) begin
        running_r <= 1'b0;
    end
    else if (div_prepare) begin
        running_r <= 1'b1;
    end 
end

always @(posedge clk) begin
    if (reset || out_valid ) begin
        out_valid <= 1'b0;
    end
    else if (done) begin
        out_valid <= 1'b1;
    end 
end
//signed bit
always @(posedge clk) begin
    if (reset) begin
        divisor_s <= 1'b0;
        dividend_s <= 1'b0;        
    end
    else if (div_prepare) begin
        divisor_s <= div_signed & y[63];
        dividend_s <= div_signed & x[63];
    end    
end
//iterative operation and correct
wire sub_cout;
wire [64:0] sub_result;
wire [63:0] qutient_correct,remain_correct;
wire [63:0] x_adder_result,y_adder_result,x_abs,y_abs;
wire [63:0] x_adder_src1,y_adder_src1;

assign x_adder_src1 = done ? dividend[127:64] : x;
assign y_adder_src1 = done ? qutient : y;


//signed <==> abs
ysyx_050533_adder_32 x_adder(
    .src1  (~x_adder_src1),
    .src2  ({64'b1}),
    .cin    (1'b0),
    .cout   (),
    .result (x_adder_result)
);
ysyx_050533_adder_32 y_adder(
    .src1  (~y_adder_src1),
    .src2  ({64'b1}),
    .cin    (1'b0),
    .cout   (),
    .result (y_adder_result)
);

// sub of iteration
ysyx_050533_adder_33 suber(
    .src1  (dividend[127:63]),
    .src2  ({1'b1,~divisor}),
    .cin    (1'b1),
    .cout   (sub_cout),
    .result (sub_result)
);
// Choose the abs of dividend and divisor
assign x_abs = div_signed & x[63] ? x_adder_result : x ;
assign y_abs = div_signed & y[63] ? y_adder_result : y ;

//Update dividend ,divisor and qutient
always @(posedge clk) begin
    if (div_prepare) begin
        dividend <= {64'b0,x_abs};
        divisor <= y_abs;
    end
    //iterate and shift left  << 1
    else if (running_r ) begin
       dividend <= sub_cout ? {sub_result[63:0],dividend[62:0],1'b0} : {dividend[126:0],1'b0};
    end
 
    
end
// counter
always @(posedge clk) begin
    if (reset || out_valid ) begin
        count <= 7'b0;
    end
    else if (running_r) begin
        count <= count +1'b1;
    end
    
end

//Correct result
wire qutient_need_correct,remain_need_correct;

assign remain_correct  = x_adder_result;
assign qutient_correct = y_adder_result;
assign qutient_need_correct = ~dividend_s & divisor_s | dividend_s & ~divisor_s;
assign remain_need_correct  = dividend_s;

always @(posedge clk ) begin
    if (done) begin
        remain  <= remain_need_correct  ? remain_correct  : dividend[127:64];
    end
   if (done) begin
        qutient <= qutient_need_correct ? qutient_correct : qutient;
    end 
    else if (running_r) begin
        qutient <= {qutient[62:0],sub_cout};
    end    
end
// finally result
assign s = qutient;
assign r = remain;



endmodule



module ysyx_050533_adder_32 (
    // 32-bit adder
    input [63:0] src1,
    input [63:0] src2,
    input        cin,
    output       cout,
    output [63:0] result
);
assign {cout, result} = src1 + src2 + {63'b0,cin};

endmodule
module ysyx_050533_adder_33 (
    // 33-bit adder
    input [64:0] src1,
    input [64:0] src2,
    input        cin,
    output       cout,
    output [64:0] result
);
assign {cout, result} = src1 + src2 + {64'b0,cin};
endmodule
//`include "hong.v"
`define alu_length 17
module ysyx_050533_exe(input clk,input rst,input [63:0]imm,input [3:0] sel_alu_src1,input [2:0] sel_alu_src2,input [`alu_length-1:0]alu_control,output [63:0]alu_result,output [63:0]ram_addr,input [63:0]src1,input [63:0]cpupc,input w_choose,input [63:0]src2,input [11:0]e_j_b_inst,input [63:0]c_rdata,output [63:0]dnpc_jump_data,input wb_reg_finish,output alu_finish,input pipe2_valid);
	//wire [63:0]src1;
	//wire [63:0]src2;
	wire [2:0]alu_equal;
	reg [63:0]alu_src1;
	reg [63:0]alu_src2;



	ysyx_050533_MuxKey #(4,4,64) mux1(alu_src1,sel_alu_src1,{//alu_src1赋值
		4'b0001,src1,
		4'b0010,cpupc,
		4'b0100,{{32'b0},src1[31:0]},
		4'b1000,{{32{src1[31]}},src1[31:0]}
		});


	ysyx_050533_MuxKey #(3,3,64) mux2(alu_src2,sel_alu_src2,{//alu_src2赋值
		3'b001,src2,
		3'b010,imm,
		3'b100,64'd4
		});

	ysyx_050533_Alu3 ysyx_050533_Alu3_0(clk,rst,alu_src1,alu_src2,alu_control,alu_result,ram_addr,alu_equal,w_choose,wb_reg_finish,alu_finish,pipe2_valid);
	ysyx_050533_set_dnpc set_dnpc_0(.clk(clk),.rst(rst),.e_j_b_inst(e_j_b_inst),.src1(src1),.imm(imm),.cpupc(cpupc),.c_rdata(c_rdata),.alu_equal(alu_equal),.dnpc_jump_data(dnpc_jump_data));

endmodule

//icache描述如下
//大小：4kB
//为直接映射cache 每行大小为64B 共有2^6行
//采取写分配和写回策略
module ysyx_050533_icache(
	input  clk,
	input  rst,
	input  [31:0]araddr,
	output [63:0]rdata,
	output inst_update,
	input  mem_finish,
	//总线接口
	output [31:0]araddr1,
	output arvalid1,
	output [1:0]arburst1,
	output [7:0]arlen1,
	output [2:0]arsize1,
	input arready1,
	input [63:0]rdata1,
	input [1:0]rresp1,
	input rvalid1,
	input rlast1,
	output rready1,
	input id_reg_finish,
	input not_jump,
	input [63:0]cpupc,
	input [63:0]cpupc_reg_is,
	output pc_update,

  output [5:0]io_sram0_addr,
  output io_sram0_cen,
  output io_sram0_wen,
  output [127:0]io_sram0_wmask,
  output [127:0] io_sram0_wdata,
  input  [127:0] io_sram0_rdata,

  output [5:0] io_sram1_addr,
  output io_sram1_cen,
  output io_sram1_wen,
  output [127:0]io_sram1_wmask,
  output [127:0] io_sram1_wdata,
  input  [127:0] io_sram1_rdata,

  output [5:0] io_sram2_addr,
  output io_sram2_cen,
  output io_sram2_wen,
  output [127:0]io_sram2_wmask,
  output [127:0] io_sram2_wdata,
  input  [127:0] io_sram2_rdata,

  output [5:0] io_sram3_addr,
  output io_sram3_cen,
  output io_sram3_wen,
  output [127:0]io_sram3_wmask,
  output [127:0] io_sram3_wdata,
  input  [127:0] io_sram3_rdata

 );

 parameter CACHE_SIZE=4096;//cache大小为4kB 4096B
 parameter LINE_SIZE=64;//line size 64B
 parameter NUM_LINES=CACHE_SIZE/LINE_SIZE;//行数
 parameter TAGARRAY_WIDTH=21;//tag width
 parameter INDEX_WIDTH=6;//index width
 parameter OFFSET_WIDTH=6;//offset width
 parameter TAG_WIDTH=20;//tag width


//tag array
 reg [TAGARRAY_WIDTH-1:0]tagarray[NUM_LINES-1:0];//21位代表valid 因为icache是只读cache 所以没有dirty位
//addr:index tag offset
reg  rlast_delay;
wire   [OFFSET_WIDTH-1:0]addr_offset;
wire arvalid;
wire   [INDEX_WIDTH-1:0]addr_index;
wire   [TAG_WIDTH-1:0]addr_tag;
wire   [63:0]rdata_axi;
assign addr_offset=araddr[OFFSET_WIDTH-1:0];
assign addr_index =araddr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
assign addr_tag   =araddr[31:OFFSET_WIDTH+INDEX_WIDTH];
parameter CACHE_IDLE=0,
        	CACHE_UPDATE_BEGIN=1,
        	CACHE_MEMREAD=2,
        	CACHE_GET=3,
					CACHE_FINISH=4,
					CACHE_WAIT_EXE=5
					;
reg [2:0]cache_state;
always @(posedge clk)begin
	if(rst)
		cache_state<=CACHE_IDLE;
	else if((cache_state==CACHE_IDLE)&(addr_tag==tagarray[addr_index][19:0])&(tagarray[addr_index][20]))
		cache_state<=CACHE_GET;
	else if(cache_state==CACHE_IDLE)
		cache_state<=CACHE_UPDATE_BEGIN;
	else if((cache_state==CACHE_UPDATE_BEGIN))
		cache_state<=CACHE_MEMREAD;
	else if((cache_state==CACHE_MEMREAD)&rlast_delay)
		cache_state<=CACHE_GET;
	else if(cache_state==CACHE_GET&(id_reg_finish)&(not_jump))//已经取完指令 此时已经完成预译码 not_jump可以生效
		cache_state<=CACHE_FINISH;
	else if(cache_state==CACHE_FINISH)
		cache_state<=CACHE_IDLE;
	else if(cache_state==CACHE_GET&(id_reg_finish)&(~not_jump))
		cache_state<=CACHE_WAIT_EXE;
	else if(cache_state==CACHE_WAIT_EXE&(cpupc==cpupc_reg_is))
		cache_state<=CACHE_FINISH;
end
assign pc_update=(cache_state==CACHE_FINISH);
//总线信号

wire rvalid;
wire rready;
wire arready;
wire rlast;
wire ready_read;
assign ready_read=1;
wire [31:0]araddr_block;
reg  [2:0]d_len;
assign araddr_block=araddr&(~32'b111111);

//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARREADY		 =3'd1,
						READ_TRANS       =3'd2,
						READ_FINISH 		 =3'd3;
reg [2:0]state;
always @(posedge clk)begin
	if(rlast)
		rlast_delay<='b1;
	else 
		rlast_delay<='b0;
end
always @(posedge clk)begin
	if(rst)
		state<=READ_IDLE;
	else if((state==READ_IDLE)&arready&arvalid)
		state<=READ_ARREADY;
	else if((state==READ_ARREADY)&rvalid)
		state<=READ_TRANS;
	else if((state==READ_TRANS)&rlast)
		state<=READ_FINISH;
	else if(state==READ_FINISH&(id_reg_finish))
		state<=READ_IDLE;
end
//arvalid信号
assign arvalid=(state==READ_IDLE)&(cache_state==CACHE_MEMREAD);
//r_data信号
//mem_read
reg rvalid_rready;
reg [63:0]rdata_test3;
always @(posedge clk)begin
	if(rvalid&rready)begin
		rdata_test3<=rdata_axi;
		d_len<=d_len+1;
		rvalid_rready<=1;
	end
	else 
		rvalid_rready<=0;
	if(rlast)begin
		tagarray[addr_index][20]<='d1;
		tagarray[addr_index][19:0]<=addr_tag;
		d_len<=0;
	end
	if(rst)begin
		for(integer i=0;i<NUM_LINES;i=i+1)
			tagarray[i]<=0;
				d_len<=0;
	end
end
//chache_get阶段
assign inst_update=(cache_state==CACHE_GET);
//rready信号
assign rready=(state==READ_ARREADY)|(state==READ_TRANS);
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]rresp;
assign arburst=2'b01;
assign arlen=8;
assign arsize='d3;

assign araddr1=araddr_block;
assign arvalid1=arvalid;
assign arburst1=arburst;
assign arlen1=arlen;
assign arsize1=arsize;
assign arready=arready1;
assign rdata_axi=rdata1;
assign rresp=rresp1;
assign rvalid=rvalid1;
assign rready1=rready;
assign rlast=rlast1;

 assign io_sram0_addr=addr_index;
 assign io_sram1_addr=addr_index;
 assign io_sram2_addr=addr_index;
 assign io_sram3_addr=addr_index;
 
 assign io_sram0_cen=((rvalid&rready)&((d_len=='d0)|(d_len=='d1)))|(ready_read&((addr_offset[5:3]==0)|(addr_offset[5:3]==1)));
 assign io_sram1_cen=((rvalid&rready)&((d_len=='d2)|(d_len=='d3)))|(ready_read&((addr_offset[5:3]==2)|(addr_offset[5:3]==3)));
 assign io_sram2_cen=((rvalid&rready)&((d_len=='d4)|(d_len=='d5)))|(ready_read&((addr_offset[5:3]==4)|(addr_offset[5:3]==5)));
 assign io_sram3_cen=((rvalid&rready)&((d_len=='d6)|(d_len=='d7)))|(ready_read&((addr_offset[5:3]==6)|(addr_offset[5:3]==7)));

 assign io_sram0_wen=((rvalid&rready)&((d_len=='d0)|(d_len=='d1)));
 assign io_sram1_wen=((rvalid&rready)&((d_len=='d2)|(d_len=='d3)));
 assign io_sram2_wen=((rvalid&rready)&((d_len=='d4)|(d_len=='d5)));
 assign io_sram3_wen=((rvalid&rready)&((d_len=='d6)|(d_len=='d7)));

 assign io_sram0_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};
 assign io_sram1_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};
 assign io_sram2_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};
 assign io_sram3_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};

 assign io_sram0_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};
 assign io_sram1_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};
 assign io_sram2_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};
 assign io_sram3_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};

 assign rdata= (addr_offset[5:3]==0)?io_sram0_rdata[63:0]:
							 (addr_offset[5:3]==1)?io_sram0_rdata[127:64]:
							 (addr_offset[5:3]==2)?io_sram1_rdata[63:0]:
							 (addr_offset[5:3]==3)?io_sram1_rdata[127:64]:
							 (addr_offset[5:3]==4)?io_sram2_rdata[63:0]:
							 (addr_offset[5:3]==5)?io_sram2_rdata[127:64]:
							 (addr_offset[5:3]==6)?io_sram3_rdata[63:0]:
							 io_sram3_rdata[127:64];
 ///////////
endmodule
module ysyx_050533_id(input clk,input rst,input [31:0]inst,output [4:0]rd,output reg [63:0]imm,output [11:0]op_d,output [4:0]fu_7_d,output [7:0]fu_3_d,input [11:0]e_j_b_inst/*,output [1:0]c_raddr*/,input rf_wen,input [63:0]wdata,output [63:0]src1,output [63:0]src2,output[63:0]c_rdata,input c_wchoose,input c_wen,input c_wen1_2,input [63:0]cpupc,input [4:0]rf_waddr,input pipe1_valid,input pipe3_valid,input rf_wen_reg_wb,input rf_ren_src1,input rf_ren_src2,output control_hazard,input validout,input id_reg_finish,input is_reg_finish);
  wire [1:0]c_waddr;
  wire [4:0]rs1;
	wire [4:0]rs2;
	wire same_inst_r_w;
	assign rs1=inst[19:15];
	assign rs2=inst[24:20];
	assign rd =inst[11:7];
	assign same_inst_r_w=(rf_ren_src1&rf_wen&(rd==rs1))|(rf_ren_src2&rf_wen&(rd==rs2));
	reg [4:0]waddr_test;

	wire [6:0]op;
	wire	 [2:0]fu_3;
	wire [6:0]fu_7;
	assign op =inst[6:0];
	assign fu_7=inst[31:25];
	assign fu_3=inst[14:12];
	reg  [31:0]buzy;
	always@(posedge clk)begin
		if(rst)begin
			for(integer i=0;i<32;i=i+1)
				buzy[i]<=0;
		end
		if(is_reg_finish&rf_wen)begin
			buzy[rd]<=1;
		end
		if(validout&rf_wen_reg_wb)begin
			buzy[rf_waddr]<=0;
			waddr_test<=rf_waddr;
		end
	end

		assign control_hazard=(pipe1_valid&((rf_ren_src1&buzy[rs1])|(rf_ren_src2&buzy[rs2])));
			

	//将fu_3转化成独热码的方式
	ysyx_050533_de_len_olen  #(3,8)   de_3_8     (fu_3,fu_3_d);

	//将op转化成独热码的一种方式
	//wire [8:0]op_d;
	assign op_d[0]= (op==7'b0110111);//type_u
	assign op_d[1]= (op==7'b0010111);//type_u
	assign op_d[2]= (op==7'b1101111);//type_j
	assign op_d[3]= (op==7'b1100111);//type_i
	assign op_d[4]= (op==7'b1100011);//type_b
	assign op_d[5]= (op==7'b0000011);//type_i
	assign op_d[6]= (op==7'b0100011);//type_s
	assign op_d[7]= (op==7'b0010011);//type_i
	assign op_d[8]= (op==7'b0110011);//type_r
	assign op_d[9]= (op==7'b1110011);//type_i
	//assign op_d[10]=(op==7'b0000011);//type_i
	//assign op_d[11]=(op==7'b0100011);//type_s
	//assign op_d[12]=(op==7'b0010011);//type_i
	assign op_d[10]=(op==7'b0011011);//type_i
	assign op_d[11]=(op==7'b0111011);//type_r
	
	//将fu_7转化成独热码的一种方式
	assign fu_7_d[0]=(fu_7==7'b0000000);
	assign fu_7_d[1]=(fu_7==7'b0100000);
	assign fu_7_d[2]=(fu_7==7'b0000001);
	assign fu_7_d[3]=(fu_7[6:1]==6'b000000);
	assign fu_7_d[4]=(fu_7[6:1]==6'b010000);

	//多选器选择输出的立即数 控制信号 op
	wire [63:0]immi;
	wire [63:0]imms;
	wire [63:0]immb;
	wire [63:0]immu;
	wire [63:0]immj;
	assign immi={{52{inst[31]}},inst[31:20]};
	assign imms={{52{inst[31]}},inst[31:25],inst[11:7]};
	assign immb={{51{inst[31]}},inst[31:31],inst[7:7],inst[30:25],inst[11:8],{1'b0}};
	assign immu={{32{inst[31]}},inst[31:12],{12'b0}};
	assign immj={{43{inst[31]}},inst[31:31],inst[19:12],inst[20:20],inst[30:21],{1'b0}};

	ysyx_050533_MuxKey #(10,12,64) mux0(imm,op_d,{
		12'b000000000001,immu,
		12'b000000000010,immu,
		12'b000000000100,immj,
		12'b000000001000,immi,
		12'b000000010000,immb,

		12'b000000100000,immi,
		12'b000001000000,imms,
		12'b000010000000,immi,
  //12'b000100000000,immr,//r类型没有立即数
		12'b001000000000,immi,

		//14'b00010000000000,immi,//重复
		//14'b00100000000000,imms,//重复
		//14'b01000000000000,immi,//重复
		12'b010000000000,immi
	//15'b100000000000000,immr
});	 
    wire[1:0]c_raddr;
		assign c_raddr=(imm==64'h300)?0:
									 ((imm==64'h305)|(e_j_b_inst[1]==1))?1:
									 ((imm==64'h341)|(e_j_b_inst[2]==1))?2:
									 3;
		assign c_waddr=c_raddr;
		/*assign e_j_b_inst=(inst==32'b0000000_00001_00000_000_00000_11100_11)?3'b001:*/
									/*(inst==32'b00000000000000000000000001110011)?3'b010://ecall*/
									/*(inst==32'b00110000001000000000000001110011)?3'b100//mret*/
		//:3'b000;
		wire [63:0]c_wdata;
		ysyx_050533_MuxKey #(2,1,64) mux3(c_wdata,c_wchoose,{//alu_src2赋值
		1'b0,src1,
			1'b1,src1|c_rdata
			});

 ysyx_050533_RegisterFile2 #(5,64) r0 (.clk(clk),.rst(rst),.wen(rf_wen_reg_wb&validout),.wdata(wdata),.waddr(rf_waddr),.raddr1(rs1),.raddr2(rs2),.rdata1(src1),.rdata2(src2),.c_raddr(c_raddr),.c_rdata(c_rdata),.c_wdata(c_wdata),.c_waddr(c_waddr),.c_wen(c_wen),.c_wen1_2(c_wen1_2),.c_wdata1(cpupc),.c_waddr1(2'd2),.c_wdata2(64'd11),.c_waddr2(2'd3));

endmodule
module ysyx_050533_If(
	input clk,
	input rst,
	output [63:0]cpupc,
	output [31:0]inst,
	output [63:0]dnpc,
	output inst_update,
	input mem_finish,
	output [31:0]araddr1,
	output arvalid1,
	output [1:0]arburst1,
	output [7:0]arlen1,
	output [2:0]arsize1,
	input arready1,
	input [63:0]rdata1,
	input [1:0]rresp1,
	input rvalid1,
	input rlast1,
	output rready1,
	output [11:0]e_j_b_inst,
	input  [63:0]dnpc_jump_data,
	//总线接口
	input id_reg_finish,
	input [63:0]cpupc_reg_is,
	output not_jump,
	output [5:0]io_sram0_addr,
  output io_sram0_cen,
  output io_sram0_wen,
  output [127:0]io_sram0_wmask,
  output [127:0] io_sram0_wdata,
  input  [127:0] io_sram0_rdata,

  output [5:0] io_sram1_addr,
  output io_sram1_cen,
  output io_sram1_wen,
  output [127:0]io_sram1_wmask,
  output [127:0] io_sram1_wdata,
  input  [127:0] io_sram1_rdata,

  output [5:0] io_sram2_addr,
  output io_sram2_cen,
  output io_sram2_wen,
  output [127:0]io_sram2_wmask,
  output [127:0] io_sram2_wdata,
  input  [127:0] io_sram2_rdata,

  output [5:0] io_sram3_addr,
  output io_sram3_cen,
  output io_sram3_wen,
  output [127:0]io_sram3_wmask,
  output [127:0] io_sram3_wdata,
  input  [127:0] io_sram3_rdata
);
//位宽为32bit，复位值为0x80000000,写使能一直有效
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);

wire [63:0]dnpc_0;
wire pc_update;
 ysyx_050533_MuxKey #(2,1,64) mux4(dnpc_0,not_jump,{//alu_src2赋值
  1'b1,cpupc+4,
	1'b0,dnpc_jump_data
	});
 ysyx_050533_MuxKey #(2,1,64) mux5(dnpc,pc_update&(~e_j_b_inst[0]),{//alu_src2赋值
  1'b0,cpupc,
	1'b1,dnpc_0
	});
wire [63:0]rdata_u;
wire [31:0]araddr;
assign araddr=cpupc[31:0];
assign inst=(araddr[2]==1)?rdata_u[63:32]:rdata_u[31:0];
ysyx_050533_Reg #(64,64'h80000000) i0 (clk,rst,dnpc,cpupc,1'b1);
ysyx_050533_icache icache_9(
	.clk(clk),
	.rst(rst),
	.araddr(araddr),
	.rdata(rdata_u),
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
	.id_reg_finish(id_reg_finish),
	.not_jump(not_jump),
	.cpupc(cpupc),
	.cpupc_reg_is(cpupc_reg_is),
	.pc_update(pc_update),
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

 );

//总线信号

 ysyx_050533_pre_decode ysyx_050533_pre_decode_0(.clk(clk),.rst(rst),.inst(inst),.e_j_b_inst(e_j_b_inst),.not_jump(not_jump));
endmodule
module ysyx_050533_mem2 #(parameter ADDR_WIDTH=64,//地址位宽
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
	input pipe2_valid,
	output mem_finish,
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
	output bready2,
	input wb_reg_finish,
  output [5:0]io_sram0_addr,
  output io_sram0_cen,
  output io_sram0_wen,
  output [127:0]io_sram0_wmask,
  output [127:0] io_sram0_wdata,
  input  [127:0] io_sram0_rdata,

  output [5:0] io_sram1_addr,
  output io_sram1_cen,
  output io_sram1_wen,
  output [127:0]io_sram1_wmask,
  output [127:0] io_sram1_wdata,
  input  [127:0] io_sram1_rdata,

  output [5:0] io_sram2_addr,
  output io_sram2_cen,
  output io_sram2_wen,
  output [127:0]io_sram2_wmask,
  output [127:0] io_sram2_wdata,
  input  [127:0] io_sram2_rdata,

  output [5:0] io_sram3_addr,
  output io_sram3_cen,
  output io_sram3_wen,
  output [127:0]io_sram3_wmask,
  output [127:0] io_sram3_wdata,
  input  [127:0] io_sram3_rdata


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
//////////代表ysyx_050533_mem_read_write////////////
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
	wire use_device;
  wire [DATA_WIDTH-1:0]r_rdata_ld;
  wire [DATA_WIDTH-1:0]r_rdata_ld_cache;
  wire [DATA_WIDTH-1:0]r_rdata_ld_device;
	wire [DATA_WIDTH-1:0]r_rdata_lw;
	wire [DATA_WIDTH-1:0]r_rdata_lwu;
	wire [DATA_WIDTH-1:0]r_rdata_lh;
	wire [DATA_WIDTH-1:0]r_rdata_lhu;
	wire [DATA_WIDTH-1:0]r_rdata_lb;
	wire [DATA_WIDTH-1:0]r_rdata_lbu;
	assign use_cache=(((r_raddr[31:0]>=32'h80000000)&(r_raddr[31:0]<=32'h87ffffff))|((r_waddr[31:0]>=32'h80000000)&(r_waddr[31:0]<=32'h87ffffff)))&(r_wen|r_ren);//当访问内存时调用cache 当访问设备时为了缓存一致性 另其直接访问内存
	assign use_device=(~(((r_raddr[31:0]>=32'h80000000)&(r_raddr[31:0]<=32'h87ffffff))|((r_waddr[31:0]>=32'h80000000)&(r_waddr[31:0]<=32'h87ffffff))))&(r_wen|r_ren);

	assign r_rdata_lw ={{32{r_rdata_ld[31]}},r_rdata_ld[31:0]};
	assign r_rdata_lwu={{32'b0},r_rdata_ld[31:0]};

	assign r_rdata_lh ={{48{r_rdata_ld[15]}},r_rdata_ld[15:0]};
	assign r_rdata_lhu={{48'b0},r_rdata_ld[15:0]};

	assign r_rdata_lb ={{56{r_rdata_ld[7]}},r_rdata_ld[7:0]};
	assign r_rdata_lbu={{56'b0},r_rdata_ld[7:0]};
	ysyx_050533_MuxKey #(7,7,64) mux3(r_rdata,l_choose,{//alu_src2赋值
		7'b0000001,r_rdata_ld,
		7'b0000010,r_rdata_lw,
		7'b0000100,r_rdata_lwu,
		7'b0001000,r_rdata_lh,
		7'b0010000,r_rdata_lhu,
		7'b0100000,r_rdata_lb,
		7'b1000000,r_rdata_lbu
		});
ysyx_050533_dcache ysyx_050533_dcache_0(
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
.pipe2_valid(pipe2_valid),
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
.bready2(bready2_0),
.wb_reg_finish(wb_reg_finish),
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
);
///////////////////////////////crossbar绕过cache///////////////////
//////////////////////////////直接访问mem_read和mem_write访问cache
wire device_finish;
ysyx_050533_mem_read_write ysyx_050533_mem_read_write_0(
.clk(clk),
.rst(rst),
.ren(r_ren&(~use_cache)),
.r_raddr(r_raddr),
.r_rdata(r_rdata_ld_device),
.wen(r_wen&(~use_cache)),
.r_waddr(r_waddr),
.r_wdata(r_wdata),
.r_mask(r_mask),
.pipe2_valid(pipe2_valid),
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
.bready2(bready2_1),
.wb_reg_finish(wb_reg_finish)
);
///////////////////////////////////////////////////////////////////
assign mem_finish=(use_cache&cache_finish)|((use_device)&device_finish)|((~(r_wen))&(~(r_ren)));
assign r_rdata_ld=(use_cache)?r_rdata_ld_cache:
									r_rdata_ld_device;
endmodule
module ysyx_050533_mem_read_write(
	input clk,
	input rst,
	input  ren,
	input  [63:0]r_raddr,
	output reg [63:0]r_rdata,
	input  wen,
	input  [63:0]r_waddr,
	input  [63:0]r_wdata,
	input  [7:0]r_mask,
	input  pipe2_valid,
	input  use_device_en,
	output use_device_finish,
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
	output bready2,
	input wb_reg_finish
);
///////////////////mem_read////////////////////////可以看成一个相对独立的模块
//输入:mem_read_begin araddr_block 输出:mem_read_end,dataarray
//读通道
wire rvalid;
wire rready;
wire arready;
wire arvalid;
wire rlast;
reg  [2:0]d_r_len;
reg  [2:0]d_w_len;
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]rresp;
wire [63:0]rdata_axi;

//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARREADY		 =3'd1,
						READ_TRANS       =3'd2,
						READ_FINISH 		 =3'd3;
reg [2:0]read_state;
always @(posedge clk)begin
	if(rst)
		read_state<=READ_IDLE;
	else if((read_state==READ_IDLE)&arready&arvalid)
		read_state<=READ_ARREADY;
	else if((read_state==READ_ARREADY)&rvalid&rready&rlast)
		read_state<=READ_FINISH;
	else if((read_state==READ_ARREADY)&rvalid&rready&(~rlast))
		read_state<=READ_TRANS;
	else if((read_state==READ_TRANS)&rlast)
		read_state<=READ_FINISH;
	else if(read_state==READ_FINISH&wb_reg_finish)
		read_state<=READ_IDLE;
end
//read_finish信号
wire mem_read_finish;
wire mem_write_finish;
assign mem_read_finish=(read_state==READ_FINISH);
assign mem_write_finish=(write_state==WRITE_FINISH);
//arvalid信号
assign arvalid=(read_state==READ_IDLE)&ren&pipe2_valid;
//r_data信号
//mem_read
always @(posedge clk)begin
		if(rvalid&rready)begin
		r_rdata<=rdata_axi;
		d_r_len<=d_r_len+1;
	end
	if(rlast)begin
		d_r_len<=0;
	end
	if(rst)begin
		d_r_len<=0;
	end
end
assign arburst=2'b01;
assign arlen=1;
assign arsize='d3;
//rready信号
assign rready=(read_state==READ_ARREADY)|(read_state==READ_TRANS);
////////////////////////////////////////////////////
///////////////////mem_write////////////////////////可以看成一个相对独立的模块
//输入:mem_write_begin awaddr_block dataarray输出:mem_write_finish
//写通道信号
//写信号
reg [2:0]write_state;
wire [1:0]awburst;
wire [7:0]awlen;
wire awready;
wire wlast;
wire wready;
wire [1:0]bresp;
wire bready;
wire bvalid;
assign awburst=2'b01;
assign awlen=1;
//状态机
parameter    WRITE_IDLE       = 3'd0 ,
	WRITE_AW_READY	 =3'd1,
	WRITE_TRANS	 =3'd2,
	WRITE_FINISH 		 =3'd3;
always @(posedge clk)begin
	if(rst)
		write_state<=WRITE_IDLE;
	else if((write_state==WRITE_IDLE)&awready&awvalid)
		write_state<=WRITE_AW_READY;
	else if((write_state==WRITE_AW_READY)&wready)
		write_state<=WRITE_TRANS;
	else if((write_state==WRITE_TRANS)&wlast)
		write_state<=WRITE_FINISH;
	//else if(write_state==WRITE_FINISH&(cache_finish))
	else if(write_state==WRITE_FINISH&wb_reg_finish)
		write_state<=WRITE_IDLE;
end
//awvalid wvalid wdata wstrb信号

wire awvalid;
reg   wvalid;
wire [63:0]wdata_axi;
wire [31:0]awaddr;
reg  [63:0]wdata;
wire [7:0]wstrb;
reg  [7:0]c_awlen;
assign awvalid=(write_state==WRITE_IDLE)&(wen)&(pipe2_valid);
assign awaddr=r_waddr[31:0];
assign wdata_axi =wdata;
assign wstrb =r_mask;
//r_wdata信号
always@(posedge clk)begin
	if(wready)begin
		wdata<=r_wdata;
		d_w_len<=d_w_len+1;
		c_awlen<=c_awlen+1;
		wvalid<=1;
	end
	else begin
		wdata<=64'hffffffff;
	end
	if(wlast)
	begin
		d_w_len<=0;
		c_awlen<=0;
		wvalid<=0;
	end
	if(rst)begin
			d_r_len<=0;
			d_w_len<=0;
			c_awlen<=0;
			wvalid<=0;
	end
end
//wlast信号
assign wlast=(c_awlen==awlen);
//bready信号
assign bready=(write_state==WRITE_AW_READY)&(write_state==WRITE_TRANS);
///////////////////////////////////////
/////////////////cache_write//////////

assign araddr2=r_raddr[31:0];
assign arvalid2=arvalid;
assign arburst2=arburst;
assign arlen2=arlen;
assign arsize2=arsize;
assign arready=arready2;
assign rdata_axi=rdata2;
assign rresp=rresp2;
assign rvalid=rvalid2;
assign rlast=rlast2;
assign rready2=rready;

assign awaddr2=awaddr;
assign awvalid2=awvalid;
assign awburst2=awburst;
assign awlen2=awlen;
assign awready=awready2;
assign wdata2=wdata_axi;
assign wlast2=wlast;
assign wstrb2=wstrb;
assign wvalid2=wvalid;
assign wready=wready2;
assign bresp=bresp2;
assign bvalid=bvalid2;
assign bready2=bready;


assign use_device_finish=pipe2_valid&use_device_en&((ren&mem_read_finish)|(wen&mem_write_finish));
endmodule
`define WIDTH 66
`define COMPUTE_WIDTH 64
module ysyx_050533_sel_gen(input [2:0]src,output [3:0]sel);
	wire y_add,y,y_sub;
	wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
	
	assign {y_add,y,y_sub} = src;
	
	assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
	assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
	assign sel_double_negative =  y_add & ~y & ~y_sub;
	assign sel_double_positive = ~y_add &  y &  y_sub;

	assign sel={sel_negative,sel_positive,sel_double_negative,sel_double_positive};
endmodule

module ysyx_050533_res_sel(input [3:0]sel,input [1:0]src,output p);
	wire x,x_sub;
	wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
	assign {sel_negative,sel_positive,sel_double_negative,sel_double_positive}=sel;
	assign {x,x_sub}=src;

	assign p = ~(~(sel_negative & ~x) & ~(sel_double_negative & ~x_sub) 
           & ~(sel_positive & x ) & ~(sel_double_positive &  x_sub));
endmodule

module ysyx_050533_mul_partial(//部分积生成模块
	input  [2*`WIDTH-1:0]x_src,
	input  [2:0]y_src,
	output [2*`WIDTH-1:0]p_result,
	output cout
);
	wire [3:0]sel;
	wire sel_negative=sel[3];
	wire sel_double_negative=sel[1];

	assign cout=sel_negative||sel_double_negative;

	ysyx_050533_sel_gen ysyx_050533_sel_gen_0(.src(y_src),.sel(sel));
	ysyx_050533_res_sel ysyx_050533_res_sel_num0(.sel(sel),.src({x_src[0],1'b0}),.p(p_result[0]));
	genvar i;
	generate
		for(i=1;i<`WIDTH*2;i=i+1)begin
			ysyx_050533_res_sel ysyx_050533_res_sel_num(.sel(sel),.src(x_src[i:i-1]),.p(p_result[i]));
		end
	endgenerate
endmodule

module ysyx_050533_mulu(input clk,input rst, input[`COMPUTE_WIDTH:0]multiplicand,input [`COMPUTE_WIDTH:0]multiplier,input mul_valid,output reg mul_ready,output reg out_valid,/*output reg [`WIDTH*2-1:0]result,*/output [63:0]result);
	reg [`WIDTH*2-1:0]tmp_result,multiplicand_r;
	reg [`WIDTH:0]multiplier_r;
	reg running_r;
	wire mul_prepare,done;
	wire [`WIDTH*2-1:0]p_result;
	reg [6:0]cnt;
//cnt
	always@(posedge clk)begin
		if(rst|out_valid)
			cnt<='d0;
		else if(running_r)
			cnt<=cnt+1'b1;
	end
	assign mul_prepare=mul_valid&mul_ready;
 //wheather running
 always@(posedge clk)begin
	 if(rst)begin
		 running_r<='b0;
	 end
	 else if(mul_prepare)
		 running_r<='b1;
	 else if(done)
		 running_r<='b0;
 end
 //valid and ready
 always@(posedge clk)begin
	 if(rst)
		 mul_ready<='b1;
	 else if(mul_prepare)
		 mul_ready<='b0;
	 else if(out_valid)
		 mul_ready<='b1;
 end
 always@(posedge clk)begin
	 if(rst)
		 out_valid<=1'b0;
	 else if(out_valid)
		 out_valid<='b0;
	 else if(done)
		 out_valid<='b1;
 end
 always@(posedge clk)begin
	 if(rst)begin
		 multiplicand_r<=0;
		 multiplier_r<=0;
	 end
	 else if(mul_prepare)begin
		 multiplicand_r<={{`WIDTH{multiplicand[`COMPUTE_WIDTH]}},multiplicand[`COMPUTE_WIDTH],multiplicand};
		 multiplier_r<={multiplier[`COMPUTE_WIDTH],multiplier,1'b0};
	 end
	 else if(running_r)begin
		 multiplicand_r<={multiplicand_r[`WIDTH*2-3:0],2'b0};
		 multiplier_r<={2'b0,multiplier_r[`WIDTH:2]};
	 end
 end
	assign done=running_r&&(cnt==7'h20||multiplier_r[`WIDTH:0]=={{`WIDTH{1'b0}},1'b0});
  wire partial_cout;
	ysyx_050533_mul_partial partial(.x_src(multiplicand_r),.y_src(multiplier_r[2:0]),.p_result(p_result),.cout(partial_cout));

	wire [`WIDTH*2-1:0]adder_result;
	wire adder_cout;
	assign {adder_cout,adder_result}=p_result+tmp_result+{{`WIDTH*2-1{1'b0}},partial_cout};

	always@(posedge clk)begin
		if(mul_prepare)begin
			tmp_result<={`WIDTH*2{1'b0}};
		end
		else if(running_r)begin
			tmp_result<=adder_result;
		end
	end
	assign result=tmp_result[63:0];
endmodule

// 选择器模板内部实现
module ysyx_050533_MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule





// 不带默认值的选择器模板
module ysyx_050533_MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_050533_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule
// 带默认值的选择器模板
module ysyx_050533_MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_050533_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule
module ysyx_050533_pre_decode(input clk,input rst,input [31:0]inst,output [11:0]e_j_b_inst,output not_jump);
	wire [6:0]op;
	wire	 [2:0]fu_3;
	//wire [6:0]fu_7;
	assign op =inst[6:0];
	//assign fu_7=inst[31:25];
	assign fu_3=inst[14:12];
	wire jal;
	assign jal=(op==7'b1101111);

	wire jalr;
	assign jalr=(fu_3==3'b000)&((op==7'b1100111));

	wire beq;
	assign beq=(fu_3==3'b000)&((op==7'b1100011));

	wire bne;
	assign bne=(fu_3==3'b001)&((op==7'b1100011));

	wire bge;
	assign bge=(fu_3==3'b101)&((op==7'b1100011));

	wire bgeu;
	assign bgeu=(fu_3==3'b111)&((op==7'b1100011));

	wire bltu;
	assign bltu=(fu_3==3'b110)&((op==7'b1100011));

  wire blt;
  assign blt= (fu_3==3'b100) &((op==7'b1100011));

	assign e_j_b_inst=(inst==32'b0000000_00001_00000_000_00000_11100_11)?12'b000000000001://ebreak0
	                      	(inst==32'b00000000000000000000000001110011)?12'b000000000010://edall1
	                      	(inst==32'b00110000001000000000000001110011)?12'b000000000100://mret2
													                                         jal?12'b000000001000://3
																																  jalr?12'b000000010000://4
																																	 beq?12'b000000100000://5
																																	 bne?12'b000001000000://6
																																	 bge?12'b000010000000://7
																																	bgeu?12'b000100000000://8
																																	bltu?12'b001000000000://9
																																	 blt?12'b010000000000://10
	                      	                                             12'b100000000000;//11
 assign not_jump=e_j_b_inst[11]|e_j_b_inst[0];
endmodule
module ysyx_050533_RegisterFile2 #(ADDR_WIDTH = 5, DATA_WIDTH = 64 ) (
  input clk,
	input rst,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,

  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,

  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2,

  input [1:0] c_raddr,
  output [DATA_WIDTH-1:0] c_rdata,

  input [DATA_WIDTH-1:0] c_wdata,
  input [1:0] c_waddr,
	input c_wen,

	input c_wen1_2,
  input [DATA_WIDTH-1:0] c_wdata1,
  input [1:0] c_waddr1,

  input [DATA_WIDTH-1:0] c_wdata2,
  input [1:0] c_waddr2
	);
	import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
	import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);

  reg [DATA_WIDTH-1:0] rf [31:0];
  reg [DATA_WIDTH-1:0] csr [3:0];//0-4 mstatus mtvec mepc mcause
	
	integer i;
  assign rdata1=rf[raddr1];
  assign rdata2=rf[raddr2];
	assign c_rdata=csr[c_raddr];

	always @(posedge clk) begin
		if(rst)begin

			for (i=0;i<32;i=i+1) begin
				rf[i]<=0;
			end

			for (i=1;i<3;i=i+1)//需要设置初始值 
				csr[i]<=0;
			csr[0]<=64'ha00001800;
		end
		if (wen) begin
			rf[waddr] <= wdata;
			rf[0]<=0;
		end
		if (c_wen)begin
			csr[c_waddr]<=c_wdata;
		end
		if (c_wen1_2)begin
			csr[c_waddr2]<=c_wdata2;
			csr[c_waddr1]<=c_wdata1;
		end
  end
	initial begin
			set_gpr_ptr(rf);
			set_csr_ptr(csr);
		end
endmodule
    
module ysyx_050533_set_dnpc(input clk,input rst,input [11:0]e_j_b_inst,input [63:0]src1,input [63:0]imm,input [63:0]cpupc,input[63:0]c_rdata,input [2:0]alu_equal,output [63:0]dnpc_jump_data);
	wire jal;
	assign jal=e_j_b_inst[3];

	wire jalr;
	assign jalr=e_j_b_inst[4];


	wire beq;
	assign beq=e_j_b_inst[5];

	wire bne;
	assign bne=e_j_b_inst[6];

	wire bge;
	assign bge=e_j_b_inst[7];

	wire bgeu;
	assign bgeu=e_j_b_inst[8];

	wire bltu;
	assign bltu=e_j_b_inst[9];

  wire blt;
  assign blt=e_j_b_inst[10];


	wire [1:0]sel_nextpc;
	assign sel_nextpc=({2{{beq&alu_equal[0]}|{bne&(!alu_equal[0])}|jal|{bltu&(alu_equal[1])}|{blt&(alu_equal[2])}|{bgeu&{(~alu_equal[1])|(alu_equal[0])}}|{bge&{(~alu_equal[2])|alu_equal[0]}}}}&2'b01)
					|					({2{jalr}}&2'b10)
					|					({2{e_j_b_inst[1]|e_j_b_inst[2]}}&2'b11)
					;
	ysyx_050533_MuxKey #(4,2,64) mux4(dnpc_jump_data,sel_nextpc,{//alu_src2赋值
  2'b00,cpupc+4,
	2'b01,cpupc+imm,
	2'b10,(src1+imm)&~1,
	2'b11,c_rdata
	});
endmodule
module ysyx_050533_sram(
	input clk,
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
S011HD1P_X32Y2D128_BW sram_0(
.Q(io_sram0_rdata), 
.CLK(clk), 
.CEN(io_sram0_cen), 
.WEN(io_sram0_wen), 
.BWEN(io_sram0_wmask), 
.A(io_sram0_addr), 
.D(io_sram0_wdata)
);
S011HD1P_X32Y2D128_BW sram_1(
.Q(io_sram1_rdata), 
.CLK(clk), 
.CEN(io_sram1_cen), 
.WEN(io_sram1_wen), 
.BWEN(io_sram1_wmask), 
.A(io_sram1_addr), 
.D(io_sram1_wdata)
);
S011HD1P_X32Y2D128_BW sram_2(
.Q(io_sram2_rdata), 
.CLK(clk), 
.CEN(io_sram2_cen), 
.WEN(io_sram2_wen), 
.BWEN(io_sram2_wmask), 
.A(io_sram2_addr), 
.D(io_sram2_wdata)
);
S011HD1P_X32Y2D128_BW sram_3(
.Q(io_sram3_rdata), 
.CLK(clk), 
.CEN(io_sram3_cen), 
.WEN(io_sram3_wen), 
.BWEN(io_sram3_wmask), 
.A(io_sram3_addr), 
.D(io_sram3_wdata)
);

S011HD1P_X32Y2D128_BW sram_4(
.Q(io_sram4_rdata),
.CLK(clk),
.CEN(io_sram4_cen),
.WEN(io_sram4_wen),
.BWEN(io_sram4_wmask),
.A(io_sram4_addr),
.D(io_sram4_wdata)
);
S011HD1P_X32Y2D128_BW sram_5(
.Q(io_sram5_rdata),
.CLK(clk),
.CEN(io_sram5_cen),
.WEN(io_sram5_wen),
.BWEN(io_sram5_wmask),
.A(io_sram5_addr),
.D(io_sram5_wdata)
);
S011HD1P_X32Y2D128_BW sram_6(
.Q(io_sram6_rdata),
.CLK(clk),
.CEN(io_sram6_cen),
.WEN(io_sram6_wen),
.BWEN(io_sram6_wmask),
.A(io_sram6_addr),
.D(io_sram6_wdata)
);
S011HD1P_X32Y2D128_BW sram_7(
.Q(io_sram7_rdata),
.CLK(clk),
.CEN(io_sram7_cen),
.WEN(io_sram7_wen),
.BWEN(io_sram7_wmask),
.A(io_sram7_addr),
.D(io_sram7_wdata)
);
endmodule
module ysyx_050533_stallable_pipeline(
	input clk,
	input rst,
	input isu_finish,
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
	output reg [6:0]l_choose_reg_is,
	output reg w_choose_reg_is,
	output reg [63:0]src1_reg_is,
	output reg [63:0]src2_reg_is,
	output reg [63:0]imm_reg_is,
	output reg [63:0]c_rdata_reg_is,
	output reg [11:0]e_j_b_inst_reg_is,
	//wb
	input [63:0]alu_result,
	input [63:0]ram_data,
	input [63:0]set_dnpc_data,
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
 assign pipe2_ready_go=isu_finish;//isu_finish时表示exe（is）完成
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
//`include "hong.v"
`define alu_length 17
//单周期cpu总模块
module ysyx_050533(
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
	wire rf_ren_src1;
	wire rf_ren_src2;
	wire [4:0]rd;
	wire [11:0]op_d;
	wire [4:0]fu_7_d;
	wire [7:0]fu_3_d;
//control
	wire [3:0]sel_alu_src1;
	wire [2:0]sel_alu_src2;
	wire [`alu_length-1:0]alu_control;
	wire rf_wen;
	wire [2:0]sel_rf_res;
	wire data_ram_en;
	wire data_ram_wen;
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
	wire data_ram_ren;
	assign data_ram_ren=data_ram_en;
	wire [63:0]cpupc_reg_is;
	wire [3:0]alu_src1_reg_is;
	wire [2:0]alu_src2_reg_is;
	wire [16:0]alu_control_reg_is;
	wire data_ram_ren_reg_is;
	wire data_ram_wen_reg_is;
	wire [7:0]wmask_reg_is;
	wire [6:0]l_choose_reg_is;
	wire w_choose_reg_is;
	wire [63:0]src1_reg_is;
	wire [63:0]src2_reg_is;
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
 ysyx_050533_sram sram_0(
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

	ysyx_050533_stallable_pipeline stallable_pipeline_0(
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
	.l_choose_reg_is(l_choose_reg_is),
	.w_choose_reg_is(w_choose_reg_is),
	.src1_reg_is(src1_reg_is),
	.src2_reg_is(src2_reg_is),
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
	ysyx_050533_If if_change(
		.clk(clk), 
		.rst(rst),
		.cpupc(cpupc),
		.inst(inst),
		.dnpc(dnpc),
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
	ysyx_050533_id id_0(.clk(clk),.rst(rst),.inst(inst_reg_id),.rd(rd),.imm(imm),.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.e_j_b_inst(e_j_b_inst_reg_id),.rf_wen(rf_wen),.wdata(wdata),.src1(src1),.src2(src2),.c_rdata(c_rdata),.c_wchoose(c_wchoose),.c_wen(c_wen),.c_wen1_2(c_wen1_2),.cpupc(cpupc_reg_id),.rf_waddr(rd_reg_wb),.pipe1_valid(pipe1_valid),.pipe3_valid(pipe3_valid),.rf_wen_reg_wb(rf_wen_reg_wb),.rf_ren_src1(rf_ren_src1),.rf_ren_src2(rf_ren_src2),.control_hazard(control_hazard),.validout(validout),.id_reg_finish(id_reg_finish),.is_reg_finish(is_reg_finish));
	//assign ebreak=e_j_b_inst[0];
	//assign ebreak=e_j_b_inst_reg_wb[0];
	assign ebreak=ebreak_finish;
	ysyx_050533_control ysyx_050533_control_0(.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.sel_rf_res(sel_rf_res),.data_ram_en(data_ram_en),.data_ram_wen(data_ram_wen),.wmask(wmask),.l_choose(l_choose),.not_have(not_have),.w_choose(w_choose),.c_wchoose(c_wchoose),.c_wen(c_wen),.e_j_b_inst(e_j_b_inst_reg_id),.c_wen1_2(c_wen1_2),.rf_ren_src1(rf_ren_src1),.rf_ren_src2(rf_ren_src2)) ;//控制模块
/////////////////////////////////////////
///////////////////is//////////////////////
	ysyx_050533_exe exe_0(.clk(clk),.rst(rst),.imm(imm_reg_is),.sel_alu_src1(alu_src1_reg_is),.sel_alu_src2(alu_src2_reg_is),.alu_control(alu_control_reg_is),.alu_result(alu_result),.ram_addr(ram_addr),.src1(src1_reg_is),.cpupc(cpupc_reg_is),.w_choose(w_choose_reg_is),.src2(src2_reg_is),.e_j_b_inst(e_j_b_inst_reg_is),.c_rdata(c_rdata_reg_is),.dnpc_jump_data(dnpc_jump_data),.wb_reg_finish(wb_reg_finish),.alu_finish(alu_finish),.pipe2_valid(pipe2_valid));
	//访存模块
	ysyx_050533_mem2 #(64,64)mem_2(
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
	ysyx_050533_wb wb0(.r_data(ram_data_reg_wb),.alu_result(alu_result_reg_wb),.sel_rf_res(sel_rf_res_reg_wb),.wdata(wdata),.c_rdata(c_rdata_reg_wb));
////////////////////////////////////////
	//总线仲裁器
	ysyx_050533_arbiter ysyx_050533_arbiter_1(
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
 /* initial begin*/
		/*if ($test$plusargs("trace") != 0) begin*/
			/*$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);*/
			/*$dumpfile("logs/vlt_dump.vcd");*/
			/*$dumpvars();*/
		/*end*/
		/*$display("[%0t] Model running...\n", $time);*/
	/*end*/
	/*/*//////////////////////////////////////////////////////////
	endmodule
module ysyx_050533_wb(input [63:0] r_data,input [63:0]alu_result,input [2:0]sel_rf_res,output [63:0]wdata,input [63:0]c_rdata);
	ysyx_050533_MuxKey #(3,3,64) mux3(wdata,sel_rf_res,{//alu_src2赋值
		3'b001,alu_result,
		3'b010,r_data,
		3'b100,c_rdata
		});
endmodule
module device(
	input  clk,
	input  rst,
	input  r_ren,
	input  [31:0]raddr,
	output [63:0]rdata,
	input  r_wen,
	input  [31:0]waddr,
	input  [63:0]wdata,
	input  [7:0]wmask,
	input  inst_update,
	output  device_finish
);
//总线信号
     
		wire [31:0]araddr;
		wire arvalid;
		wire arready;
		wire [1:0]rresp;
		wire rvalid;
		wire rready;
		//写地址通;
		wire [31:0]awaddr;
		wire awvalid;
		wire awready;
		//写数据通;
		wire [7:0]wstrb;
		wire wvalid;
		wire wready;
		//写回复通;
		wire [1:0]bresp;
		wire bvalid;
		wire bread;
		assign araddr=raddr;
	 	//寄存器
		reg [63:0]reg_rdata;
		      //状态机
		parameter   READ_IDLE        = 3'd0 ,
		           	READ_ARREADY		 =3'd1,
								READ_FINISH 		 =3'd2;
		reg [2:0]read_state;
		always @(posedge clk)begin
			if(rst)
				read_state<=READ_IDLE;
			else if((read_state==READ_IDLE)&arready&arvalid)
				read_state<=READ_ARREADY;
			else if((read_state==READ_ARREADY)&rvalid)
				read_state<=READ_FINISH;
			else if(read_state==READ_ARREADY)
				read_state<=READ_ARREADY;
			else if((read_state==READ_FINISH)&(mem_state==MEM_FINISH))
				read_state<=READ_IDLE;
		end
		//arvalid信号
		assign arvalid=(read_state==READ_IDLE)&inst_update&r_ren;
		//r_data信号
		always @(posedge clk)begin
			if(rvalid&rready)
				reg_rdata<=rdata;
			else
				reg_rdata<=reg_rdata;
		end
		//rready信号
		ysyx_050533_MuxKey #(3,3,1) mux1(rready,read_state,{
			READ_ARREADY,1'd1,
			READ_FINISH,1'd0,
			READ_IDLE,1'd0
			});
	 //写信号
	 reg [2:0]write_state;
	 //状态机
	 parameter    WRITE_IDLE       = 3'd0 ,
		            WRITE_AW_WREADY	 =3'd1,
								WRITE_FINISH 		 =3'd2;
	 always @(posedge clk)begin
		 if(rst)
			 write_state<=WRITE_IDLE;
		 else if((write_state==WRITE_IDLE)&awready&wready&awvalid&wvalid)
			 write_state<=WRITE_AW_WREADY;
		 else if(write_state==WRITE_IDLE)
			 write_state<=WRITE_IDLE;
		 else if((write_state==WRITE_AW_WREADY)&bvalid)
			 write_state<=WRITE_FINISH;
		 else if(write_state==WRITE_AW_WREADY)
			 write_state<=WRITE_AW_WREADY;
		 else if(write_state==WRITE_FINISH&(mem_finish))
			 write_state<=WRITE_IDLE;
	 end
	 //awvalid wvalid wdata wstrb信号
		assign awvalid=(write_state==WRITE_IDLE)&inst_update&r_wen;
		assign wvalid= (write_state==WRITE_IDLE)&inst_update;
		assign awaddr=waddr;
		assign wstrb =wmask;
	//bready信号
	  assign bready= (write_state==WRITE_AW_WREADY);
		//MEM_状态信息
		reg [2:0]mem_state;
		parameter MEM_BEGIN            =3'd0,
			MEM_WAIT_WRITE_FINISH=3'd1,
			MEM_WAIT_READ_FINISH =3'd2,
			MEM_WAIT_ALL         =3'd3,
			MEM_FINISH           =3'd4;
		///////////////////
		assign r_rdata_ld=reg_rdata;
		assign mem_finish=(mem_state==MEM_FINISH);
		ysyx_050533_Reg #(1,1'b0) finish(clk,rst,mem_finish,inst_finish,1'b1);
endmodule
// 触发器模板
module ysyx_050533_Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule
module S011HD1P_X32Y2D128_BW(
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

