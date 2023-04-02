//`include "hong.v"
`define alu_length 17
module Alu2(input [63:0]alu_src1, input [63:0]alu_src2,input [`alu_length-1:0]alu_control,output [63:0]alu_result,output[63:0]ram_addr,output [2:0]alu_equal,input w_choose);
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
		assign mul_result=alu_src1*alu_src2;
		assign divu_result=alu_src1/alu_src2;
		assign div_result=$signed(alu_src1)/$signed(alu_src2);
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
endmodule
