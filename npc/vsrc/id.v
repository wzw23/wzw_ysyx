module id(input [31:0]inst,output [4:0]rs1,output [4:0]rs2,output [4:0]rd,output reg [63:0]imm,output [11:0]op_d,output [4:0]fu_7_d,output [7:0]fu_3_d,output [2:0]e_inst,output [1:0]c_raddr,output [1:0]c_waddr);
  
	assign rs1=inst[19:15];
	assign rs2=inst[24:20];
	assign rd =inst[11:7];

	wire [6:0]op;
	wire	 [2:0]fu_3;
	wire [6:0]fu_7;
	assign op =inst[6:0];
	assign fu_7=inst[31:25];
	assign fu_3=inst[14:12];

	//将fu_3转化成独热码的方式
	de_len_olen  #(3,8)   de_3_8     (fu_3,fu_3_d);

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

	MuxKey #(10,12,64) mux0(imm,op_d,{
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
		assign c_raddr=(imm==64'h300)?0:
									 ((imm==64'h305)|(e_inst[1]==1))?1:
									 ((imm==64'h341)|(e_inst[2]==1))?2:
									 3;
		assign c_waddr=c_raddr;
		assign e_inst=(inst==32'b0000000_00001_00000_000_00000_11100_11)?3'b001:
		(inst==32'b00000000000000000000000001110011)?3'b010:
		(inst==32'b00110000001000000000000001110011)?3'b100
		:3'b000;
endmodule
