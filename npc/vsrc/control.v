//`include "hong.v"
`define alu_length 17
module control(input [11:0]op_d,input[4:0]fu_7_d,input [7:0]fu_3_d,output [3:0]sel_alu_src1,output [2:0]sel_alu_src2,output [`alu_length-1:0]alu_control,output rf_wen,output [2:0]sel_rf_res,output data_ram_en,output data_ram_wen,output [7:0]wmask,input [2:0]alu_equal,output [1:0]sel_nextpc,output [6:0]l_choose,output not_have,output w_choose,output c_wchoose,output c_wen,input [2:0]e_inst,input inst_update,output c_wen1_2,input mem_finish);

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
	assign jal=(op_d[2]);
  
	wire jalr;
	assign jalr=(fu_3_d[3'b000])&(op_d[3]);
	
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
	assign beq=(fu_3_d[3'b000])&(op_d[4]);
	
	wire bne;
	assign bne=(fu_3_d[3'b001])&(op_d[4]);
	
	wire bge;
	assign bge=(fu_3_d[3'b101])&(op_d[4]);
	
	wire bgeu;
	assign bgeu=(fu_3_d[3'b111])&(op_d[4]);
	
	wire bltu;
	assign bltu=(fu_3_d[3'b110])&(op_d[4]);
	
  wire blt;
  assign blt=(fu_3_d[3'b100]) &(op_d[4]);

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

	assign rf_wen=(Add|addi|ld|jal|jalr|slt|sltu|sll|srl|sra|sltiu|andi|ori|xori|lw|lwu|lh|lhu|lb|lbu|auipc|sub|sllw|srlw|sraw|addiw|slliw|srliw|sraiw|addw|srli|srai|slli|And|Or|mulw|divw|remw|lui|subw|Mul|Xor|divu|divuw|rem|div|csrrs|csrrw|remu|remuw)&mem_finish;

	assign sel_rf_res=(ld|lw|lwu|lh|lhu|lb|lbu)?3'b010:
										(csrrw|csrrs)?3'b100:
										3'b001;

	//assign data_ram_wen=sd|sw;
	assign data_ram_en=1;
	assign data_ram_wen=(sd|sb|sh|sw|sb);

	assign wmask=sb?8'b00000001:
							 sh?8'b00000011:
							 sw?8'b00001111:
							 sd?8'b11111111:
							 8'b00000000
							 ;
	/////////////////////////////////////////////////////////////////
	assign sel_nextpc=({2{{beq&alu_equal[0]}|{bne&(!alu_equal[0])}|jal|{bltu&(alu_equal[1])}|{blt&(alu_equal[2])}|{bgeu&{(~alu_equal[1])|(alu_equal[0])}}|{bge&{(~alu_equal[2])|alu_equal[0]}}}}&2'b01)
					|					({2{jalr}}&2'b10)
					|					({2{e_inst[1]|e_inst[2]}}&2'b11)	
					;
	assign c_wchoose=csrrs;
	assign c_wen=(csrrw|csrrs)&mem_finish;
	assign c_wen1_2=mem_finish&e_inst[1];
	
	assign not_have=addi|andi|xori|ori|sll|srl|sra|lui|jal|jalr|sd|sh|sw|sb|lw|lwu|lh|lhu|lb|lbu|ld|divu|Add|Mul|And|Xor|Or|sltu|slt|sub|sltiu|beq|bne|bge|bgeu|bltu|blt|auipc|rem|remu|div|addw|subw|mulw|remuw|divw|divuw|remw|addiw|srliw|slliw|sraiw|slli|srli|srai|sllw|sraw|srlw|csrrs|csrrw|e_inst[1]|e_inst[2]|e_inst[0];
	assign w_choose=addw|subw|mulw|divw|divuw|remw|sllw|srlw|sraw|addiw|sraiw|slliw|srliw|remuw;
endmodule
