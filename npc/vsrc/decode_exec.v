//无符号扩展为n位 需要提供原始长度l
`define SEXT(kz,n,l) ({{(n-l){kz[l-1]}},kz[(l-1):0]})

module decode_exec(input clk,input[31:0]inst,input [31:0] pc,output[31:0]dnpc);
    //六种类型000-R 001-I 010-S 011-B 100-U 101-J 111_NONE

    //export "DPI-C" task put_state; 
    export "DPI-C" function putstate;
		import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    localparam 
     // Type_R=3'b000,
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
			statefh=return_state;
			a0=return_a0;
			pcr=pc;
			dnpcr=dnpc;
			callreturn=call_returnr;
		endfunction
		 


	

		//对pc进行扩展
		wire [63:0]upc;
		assign upc={{32{1'b0}},pc};

		wire [2:0]Type;
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
		wire [63:0]adddata1;
		wire [63:0]adddata2;

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
    localparam length=5,wlength=5,rlength=1,alength=2,plength=2; 

		wire [31:0]addi;
		//assign addi={inst[31:20],inst[19:15],inst[14:12],inst[11:7],inst[6:0]};
		assign addi={inst[31:20],inst[19:15],{3{1'b0}},inst[11:7],{7'b0010011}};

	
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
		assign luimid={{32{1'b0}},inst[31:12],{12{1'b0}}};

		wire [31:0]jal;
		assign jal={inst[31:20],inst[19:15],inst[14:12],inst[11:7],{7'b1101111}};
		wire [63:0]jalpc;
		assign jalpc={{31{1'b0}},pc}+4;

		wire [31:0]jalr;
		assign jalr={inst[31:20],inst[19:15],{3'b000},inst[11:7],{7'b1100111}};

		wire[31:0]ebreak;
		assign ebreak=32'b0000000_00001_00000_000_00000_11100_11;
		assign state=(inst==32'b0000000_00001_00000_000_00000_11100_11)? 1'b1:1'b0;
		
		//assign addauipc={{32{inst[31]}},inst[31:12],{12{1'b0}}};
		//判断指令类型
		MuxKeyWithDefault #(length,32,3)m0(Type,inst,None,{
			addi,Type_I,
			auipc,Type_U,
			lui,Type_U,
			jal,Type_J,
			jalr,Type_I
			}); 

		//根据指令地址确定写地址和写数据 若没有的话 将写地址和写数据都设置为0
		//tested
		MuxKeyWithDefault #(wlength,32,5)m2(waddr,inst,5'b0,{
			addi,dest,
			auipc,dest,
			lui,dest,
			jal,dest,
			jalr,dest
			}); 
		MuxKeyWithDefault #(wlength,32,64)m3(wdata,inst,64'b0,{
			addi,addresult,
			auipc,addresult,
			lui,luimid,
			jal,jalpc,
			jalr,(upc+4)
			}); 
	 //确定读地址
		MuxKeyWithDefault #(rlength,32,5)m8(raddr,inst,5'b0,{
			ebreak,{5'b01010}
					}); 
		//若指令需要加法器 根据指令进行加法器设计
		MuxKeyWithDefault #(alength,32,64)m4(adddata1,inst,64'b0,{
			addi,src1,
			auipc,upc
			});
		MuxKeyWithDefault #(alength,32,64)m5(adddata2,inst,64'b0,{
			addi,Simm,
			auipc,addauipc
			});

		//dnpc
		MuxKeyWithDefault #(plength,32,32)m6(dnpc,inst,(pc+4),{
			jal,(pc+`SEXT(imm,32,21)),
			jalr,(src1[31:0]+`SEXT(imm,32,21))&(~1)
			});


		//addi

		Alu add(adddata1,adddata2,addresult);


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

