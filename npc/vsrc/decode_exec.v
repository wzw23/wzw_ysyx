//无符号扩展为n位 需要提供原始长度l
`define SEXT(kz,n,l) ({{(n-l){kz[l-1]}},kz[(l-1):0]})

module decode_exec(input clk,input[31:0]inst,input [31:0] pc,output[31:0]dnpc);
    //六种类型000-R 001-I 010-S 011-B 100-U 101-J 111_NONE

    //export "DPI-C" task put_state; 
    export "DPI-C" function putstate;
		import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

		import "DPI-C" function void vpmem_read(
			input longint mraddr, output longint mrdata);
		import "DPI-C" function void vpmem_write(
			input longint waddr, input longint wdata, input byte wmask);
		wire [63:0]mraddr;
		wire [63:0] mrdata;
		wire [63:0] mwdata;
		wire [63:0] mwaddr;
		wire [7:0] mwmask;
		always @(*) begin
			vpmem_read(mraddr, mrdata);
			vpmem_write(mwaddr, mwdata, mwmask);
		end

    localparam 
        Type_R=3'b000,
        Type_I=3'b001,
        Type_S=3'b010,
        Type_B=3'b011,
        Type_U=3'b100,
        Type_J=3'b101,
        None=3'b111;
		//int 是4字节所以要进行扩充
		wire [63:0]array[31:0];
		initial begin
			set_gpr_ptr(array);
		end
		wire state;
    wire [31:0] return_state;

    wire [31:0] return_a0;
		wire [1:0]call_return;//0代表既不是call也不是return 1代表call 2代表return
		wire [31:0]call_returnr;
		wire [2:0]Type;
		wire [31:0]Type_return;
		assign Type_return={{29{1'b0}},Type};
		assign call_returnr={{30{1'b0}},call_return};
		assign call_return=((dest==0)&&(imm==0)&&(rs1==1)&&(inst==jalr))?2:
										   ((inst==jal)||((inst==jalr)&&((dest!=0)||(imm!=0)||(rs1!=1))))?1:
										   0;	
		
		assign return_state= {{31{1'b0}},state};
		assign return_a0=rdata[31:0];
		function  void putstate(); 
			//定义输入变量 
			//定义函数体 
			output int statefh;
			output int a0;
			output int pcr;
			output int dnpcr;
			output int callreturn;
			output int Typer;
			statefh=return_state;
			a0=return_a0;
			pcr=pc;
			dnpcr=dnpc;
			callreturn=call_returnr;
			Typer=Type_return;
		endfunction
		 


	

		//对pc进行扩展
		wire [63:0]upc;
		assign upc={{32{1'b0}},pc};

		wire [1:0]one_zero;
		wire [4:0]six_two;
		wire [2:0]fth_twl;
		wire [4:0]rs1;
		wire [4:0]rs2;
		wire [4:0]raddr;
		assign one_zero=inst[1:0];
		assign six_two=inst[6:2];
		assign fth_twl=inst[14:12];
		assign rs1=inst[19:15];
		assign rs2=inst[24:20];
		wire[63:0]src1;
		wire[63:0]src2;
		wire[63:0]rdata;
		wire[63:0]imm;
		wire[63:0]Simm;
		wire[4:0]dest;
		wire[4:0]waddr;
		wire[63:0]wdata;
		//加法器
		wire [63:0]addresult;
		wire [63:0]data1;
		wire [63:0]data2;
		wire [63:0]compare;
		wire [63:0]logr;
		wire signed [63:0]arir;

		wire [63:0]logl;
		wire [63:0]aril;

		wire [63:0]yu;
		wire [63:0]huo;

		wire [63:0]yihuo;

		wire [63:0]cheng;
		wire [63:0]chu;

		wire [63:0]scheng;
		wire [63:0]schu;
		wire [63:0]syu;


		assign dest=inst[11:7];
		RegisterFile #(5,64) r0 (clk,1'b1,wdata,waddr,64'b0,5'b0,rs1,rs2,raddr,src1,src2,rdata,array);
		//根据指令类型取立即数
		MuxKeyWithDefault #(6,3,64)m1(imm,Type,64'b0,{
			Type_I,{{52{1'b0}},inst[31:20]}, 
			Type_S,{{52{1'b0}},inst[31:25],inst[11:7]},
			Type_B,{{51{1'b0}},inst[31:31],inst[7:7],inst[30:25],inst[11:8],{1'b0}},
			Type_U,{{32{1'b0}},inst[31:12],{12'b0}},
			Type_J,{{43{1'b0}},inst[31:31],inst[19:12],inst[20:20],inst[30:21],{1'b0}},
			None  ,{64'b0}
			}); 
		MuxKeyWithDefault #(6,3,64)m7(Simm,Type,64'b0,{
			Type_I,`SEXT(imm,64,12), 
			Type_S,`SEXT(imm,64,12),
			Type_B,`SEXT(imm,64,13),
			Type_U,`SEXT(imm,64,32),
			Type_J,`SEXT(imm,64,21),
			None  ,{64'b0}
			});
		//在此进行指令简化
		//代表指令长度
    localparam length=45,wlength=35,rlength=1,alength=41,plength=8,mwlength=4,mrlength=5;//mrlength=0; 

		wire [31:0]addi;
		assign addi={inst[31:20],inst[19:15],{3{1'b0}},inst[11:7],{7'b0010011}};

		wire [31:0]andi;
		assign andi={inst[31:20],inst[19:15],{3'b111},inst[11:7],{7'b0010011}};

		wire [31:0]xori;
		assign xori={inst[31:20],inst[19:15],{3'b100},inst[11:7],{7'b0010011}};


		wire [31:0]sllw;
		assign sllw={{7'b0000000},inst[24:20],inst[19:15],{3'b001},inst[11:7],{7'b0111011}};
		
		wire [31:0]srlw;
		assign srlw={{7'b0000000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0111011}};



		wire [31:0]sraw;
		assign sraw={{7'b0100000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0111011}};
		wire [31:0]srawd;
		assign srawd=($signed(src1[31:0])>>>src2[4:0]) ;


		wire [31:0]addiw;
		//assign addi={inst[31:20],inst[19:15],inst[14:12],inst[11:7],inst[6:0]};
		assign addiw={inst[31:20],inst[19:15],{3{1'b0}},inst[11:7],{7'b0011011}};

		wire [31:0]slliw;
		assign slliw={{7'b0000000},inst[24:20],inst[19:15],{3'b001},inst[11:7],{7'b0011011}};

		wire [31:0]srliw;
		assign srliw={{7'b0000000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0011011}};



		//若是此处出现错误可以参考sraw
		wire [31:0]sraiw;
		assign sraiw={{7'b0100000},inst[24:20],inst[19:15],{3'b101},inst[11:7],{7'b0011011}};



	
		//tested once
		wire [31:0]auipc;
		assign auipc={inst[31:20],inst[19:15],inst[14:12],inst[11:7],{7'b0010111}};
		wire [63:0]addauipc;
		wire [31:0]auipcmid;
		assign auipcmid={inst[31:12],{12{1'b0}}};
		assign addauipc=`SEXT(auipcmid,64,32);

		wire [31:0]lui;
		assign lui={inst[31:20],inst[19:15],inst[14:12],inst[11:7],{7'b0110111}};
		wire [63:0]luimid;
		assign luimid={{32{inst[31:31]}},inst[31:12],{12{1'b0}}};

		wire [31:0]jal;
		assign jal={inst[31:20],inst[19:15],inst[14:12],inst[11:7],{7'b1101111}};
		wire [63:0]jalpc;
		assign jalpc={{31{1'b0}},pc}+4;

		wire [31:0]jalr;
		assign jalr={inst[31:20],inst[19:15],{3'b000},inst[11:7],{7'b1100111}};

		wire[31:0]ebreak;
		assign ebreak=32'b0000000_00001_00000_000_00000_11100_11;
		assign state=(inst==32'b0000000_00001_00000_000_00000_11100_11)? 1'b1:1'b0;
		
		wire [31:0] sd;
		assign sd={inst[31:20],inst[19:15],{3'b011},inst[11:7],{7'b0100011}};
		//assign addauipc={{32{inst[31]}},inst[31:12],{12{1'b0}}};
		
		wire [31:0] sh;
		assign sh={inst[31:20],inst[19:15],{3'b001},inst[11:7],{7'b0100011}};

		wire [31:0] sw;
		assign sw={inst[31:20],inst[19:15],{3'b010},inst[11:7],{7'b0100011}};


		wire [31:0] sb;
		assign sb={inst[31:20],inst[19:15],{3'b000},inst[11:7],{7'b0100011}};
		

		wire [31:0] lw;
		assign lw={inst[31:20],inst[19:15],{3'b010},inst[11:7],{7'b0000011}};

		wire [31:0] lh;
		assign lh={inst[31:20],inst[19:15],{3'b001},inst[11:7],{7'b0000011}};


		wire [31:0] lbu;
		assign lbu={inst[31:20],inst[19:15],{3'b100},inst[11:7],{7'b0000011}};

		wire [31:0] lhu;
		assign lhu={inst[31:20],inst[19:15],{3'b101},inst[11:7],{7'b0000011}};


		wire [31:0] ld;
		assign ld={inst[31:20],inst[19:15],{3'b011},inst[11:7],{7'b0000011}};


		wire [31:0] addw;
		assign addw={{7'b0000000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0111011}};

		wire [31:0] subw;
		assign subw={{7'b0100000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0111011}};


		wire [31:0] mulw;
		assign mulw={{7'b0000001},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0111011}};

		wire [31:0] divw;
		assign divw={{7'b0000001},inst[24:20],inst[19:15],{3'b100},inst[11:7],{7'b0111011}};

		wire [31:0] remw;
		assign remw={{7'b0000001},inst[24:20],inst[19:15],{3'b110},inst[11:7],{7'b0111011}};




		wire [31:0] Add;//Add=add
		assign Add= {{7'b0000000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0110011}};

		wire [31:0] Mul;//Mul=mul
		assign Mul= {{7'b0000001},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0110011}};



		wire [31:0] And;//And=and
		assign And= {{7'b0000000},inst[24:20],inst[19:15],{3'b111},inst[11:7],{7'b0110011}};
		
		wire [31:0] Or;//Or=or
		assign Or= {{7'b0000000},inst[24:20],inst[19:15],{3'b110},inst[11:7],{7'b0110011}};


		wire [31:0] sltu;//And=and
		assign sltu= {{7'b0000000},inst[24:20],inst[19:15],{3'b011},inst[11:7],{7'b0110011}};

		wire [31:0] slt;//And=and
		assign slt= {{7'b0000000},inst[24:20],inst[19:15],{3'b010},inst[11:7],{7'b0110011}};



		wire [31:0] sub;
		assign sub= {{7'b0100000},inst[24:20],inst[19:15],{3'b000},inst[11:7],{7'b0110011}};

		wire [31:0] sltiu;
		assign sltiu={inst[31:20],inst[19:15],{3'b011},inst[11:7],{7'b0010011}};

		wire [31:0] srai;
		assign srai={{6'b010000},inst[25:20],inst[19:15],{3'b101},inst[11:7],{7'b0010011}};

		
		wire [31:0] slli;
		assign slli={{6'b000000},inst[25:20],inst[19:15],{3'b001},inst[11:7],{7'b0010011}};

		wire [31:0] srli;
		assign srli={{6'b000000},inst[25:20],inst[19:15],{3'b101},inst[11:7],{7'b0010011}};



		wire [31:0] beq;
		assign beq={inst[31:20],inst[19:15],{3'b000},inst[11:7],{7'b1100011}};

		wire [31:0] bne;
		assign bne={inst[31:20],inst[19:15],{3'b001},inst[11:7],{7'b1100011}};

		wire [31:0] bge;
		assign bge={inst[31:20],inst[19:15],{3'b101},inst[11:7],{7'b1100011}};

		wire [31:0] bgeu;
		assign bgeu={inst[31:20],inst[19:15],{3'b111},inst[11:7],{7'b1100011}};

		wire [31:0] bltu;
		assign bltu={inst[31:20],inst[19:15],{3'b110},inst[11:7],{7'b1100011}};



		wire [31:0] blt;
		assign blt={inst[31:20],inst[19:15],{3'b100},inst[11:7],{7'b1100011}};




		//判断指令类型
		MuxKeyWithDefault #(length,32,3)m0(Type,inst,None,{
			addi,Type_I,
			andi,Type_I,
			xori,Type_I,
			auipc,Type_U,
			lui,Type_U,
			jal,Type_J,
			jalr,Type_I,
			sd,Type_S,
			sh,Type_S,
			sw,Type_S,
			sb,Type_S,
			lw,Type_I,
			lh,Type_I,
			lbu,Type_I,
			lhu,Type_I,
			ld,Type_I,
			addw,Type_R,
			subw,Type_R,
			mulw,Type_R,
			divw,Type_R,
			remw,Type_R,
			sllw,Type_R,
			srlw,Type_R,
			sraw,Type_R,
			Add,Type_R,
			Mul,Type_R,
			And,Type_R,
			Or,Type_R,
			sltu,Type_R,
			slt,Type_R,
			sub,Type_R,
			sltiu,Type_I,
			srai,Type_I,
			slli,Type_I,
			srli,Type_I,
			beq,Type_B,
			bge,Type_B,
			bgeu,Type_B,
			bltu,Type_B,
			blt,Type_B,
			bne,Type_B,
			addiw,Type_I,
			sraiw,Type_I,
			slliw,Type_I,
			srliw,Type_I

			}); 

		//根据指令地址确定写地址和写数据 若没有的话 将写地址和写数据都设置为0
		//tested
		MuxKeyWithDefault #(wlength,32,5)m2(waddr,inst,5'b0,{
			addi,dest,
			andi,dest,
			xori,dest,
			auipc,dest,
			lui,dest,
			jal,dest,
			jalr,dest,
			lw,dest,
			lh,dest,
			lbu,dest,
			lhu,dest,
			addw,dest,
			subw,dest,
			mulw,dest,
			divw,dest,
			remw,dest,
			sllw,dest,
			srlw,dest,
			sraw,dest,
			Add,dest,
			Mul,dest,
			And,dest,
			Or,dest,
			sltu,dest,
			slt,dest,
			sub,dest,
			sltiu,dest,
			addiw,dest,
			slliw,dest,
			srliw,dest,
			sraiw,dest,
			ld,dest,
			srai,dest,
			slli,dest,
			srli,dest
			}); 
		MuxKeyWithDefault #(wlength,32,64)m3(wdata,inst,64'b0,{
			addi,addresult,
			andi,yu,
			xori,yihuo,
			auipc,addresult,
			lui,luimid,
			jal,jalpc,
			jalr,(upc+4),
			lw,`SEXT(mrdata,64,32),
			lh,`SEXT(mrdata,64,16),
			lbu,{{56{1'b0}},mrdata[7:0]},
			lhu,{{48{1'b0}},mrdata[15:0]},
			addw,`SEXT(addresult,64,32),
			subw,`SEXT(addresult,64,32),
			mulw,`SEXT(cheng,64,32),
			divw,`SEXT(schu,64,32),
			remw,`SEXT(syu,64,32),
			sllw,`SEXT(logl,64,32),
			srlw,`SEXT(logr,64,32),
			sraw,`SEXT(srawd,64,32),
			Add,addresult,
			Mul,cheng,
			And,yu,
			Or,huo,
			sltu,compare,
			slt,(addresult[63]==1)?{{63{1'b0}},{1'b1}}:{{63{1'b0}},{1'b0}},
			sub,addresult,
			sltiu,compare,
			addiw,`SEXT(addresult,64,32),
			slliw,`SEXT(logl,64,32),
			srliw,`SEXT(logr,64,32),
			sraiw,`SEXT(arir,64,32),
			ld,mrdata,
			srai,arir,
			slli,logl,
			srli,logr
			}); 
	 //确定读地址
		MuxKeyWithDefault #(rlength,32,5)m8(raddr,inst,5'b0,{
			ebreak,{5'b01010}
					}); 
		//若指令需要加法器 根据指令进行加法器设计
		MuxKeyWithDefault #(alength,32,64)m4(data1,inst,64'b0,{
			addi,src1,
			andi,src1,
			xori,src1,
			auipc,upc,
			sd,src1,
			sh,src1,
			sw,src1,
			sb,src1,
			lw,src1,
			lh,src1,
			lbu,src1,
			lhu,src1,
			ld,src1,
			addw,src1,
			subw,src1,
			mulw,src1,
			divw,{{32{1'b0}},src1[31:0]},
			remw,{{32{1'b0}},src1[31:0]},
			sllw,src1,
			srlw,{{32{1'b0}},src1[31:0]},
			Add,src1,
			Mul,src1,
			And,src1,
			Or,src1,
			sltu,src2,
			slt,src1,
			sub,src1,
			sltiu,Simm,
			beq,src1,
			bge,src1,
			bgeu,src1,
			bltu,src2,
			blt,src1,
			bne,src1,
			addiw,src1,
			slliw,src1,
			srliw,{{32{1'b0}},src1[31:0]},
			sraiw,src1,
			srai,src1,
			slli,src1,
			srli,src1
			});
		MuxKeyWithDefault #(alength,32,64)m5(data2,inst,64'b0,{
			addi,Simm,
			andi,Simm,
			xori,Simm,
			auipc,addauipc,
			sd,Simm,
			sh,Simm,
			sw,Simm,
			sb,Simm,
			lw,Simm,
			lh,Simm,
			lbu,Simm,
			lhu,Simm,
			ld,Simm,
			addw,src2,
			subw,(-src2),
			mulw,src2,
			divw,{{32{1'b0}},src2[31:0]},
			remw,{{32{1'b0}},src2[31:0]},
			sllw,{{59{1'b0}},src2[4:0]},
			srlw,{{59{1'b0}},src2[4:0]},
			Add,src2,
			Mul,src2,
			And,src2,
			Or,src2,
			sltu,src1,
			slt,(-src2),
			sub,(-src2),
			sltiu,src1,
			beq,(-src2),
			bge,(-src2),
			bgeu,src2,
			bltu,src1,
			blt,(-src2),
			bne,(-src2),
			addiw,Simm,
			slliw,{{58{1'b0}},inst[25:20]},
			srliw,{{58{1'b0}},inst[25:20]},
			sraiw,{{58{1'b0}},inst[25:20]},
			srai,{{58{1'b0}},inst[25:20]},
			slli,{{58{1'b0}},inst[25:20]},
			srli,{{58{1'b0}},inst[25:20]}
			});

		//dnpc
		MuxKeyWithDefault #(plength,32,32)m6(dnpc,inst,(pc+4),{
			jal,(pc+`SEXT(imm,32,21)),
			jalr,(src1[31:0]+`SEXT(imm,32,21))&(~1),
			beq,(addresult==0)?(pc+`SEXT(Simm,32,32)):(pc+4),
			bne,(addresult!=0)?(pc+`SEXT(Simm,32,32)):(pc+4),
			bge,((addresult==0)|(addresult[63]==0))?(pc+`SEXT(Simm,32,32)):(pc+4),
			bgeu,((src1==src2)|(compare==1))?(pc+`SEXT(Simm,32,32)):(pc+4),
			bltu,((compare==1))?(pc+`SEXT(Simm,32,32)):(pc+4),
			blt,(addresult[63]==1)?(pc+`SEXT(Simm,32,32)):(pc+4)
			});
			//memory read memory write
			MuxKeyWithDefault #(mwlength,32,64)m9(mwaddr,inst,64'b0,{
				sd,addresult,
				sh,addresult,
				sw,addresult,
				sb,addresult
				}); 
			MuxKeyWithDefault #(mwlength,32,64)m10(mwdata,inst,64'b0,{
				sd,src2,
				sh,src2,
				sw,src2,
				sb,src2
				}); 
			MuxKeyWithDefault #(mwlength,32,8)m12(mwmask,inst,8'b0,{
				sd,8'b11111111,
				sw,8'b00001111,
				sh,8'b00000011,
				sb,8'b00000001
				}); 
			MuxKeyWithDefault #(mrlength,32,64)m14(mraddr,inst,64'h0000000080000000,{
				lw,addresult,
				lh,addresult,
				lbu,addresult,
				lhu,addresult,
				ld,addresult
				}); 
		//addi

		Alu add(.a(data1),.b(data2),.out(addresult),.compare(compare),.ur(logr),.sr(arir),.ul(logl),.sl(aril),.yu(yu),.huo(huo),.yihuo(yihuo),.cheng(cheng),.chu(chu),.scheng(scheng),.schu(schu),.syu(syu));


		//判断指令种类
		//wire isaddi;	
		//wire isauipc;

		//assign isaddi=((six_two==5'b00100)&(one_zero==2'b11)&(fth_twl==3'b000));	
		//assign isauipc=(six_two==5'b00101)&(one_zero==2'b11);
		//assign Type=isaddi? Type_I:None;
		/*assign waddr=isaddi? dest:0;*/
		/*assign wdata=isaddi? addresult:0;*/
		//break
		endmodule

