//`include "hong.v"
`define alu_length 17
module Alu3(input clk,input rst,input [63:0]alu_src1, input [63:0]alu_src2,input [`alu_length-1:0]alu_control,output [63:0]alu_result,output[63:0]ram_addr,output [2:0]alu_equal,input w_choose,input wb_reg_finish,output alu_finish,input pipe2_valid);
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
    //assign alu_finish=  op_div&&!div_out_valid;

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
		//assign divu_result=alu_src1/alu_src2;
		assign divu_result=div_result_r;
		//assign div_result=$signed(alu_src1)/$signed(alu_src2);
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
		MuxKey #(2,1,64) mux1(alu_result,w_choose,{//alu_src1赋值
			1'b0,alu_result_uw,
			1'b1,alu_result_w
		});
		assign ram_addr=add_sub_result;
		assign alu_equal[0]=(alu_src1==alu_src2);
		div div_0(
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

		mulu mulu_0(
				.clk(clk),
				.rst(rst), 
				.multiplicand({op_mul & alu_src1[63],alu_src1}),
				.multiplier({op_mul & alu_src2[63],alu_src2}),
				.mul_valid(mul_valid),
				.mul_ready(mul_ready),
				.out_valid(mul_out_valid),
				.result(product));
endmodule
