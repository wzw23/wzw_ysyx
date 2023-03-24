module control(input [6:0]op,input[6:0]fu_7,input [2:0]fu_3,output [2:0]sel_alu_src1,output [2:0]sel_alu_src2,output [11:0]alu_control,output rf_wen,output sel_rf_res,output data_ram_wen,output [7:0]wmask);
//func7 func3 op

	wire op_0010011;
	wire op_1110011;
	wire op_0111011;
	wire op_0110011;
	wire op_1100011;
	wire op_0000011;
	wire op_0011011;
	wire op_0100011;

	assign op_0010011=(op ==7'b0010011);
	assign op_1110011=(op ==7'b1110011);
	assign op_0111011=(op ==7'b0111011);
	assign op_0110011=(op ==7'b0110011);
	assign op_1100011=(op ==7'b1100011);
	assign op_0000011=(op ==7'b0000011);
	assign op_0011011=(op ==7'b0011011);
	assign op_0100011=(op ==7'b0100011);


	wire fu_7_0000000;
	assign fu_7_0000000=(fu_7==7'b0000000);

	wire fu_7_0100000;
	assign fu_7_0100000=(fu_7==7'b0100000);

	wire fu_7_0000001;
	assign fu_7_0000001=(fu_7==7'b0000001);

	wire fu_3_000;
	assign fu_3_000=(fu_3 ==3'b000);
	wire fu_3_001;
	assign fu_3_001=(fu_3 ==3'b001);
	wire fu_3_010;
	assign fu_3_010=(fu_3 ==3'b010);
	wire fu_3_011;
	assign fu_3_011=(fu_3 ==3'b011);
	wire fu_3_100;
	assign fu_3_100=(fu_3 ==3'b100);
	wire fu_3_101;
	assign fu_3_101=(fu_3 ==3'b101);
	wire fu_3_110;
	assign fu_3_110=(fu_3 ==3'b110);
	wire fu_3_111;
	assign fu_3_111=(fu_3 ==3'b111);

  wire addi;
  assign addi=(fu_3_000)&(op_0010011);
  
  wire csrrw;
  assign csrrw=(fu_3_001)&(op_1110011);
  
  wire csrrs;
  assign csrrs=(fu_3_010)&(op_1110011);
  
  //wire ecall;
  //assign ecall={32'b00000000000000000000000001110011};
  
  //wire mret;
  //assign mret= {32'b00110000001000000000000001110011};
  
  
  wire andi;
  assign andi=(fu_3_111)&(op_0010011);
  
  wire xori;
  assign xori=(fu_3_100)&(op_0010011);
  
  wire ori;
  //assign ori={inst[31:20],inst[19:15],{3'b110},inst[11:7],{7'b0010011}};
  assign ori=(fu_3_110)&(op_0010011);
  
  wire sllw;
  //assign sllw={{7'b0000000},inst[24:20],inst[19:15],{3'b001},inst[11:7],{7'b0111011}};
  assign sllw=(fu_7_0000000)&(fu_3_001)&(op_0111011);
  
  wire sll;
  //assign sll={{7'b0000000},inst[24:20],inst[19:15],{3'b001},inst[11:7],{7'b0110011}};
  assign sll=(fu_7_0000000)&(fu_3_001)&(op_0110011);
  
  wire srlw;
  //assign srlw={{7'b0000000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0111011}};
  assign srlw=(fu_7_0000000)&(fu_3_101)&(op_0111011);
  
  wire sraw;
  //assign sraw={{7'b0100000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0111011}};
  assign sraw=(fu_7_0100000)&(fu_3_101)&(op_0111011);

  /*wire srawd;*/
  /*assign srawd=($signed(src1[31:0])>>>src2[4:0]) ;*/
  
  wire addiw;
  //assign addiw={inst[31:20],inst[19:15],{3{1'b0}},inst[11:7],{7'b0011011}};
  assign addiw=(fu_3_000)&(op_0011011);
  
  wire slliw;
  //assign slliw={{7'b0000000},inst[24:20],inst[19:15],{3'b001},inst[11:7],{7'b0011011}};
  assign slliw=(fu_7_0000000)&(fu_3_001)&(op_0011011);
  
  wire srliw;
  //assign srliw={{7'b0000000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0011011}};
  assign slliw=(fu_7_0000000)&(fu_3_101)&(op_0011011);
  
  //若是此处出现错误可以参考sraw
  wire sraiw;
  //assign sraiw={{7'b0100000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0011011}};
  assign sraiw=(fu_7_0100000)&(fu_3_101)&(op_0011011);
  
  //tested once
  wire auipc;
  //assign auipc={inst[31:20],inst[19:15],inst[14:12],inst[11:7],{7'b0010111}};
  assign sraiw=(op=={7'b0010111});
    
  wire lui;
  //assign lui={inst[31:20],inst[19:15],inst[14:12],inst[11:7],{7'b0110111}};
  assign sraiw=(op=={7'b0110111});

  //wire luimid;
  //assign luimid={{32{inst[31:31]}},inst[31:12],{12{1'b0}}};
  //assign luimid=(op=={7'b0110111});
  
  wire jal;
  //assign jal={inst[31:20],inst[19:15],inst[14:12],inst[11:7],{7'b1101111}};
  assign jal=(op=={7'b1101111});

  //wire jalpc;
  //assign jalpc={{31{1'b0}},pc}+4;
  
  wire jalr;
  //assign jalr={inst[31:20],inst[19:15],{3'b000},inst[11:7],  {7'b1100111}};
  assign addi=(fu_3_000)&(op=={7'b1100111});
  
  //wire[31:0]ebreak;
  //assign ebreak=32'b0000000_00001_00000_000_00000_11100_11;
  //assign state=(inst==32'b0000000_00001_00000_000_00000_11100_11)? 1'b1:1'b0;
  
  wire sd;
  //assign sd={inst[31:20],inst[19:15],{3'b011},inst[11:7],{7'b0100011}};
  assign sd=(fu_3_011)&(op_0100011);
  
  wire sh;
  //assign sh={inst[31:20],inst[19:15],{3'b001},inst[11:7],{7'b0100011}};
  assign sh=(fu_3_001)&(op_0100011);
  
  wire sw;
  //assign sw={inst[31:20],inst[19:15],{3'b010},inst[11:7],{7'b0100011}};
  assign sw=(fu_3_010)&(op_0100011);
  
  wire sb;
  //assign sb={inst[31:20],inst[19:15],{3'b000},inst[11:7],{7'b0100011}};
  assign sb=(fu_3_000)&(op_0100011);
  
  wire lw;
  //assign lw={inst[31:20],inst[19:15],{3'b010},inst[11:7],{7'b0000011}};
  assign lw=(fu_3_010)&(op_0000011);
  
  wire lh;
  //assign lh={inst[31:20],inst[19:15],{3'b001},inst[11:7],{7'b0000011}};
  assign lh=(fu_3_001)&(op_0000011);
  
  wire lb;
  //assign lb={inst[31:20],inst[19:15],{3'b000},inst[11:7],{7'b0000011}};
  assign lb=(fu_3_000)&(op_0000011);
  
  wire lbu;
  //assign lbu={inst[31:20],inst[19:15],{3'b100},inst[11:7],{7'b0000011}};
  assign lbu=(fu_3_100)&(op_0000011);
  
  wire lwu;
  //assign lwu={inst[31:20],inst[19:15],{3'b110},inst[11:7],{7'b0000011}};
  assign lwu=(fu_3_110)&(op_0000011);
  
  wire lhu;
  //assign lhu={inst[31:20],inst[19:15],{3'b101},inst[11:7],{7'b0000011}};
  assign lhu=(fu_3_101)&(op_0000011);
  
  wire ld;
  //assign ld={inst[31:20],inst[19:15],{3'b011},inst[11:7],{7'b0000011}};
  assign ld=(fu_3_011)&(op_0000011);
  
  wire addw;
  //assign addw={{7'b0000000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0111011}};
  assign addw=(fu_7_0000000)&(fu_3_000)&(op_0111011);
  
  wire subw;
  //assign subw={{7'b0100000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0111011}};
  assign subw=(fu_7_0100000)&(fu_3_000)&(op_0111011);
  
  wire mulw;
  //assign mulw={{7'b0000001},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0111011}};
  assign mulw=(fu_7_0000001)&(fu_3_000)&(op_0111011);
  
  wire divw;
  //assign divw={{7'b0000001},inst[24:20],inst[19:15],{3'b100},inst[11:7],{7'b0111011}};
  assign divw=(fu_7_0000001)&(fu_3_100)&(op_0111011);
  
  
  wire divuw;
  //assign divuw={{7'b0000001},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0111011}};
  assign divw=(fu_7_0000001)&(fu_3_101)&(op_0111011);
  
  wire divu;
  //assign divu= {{7'b0000001},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0110011}};
  assign divu=(fu_7_0000001)&(fu_3_101)&(op_0110011);
  
  wire div;
  //assign div= {{7'b0000001},inst[24:20],inst[19:15],{3'b100},inst[11:7],{7'b0110011}};
  assign div=(fu_7_0000001)&(fu_3_100)&(op_0110011);
  
  wire rem;
  //assign rem=  {{7'b0000001},inst[24:20],inst[19:15],{3'b110},inst[11:7],{7'b0110011}};
  assign rem=(fu_7_0000001)&(fu_3_110)&(op_0110011);
  
  wire remu;
  //assign remu= {{7'b0000001},inst[24:20],inst[19:15],{3'b111},inst[11:7],{7'b0110011}};
  assign remu=(fu_7_0000001)&(fu_3_111)&(op_0110011);
  
  wire remw;
  //assign remw={{7'b0000001},inst[24:20],inst[19:15],{3'b110},inst[11:7],{7'b0111011}};
  assign remu=(fu_7_0000001)&(fu_3_110)&(op_0111011);
   
  wire Add;//Add=add
  //assign Add= {{7'b0000000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0110011}};
  assign Add=(fu_7_0000000)&(fu_3_000)&(op_0110011);
  
  wire Mul;//Mul=mul
  //assign Mul= {{7'b0000001},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0110011}};
  assign Mul=(fu_7_0000001)&(fu_3_000)&(op_0110011);
  
  wire And;//And=and
  //assign And= {{7'b0000000},inst[24:20],inst[19:15],{3'b111},inst[11:7],{7'b0110011}};
  assign And=(fu_7_0000000)&(fu_3_111)&(op_0110011);
  
  wire Xor;//Xor=xor
  //assign Xor= {{7'b0000000},inst[24:20],inst[19:15],{3'b100},inst[11:7],{7'b0110011}};
  assign Xor=(fu_7_0000000)&(fu_3_100)&(op_0110011);
  
  wire Or;//Or=or
  //assign Or= {{7'b0000000},inst[24:20],inst[19:15],{3'b110},inst[11:7],{7'b0110011}};
  assign Or=(fu_7_0000000)&(fu_3_110)&(op_0110011);
  
  
  wire sltu;//And=and
  //assign sltu= {{7'b0000000},inst[24:20],inst[19:15],{3'b011},inst[11:7],{7'b0110011}};
  assign sltu=(fu_7_0000000)&(fu_3_011)&(op_0110011);
  
  wire slt;//And=and
  //assign slt= {{7'b0000000},inst[24:20],inst[19:15],{3'b010},inst[11:7],{7'b0110011}};
  assign slt=(fu_7_0000000)&(fu_3_010)&(op_0110011);
  
  wire sub;
  //assign sub= {{7'b0100000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0110011}};
  assign sub=(fu_7_0100000)&(fu_3_000)&(op_0110011);
  
  wire sltiu;
  //assign sltiu={inst[31:20],inst[19:15],{3'b011},inst[11:7],{7'b0010011}};
  assign sltiu=(fu_3_011)&(op_0010011);
  
  wire srai;
  //assign srai={{6'b010000},inst[25:20],inst[19:15],{3'b101},inst[11:7],{7'b0010011}};
  assign srai=(fu_7_0100000)&(fu_3_101)&(op_0010011);
  
  /*wire slli;*/
  /*assign slli={{6'b000000},inst[25:20],inst[19:15],{3'b001},inst[11:7],{7'b0010011}};*/
  
  /*wire srli;*/
  /*assign srli={{6'b000000},inst[25:20],inst[19:15],{3'b101},inst[11:7],{7'b0010011}};*/
  
  wire beq;
  //assign beq={inst[31:20],inst[19:15],{3'b000},inst[11:7],{7'b1100011}};
  assign beq=(fu_3_000)&(op_1100011);
  
  wire bne;
  //assign bne={inst[31:20],inst[19:15],{3'b001},inst[11:7],{7'b1100011}};
  assign bne=(fu_3_001)&(op_1100011);
  
  wire bge;
  //assign bge={inst[31:20],inst[19:15],{3'b101},inst[11:7],{7'b1100011}};
  assign bge=(fu_3_101)&(op_1100011);
  
  wire bgeu;
  //assign bgeu={inst[31:20],inst[19:15],{3'b111},inst[11:7],{7'b1100011}};
  assign bgeu=(fu_3_111)&(op_1100011);
  
  wire bltu;
  //assign bltu={inst[31:20],inst[19:15],{3'b110},inst[11:7],{7'b1100011}};
  assign bltu=(fu_3_110)&(op_1100011);
  
  wire blt;
  //assign blt={inst[31:20],inst[19:15],{3'b100},inst[11:7],{7'b1100011}};
  assign blt=(fu_3_100) &(op_1100011);

	//////////////////////////控制信号书写////////////////////////////
	assign sel_alu_src1=({3{Add}}  & {3'b001});
	assign sel_alu_src2=({3{Add}}  & {3'b001})
	              |     ({3{addi}} & {3'b010});

	assign alu_control =({12{Add|addi}} & {12'b000000000001});

	assign rf_wen=Add|addi;

	assign sel_rf_res=lw;

	assign data_ram_wen=sd|sw;

	//wire [7:0]wmask;
	assign wmask=({8{sb}})|({{4'b0},{4{sw}}})|({{6'b0},{2{sh}}})|({{7'b0},{sb}});
	/////////////////////////////////////////////////////////////////

endmodule
