module id(input [31:0]inst,output [4:0]rs1,output [4:0]rs2,output [4:0]rd,output reg [63:0]imm,output [6:0]op,output [6:0]fu_7,output [2:0]fu_3);
  
  //由于转化成独热码耗费资源太大所以不转换
  //wire	 [6:0]op;//通过op盘读判断
  //wire	 [2:0]fu_3;
  //wire	 [6:0]fu_7;

	assign rs1=inst[19:15];
	assign rs2=inst[24:20];
	assign rd =inst[11:7];

	assign op =inst[6:0];
	assign fu_7=inst[31:25];
	assign fu_3=inst[14:12];

	//de_len_olen  #(7,128) de_7_128(op,op_d);
	//de_len_olen  #(7,128) de_7_128_2 (fu_7,fu_7_d);
	//de_len_olen  #(3,8)   de_3_8     (fu_3,fu_3_d);

	/*wire [63:0]immi;*/
	/*wire [63:0]imms;*/
	/*wire [63:0]immb;*/
	/*wire [63:0]immu;*/
	/*wire [63:0]immj;*/
	/*wire [8:0]op_index;*/
	/*assign op_index[0]=(op==7'b0110111);*/
	/*assign op_index[1]=(op==7'b0010111);*/
	/*assign op_index[2]=(op==7'b1101111);*/
	/*assign op_index[3]=(op==7'b1100011);*/
	/*assign op_index[4]=(op==7'b1100111);*/
	/*assign op_index[5]=(op==7'b0000011);*/
	/*assign op_index[6]=(op==7'b0010011);*/
	/*assign op_index[7]=(op==7'b1110011);*/
	/*assign op_index[8]=(op==7'b0100011);*/

 /* MuxKey #(9,9,64) mux0(imm,op_index,{*/
		/*9'b000000001,{{32{inst[31]}},inst[31:12],{12'b0}},*/
		/*9'b000000010,{{32{inst[31]}},inst[31:12],{12'b0}},*/
		/*9'b000000100,{{43{inst[31]}},inst[31:31],inst[19:12],inst[20:20],inst[30:21],{1'b0}},*/
		/*9'b000001000,{{51{inst[31]}},inst[31:31],inst[7:7],inst[30:25],inst[11:8],{1'b0}},*/
		/*9'b000010000,{{52{inst[31]}},inst[31:20]},*/
		/*9'b000100000,{{52{inst[31]}},inst[31:20]},*/
		/*9'b001000000,{{52{inst[31]}},inst[31:20]},*/
		/*9'b010000000,{{52{inst[31]}},inst[31:20]},*/
		/*9'b100000000,{{52{inst[31]}},inst[31:25],inst[11:7]}*/
		/*});*/

 //为什么加上这一段大大拉低了速度
	/*assign immi={{52{inst[31]}},inst[31:20]};*/
	/*assign imms={{52{inst[31]}},inst[31:25],inst[11:7]};*/
	/*assign immb={{51{inst[31]}},inst[31:31],inst[7:7],inst[30:25],inst[11:8],{1'b0}};*/
	/*assign immu={{32{inst[31]}},inst[31:12],{12'b0}};*/
	/*assign immj={{43{inst[31]}},inst[31:31],inst[19:12],inst[20:20],inst[30:21],{1'b0}};*/

	/*assign imm=({64{(op0)}}&immu)*/
			 /*|     ({64{(op1)}}&immu)*/
			 /*|     ({64{(op2)}}&immj)*/
			 /*|     ({64{(op3)}}&immb)*/
			 /*|     ({64{(op4)}}&immi)*/
			 /*|     ({64{(op5)}}&immi)*/
			 /*|     ({64{(op6)}}&immi)*/
			 /*|     ({64{(op7)}}&immi)*/
			 /*|     ({64{(op8)}}&imms);*/
	
	always@(*)begin
		case(op)
			7'b0110111:imm={{32{inst[31]}},inst[31:12],{12'b0}};	
			7'b0010111:imm={{32{inst[31]}},inst[31:12],{12'b0}};	
			7'b1101111:imm={{43{inst[31]}},inst[31:31],inst[19:12],inst[20:20],inst[30:21],{1'b0}};	
			7'b1100011:imm={{51{inst[31]}},inst[31:31],inst[7:7],inst[30:25],inst[11:8],{1'b0}};	
			7'b1100111:imm={{52{inst[31]}},inst[31:20]};	
			7'b0000011:imm={{52{inst[31]}},inst[31:20]};	
			7'b0010011:imm={{52{inst[31]}},inst[31:20]};	
			7'b1110011:imm={{52{inst[31]}},inst[31:20]};	
			7'b0100011:imm={{52{inst[31]}},inst[31:25],inst[11:7]};	
			default:imm=0;
		endcase
	end
endmodule
