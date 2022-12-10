module decode_exec(input clk,input[31:0]inst);
    //六种类型000-R 001-I 010-S 011-B 100-U 101-J 111_NONE
    localparam 
     //   Type_R=3'b000,
        Type_I=3'b001,
        Type_S=3'b010,
        Type_B=3'b011,
        Type_U=3'b100,
        Type_J=3'b101,
        None=3'b111;
    wire [2:0]Type;
    wire [1:0]one_zero;
    wire [4:0]six_two;
    wire [2:0]fth_twl;
    wire [4:0]rs1;
    wire [4:0]rs2;
    assign one_zero=inst[1:0];
    assign six_two=inst[6:2];
    assign fth_twl=inst[14:12];
    assign rs1=inst[19:15];
    assign rs2=inst[24:20];
    wire[63:0]src1;
    wire[63:0]src2;
    wire[63:0]imm;
    wire[4:0]dest;
    wire[4:0]waddr;
    wire[63:0]wdata;
    assign dest=inst[11:7];
    RegisterFile #(5,64) r0 (clk,1'b1,wdata,waddr,rs1,rs2,src1,src2);
    MuxKeyWithDefault #(6,3,64)m0(imm,Type,64'b0,{
        Type_I,{{52{1'b0}},inst[31:20]}, 
        Type_S,{{52{1'b0}},inst[31:25],inst[11:7]},
        Type_B,{{52{1'b0}},inst[31:31],inst[7:7],inst[30:25],inst[11:8]},
        Type_U,{{44{1'b0}},inst[31:12]},
        Type_J,{{44{1'b0}},inst[31:31],inst[19:12],inst[20:20],inst[30:21]},
        None  ,{64'b0}
        }); 
    //addi
    wire [63:0]addidata;
    Alu addi(src1,imm,addidata);
    assign Type=((six_two==5'b00100)&&(one_zero==2'b11)&&(fth_twl==3'b000))? Type_I:None;
    assign waddr=((six_two==5'b00100)&&(one_zero==2'b11)&&(fth_twl==3'b000))? dest:0;
    assign wdata=((six_two==5'b00100)&&(one_zero==2'b11)&&(fth_twl==3'b000))? addidata:0;
    //
endmodule
