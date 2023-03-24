module Alu2(input [63:0]alu_src1, input [63:0]alu_src2,input [11:0]alu_control,output reg[63:0]alu_result,output[63:0]ram_addr);
		/*wire op_add;*/
		/*wire op_sub;*/
		/*wire op_slt;//有符号比较*/
		/*wire op_sltu;//无符号比较*/
		/*wire op_and;*/
		/*wire op_nor;//或非*/
		/*wire op_or;*/
		/*wire op_xor;//异或*/
		/*wire op_sll;//逻辑左移*/
		/*wire op_srl;//逻辑右移*/
		/*wire op_sra;//算术右移*/
		/*wire op_lui;//高位加载*/


		/*assign op_add=alu_control[0];*/
		/*assign op_sub=alu_control[1];*/
		/*assign op_slt=alu_control[2];//有符号比较*/
		/*assign op_sltu=alu_control[3];//无符号比较*/
		/*assign op_and=alu_control[4];*/
		/*assign op_nor=alu_control[5];//或非*/
		/*assign op_or=alu_control[6];*/
		/*assign op_xor=alu_control[7];//异或*/
		/*assign op_sll=alu_control[8];//逻辑左移*/
		/*assign op_srl=alu_control[9];//逻辑右移*/
		/*assign op_sra=alu_control[10];//算术右移*/
		/*assign op_lui=alu_control[11];//高位加载*/
		

		/*wire [63:0] add_sub_result;*/
		/*wire [63:0] slt_result;*/
		/*wire [63:0] sltu_result;*/
		/*wire [63:0] and_result;*/
		/*wire [63:0] nor_result;*/
		/*wire [63:0] or_result;*/
		/*wire [63:0] xor_result;*/
		/*wire [63:0] sll_result;*/
		/*wire [63:0] srl_result;*/
		/*wire [63:0] sra_result;*/
		/*wire [63:0] lui_result;*/


		/*assign and_result=alu_src1&alu_src2;*/
		/*assign or_result=alu_src1|alu_src2;*/
		/*assign nor_result=~or_result;*/
		/*assign xor_result=alu_src1^alu_src2;*/
		/*assign lui_result={32'b0,alu_src2[31:12],12'b0};*/

 /*   wire [63:0]adder_a;*/
		/*wire [63:0]adder_b;*/
		/*wire adder_cin;*/
		/*wire [63:0]adder_result;*/
		/*wire adder_cout;*/

		/*assign adder_a=alu_src1;*/
		/*assign adder_b=(op_sub|op_slt|op_sltu)? ~alu_src2:alu_src2;*/
		/*assign adder_cin=(op_sub|op_slt|op_sltu)? 1'b1:0;*/
		/*assign {adder_cout,adder_result}=adder_a+adder_b+{63'b0,adder_cin};*/

		/*assign add_sub_result=adder_result;*/

		/*assign sltu_result[63:1]=63'b0;*/
		/*assign sltu_result[0]=~adder_cout;*/

		/*assign slt_result[63:1]=63'b0;*/
		/*assign slt_result[0]=(alu_src1[31]&~alu_src2[31])|(~(alu_src1[31]^alu_src2[31])&adder_result[31]);*/

		/*assign sll_result=alu_src2<<alu_src1[4:0];*/
		/*assign srl_result=alu_src2>>alu_src1[4:0];*/
		
		/*assign sra_result=($signed(alu_src2))>>>alu_src1[4:0];*/

		/*assign alu_result=({64{op_add|op_sub}}&add_sub_result)*/
								/*|     ({64{op_slt       }}&slt_result)*/
								/*|     ({64{op_sltu      }}&sltu_result)*/
								/*|     ({64{op_and       }}&and_result)*/
								/*|     ({64{op_nor       }}&nor_result)*/
								/*|     ({64{op_or        }}&or_result)*/
								/*|     ({64{op_xor       }}&xor_result)*/
								/*|     ({64{op_sll       }}&sll_result)*/
								/*|     ({64{op_srl       }}&srl_result)*/
								/*|     ({64{op_sra       }}&sra_result)*/
								/*|     ({64{op_lui       }}&lui_result);*/
		assign ram_addr=alu_src1+alu_src2;
		always@(*)begin
			case(alu_control)
				12'b000000000001:alu_result=alu_src1+alu_src2;
				12'b000000000010:alu_result=alu_src1-alu_src2;
				12'b000000000100:alu_result={{63'b0},(alu_src1>alu_src2)};
				12'b000000001000:alu_result={{63'b0},(alu_src1-alu_src2>0)};
				12'b000000010000:alu_result=alu_src1&alu_src2;
				12'b000000100000:alu_result=~(alu_src1|alu_src2);
				12'b000001000000:alu_result=(alu_src1|alu_src2);
				12'b000010000000:alu_result=alu_src1^alu_src2;
				12'b000100000000:alu_result=alu_src2<<alu_src1[4:0];
				12'b001000000000:alu_result=alu_src2>>alu_src1[4:0];
				12'b010000000000:alu_result=($signed(alu_src2))>>>alu_src1[4:0];
				12'b100000000000:alu_result={32'b0,alu_src2[31:12],12'b0};
				default:alu_result=0;
			endcase
end
endmodule
