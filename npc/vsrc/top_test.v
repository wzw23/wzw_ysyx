module top_test(
	input clock,
  input reset,
	output [31:0]inst,
  //input [31:0] in,
  output [63:0] cpupc,
  output ebreak,
	output not_have,
	output [63:0]dnpc,
	output reg inst_finish,
	output mem_finish,
	output inst_update,
	output [63:0]dnpc_reg_wb,
	output [63:0]cpupc_reg_wb,
	output [63:0]cpupc_reg_finish,
	output [31:0]inst_reg_wb
);
///////////wire信号////////
wire [5:0]io_sram0_addr;
wire io_sram0_cen;
wire io_sram0_wen;
wire [127:0]io_sram0_wmask;
wire [127:0] io_sram0_wdata;
wire [127:0] io_sram0_rdata;

wire [5:0] io_sram1_addr;
wire io_sram1_cen;
wire io_sram1_wen;
wire [127:0]io_sram1_wmask;
wire [127:0] io_sram1_wdata;
wire [127:0] io_sram1_rdata;

wire [5:0] io_sram2_addr;
wire io_sram2_cen;
wire io_sram2_wen;
wire [127:0]io_sram2_wmask;
wire [127:0] io_sram2_wdata;
wire [127:0] io_sram2_rdata;

wire [5:0] io_sram3_addr;
wire io_sram3_cen;
wire io_sram3_wen;
wire [127:0]io_sram3_wmask;
wire [127:0] io_sram3_wdata;
wire [127:0] io_sram3_rdata;

wire[5:0] io_sram4_addr;
wire io_sram4_cen;
wire io_sram4_wen;
wire [127:0]io_sram4_wmask;
wire[127:0] io_sram4_wdata;
wire[127:0] io_sram4_rdata;

wire[5:0] io_sram5_addr;
wire io_sram5_cen;
wire io_sram5_wen;
wire [127:0]io_sram5_wmask;
wire[127:0] io_sram5_wdata;
wire[127:0] io_sram5_rdata;

wire[5:0] io_sram6_addr;
wire io_sram6_cen;
wire io_sram6_wen;
wire [127:0]io_sram6_wmask;
wire[127:0] io_sram6_wdata;
wire[127:0] io_sram6_rdata;

wire[5:0] io_sram7_addr;
wire io_sram7_cen;
wire io_sram7_wen;
wire [127:0]io_sram7_wmask;
wire[127:0] io_sram7_wdata;
wire[127:0] io_sram7_rdata;
ysyx_050533  ysyx_050533_0(
.clock(clock),
.reset(reset),
.inst(inst),
.cpupc(cpupc),
.ebreak(ebreak),
.not_have(not_have),
.dnpc(dnpc),
.inst_finish(inst_finish),
.mem_finish(mem_finish),
.inst_update(inst_update),
.dnpc_reg_wb(dnpc_reg_wb),
.cpupc_reg_wb(cpupc_reg_wb),
.cpupc_reg_finish(cpupc_reg_finish),
.inst_reg_wb(inst_reg_wb),
.io_sram0_addr(io_sram0_addr),
.io_sram0_cen(io_sram0_cen),
.io_sram0_wen(io_sram0_wen),
.io_sram0_wmask(io_sram0_wmask),
.io_sram0_wdata(io_sram0_wdata),
.io_sram0_rdata(io_sram0_rdata),

.io_sram1_addr(io_sram1_addr),
.io_sram1_cen(io_sram1_cen),
.io_sram1_wen(io_sram1_wen),
.io_sram1_wmask(io_sram1_wmask),
.io_sram1_wdata(io_sram1_wdata),
.io_sram1_rdata(io_sram1_rdata),

.io_sram2_addr(io_sram2_addr),
.io_sram2_cen(io_sram2_cen),
.io_sram2_wen(io_sram2_wen),
.io_sram2_wmask(io_sram2_wmask),
.io_sram2_wdata(io_sram2_wdata),
.io_sram2_rdata(io_sram2_rdata),

.io_sram3_addr(io_sram3_addr),
.io_sram3_cen(io_sram3_cen),
.io_sram3_wen(io_sram3_wen),
.io_sram3_wmask(io_sram3_wmask),
.io_sram3_wdata(io_sram3_wdata),
.io_sram3_rdata(io_sram3_rdata),

.io_sram4_addr(io_sram4_addr),
.io_sram4_cen(io_sram4_cen),
.io_sram4_wen(io_sram4_wen),
.io_sram4_wmask(io_sram4_wmask),
.io_sram4_wdata(io_sram4_wdata),
.io_sram4_rdata(io_sram4_rdata),

.io_sram5_addr(io_sram5_addr),
.io_sram5_cen(io_sram5_cen),
.io_sram5_wen(io_sram5_wen),
.io_sram5_wmask(io_sram5_wmask),
.io_sram5_wdata(io_sram5_wdata),
.io_sram5_rdata(io_sram5_rdata),

.io_sram6_addr(io_sram6_addr),
.io_sram6_cen(io_sram6_cen),
.io_sram6_wen(io_sram6_wen),
.io_sram6_wmask(io_sram6_wmask),
.io_sram6_wdata(io_sram6_wdata),
.io_sram6_rdata(io_sram6_rdata),

.io_sram7_addr(io_sram7_addr),
.io_sram7_cen(io_sram7_cen),
.io_sram7_wen(io_sram7_wen),
.io_sram7_wmask(io_sram7_wmask),
.io_sram7_wdata(io_sram7_wdata),
.io_sram7_rdata(io_sram7_rdata)
);

 ysyx_050533_sram sram_0(
.clock(clock),
.io_sram0_addr(io_sram0_addr),
.io_sram0_cen(~io_sram0_cen),
.io_sram0_wen(~io_sram0_wen),
.io_sram0_wmask(~io_sram0_wmask),
.io_sram0_wdata(io_sram0_wdata),
.io_sram0_rdata(io_sram0_rdata),

.io_sram1_addr(io_sram1_addr),
.io_sram1_cen(~io_sram1_cen),
.io_sram1_wen(~io_sram1_wen),
.io_sram1_wmask(~io_sram1_wmask),
.io_sram1_wdata(io_sram1_wdata),
.io_sram1_rdata(io_sram1_rdata),

.io_sram2_addr(io_sram2_addr),
.io_sram2_cen(~io_sram2_cen),
.io_sram2_wen(~io_sram2_wen),
.io_sram2_wmask(~io_sram2_wmask),
.io_sram2_wdata(io_sram2_wdata),
.io_sram2_rdata(io_sram2_rdata),

.io_sram3_addr(io_sram3_addr),
.io_sram3_cen(~io_sram3_cen),
.io_sram3_wen(~io_sram3_wen),
.io_sram3_wmask(~io_sram3_wmask),
.io_sram3_wdata(io_sram3_wdata),
.io_sram3_rdata(io_sram3_rdata),

.io_sram4_addr(io_sram4_addr),
.io_sram4_cen(~io_sram4_cen),
.io_sram4_wen(~io_sram4_wen),
.io_sram4_wmask(~io_sram4_wmask),
.io_sram4_wdata(io_sram4_wdata),
.io_sram4_rdata(io_sram4_rdata),

.io_sram5_addr(io_sram5_addr),
.io_sram5_cen(~io_sram5_cen),
.io_sram5_wen(~io_sram5_wen),
.io_sram5_wmask(~io_sram5_wmask),
.io_sram5_wdata(io_sram5_wdata),
.io_sram5_rdata(io_sram5_rdata),

.io_sram6_addr(io_sram6_addr),
.io_sram6_cen(~io_sram6_cen),
.io_sram6_wen(~io_sram6_wen),
.io_sram6_wmask(~io_sram6_wmask),
.io_sram6_wdata(io_sram6_wdata),
.io_sram6_rdata(io_sram6_rdata),

.io_sram7_addr(io_sram7_addr),
.io_sram7_cen(~io_sram7_cen),
.io_sram7_wen(~io_sram7_wen),
.io_sram7_wmask(~io_sram7_wmask),
.io_sram7_wdata(io_sram7_wdata),
.io_sram7_rdata(io_sram7_rdata)
);

endmodule
module ysyx_050533_sram(
	input clock,
	input [5:0]io_sram0_addr,
  input io_sram0_cen,
	input io_sram0_wen,
	input [127:0]io_sram0_wmask,
	input[127:0] io_sram0_wdata,
	output[127:0] io_sram0_rdata,

	input[5:0] io_sram1_addr,
	input io_sram1_cen,
	input io_sram1_wen,
	input [127:0]io_sram1_wmask,
	input[127:0] io_sram1_wdata,
	output[127:0] io_sram1_rdata,

	input[5:0] io_sram2_addr,
	input io_sram2_cen,
	input io_sram2_wen,
	input [127:0]io_sram2_wmask,
	input[127:0] io_sram2_wdata,
	output[127:0] io_sram2_rdata,

	input[5:0] io_sram3_addr,
	input io_sram3_cen,
	input io_sram3_wen,
	input [127:0]io_sram3_wmask,
	input[127:0] io_sram3_wdata,
	output[127:0] io_sram3_rdata,

	input[5:0] io_sram4_addr,
	input io_sram4_cen,
	input io_sram4_wen,
	input [127:0]io_sram4_wmask,
	input[127:0] io_sram4_wdata,
	output[127:0] io_sram4_rdata,

	input[5:0] io_sram5_addr,
	input io_sram5_cen,
	input io_sram5_wen,
	input [127:0]io_sram5_wmask,
	input[127:0] io_sram5_wdata,
	output[127:0] io_sram5_rdata,

	input[5:0] io_sram6_addr,
	input io_sram6_cen,
	input io_sram6_wen,
	input [127:0]io_sram6_wmask,
	input[127:0] io_sram6_wdata,
	output[127:0] io_sram6_rdata,

	input[5:0] io_sram7_addr,
	input io_sram7_cen,
	input io_sram7_wen,
	input [127:0]io_sram7_wmask,
	input[127:0] io_sram7_wdata,
	output[127:0] io_sram7_rdata
);
ysyx_050533_S011HD1P_X32Y2D128_BW sram_0(
.Q(io_sram0_rdata),
.CLK(clock),
.CEN(io_sram0_cen),
.WEN(io_sram0_wen),
.BWEN(io_sram0_wmask),
.A(io_sram0_addr),
.D(io_sram0_wdata)
);
ysyx_050533_S011HD1P_X32Y2D128_BW sram_1(
.Q(io_sram1_rdata),
.CLK(clock),
.CEN(io_sram1_cen),
.WEN(io_sram1_wen),
.BWEN(io_sram1_wmask),
.A(io_sram1_addr),
.D(io_sram1_wdata)
);
ysyx_050533_S011HD1P_X32Y2D128_BW sram_2(
.Q(io_sram2_rdata),
.CLK(clock),
.CEN(io_sram2_cen),
.WEN(io_sram2_wen),
.BWEN(io_sram2_wmask),
.A(io_sram2_addr),
.D(io_sram2_wdata)
);
ysyx_050533_S011HD1P_X32Y2D128_BW sram_3(
.Q(io_sram3_rdata),
.CLK(clock),
.CEN(io_sram3_cen),
.WEN(io_sram3_wen),
.BWEN(io_sram3_wmask),
.A(io_sram3_addr),
.D(io_sram3_wdata)
);

ysyx_050533_S011HD1P_X32Y2D128_BW sram_4(
.Q(io_sram4_rdata),
.CLK(clock),
.CEN(io_sram4_cen),
.WEN(io_sram4_wen),
.BWEN(io_sram4_wmask),
.A(io_sram4_addr),
.D(io_sram4_wdata)
);
ysyx_050533_S011HD1P_X32Y2D128_BW sram_5(
.Q(io_sram5_rdata),
.CLK(clock),
.CEN(io_sram5_cen),
.WEN(io_sram5_wen),
.BWEN(io_sram5_wmask),
.A(io_sram5_addr),
.D(io_sram5_wdata)
);
ysyx_050533_S011HD1P_X32Y2D128_BW sram_6(
.Q(io_sram6_rdata),
.CLK(clock),
.CEN(io_sram6_cen),
.WEN(io_sram6_wen),
.BWEN(io_sram6_wmask),
.A(io_sram6_addr),
.D(io_sram6_wdata)
);
ysyx_050533_S011HD1P_X32Y2D128_BW sram_7(
.Q(io_sram7_rdata),
.CLK(clock),
.CEN(io_sram7_cen),
.WEN(io_sram7_wen),
.BWEN(io_sram7_wmask),
.A(io_sram7_addr),
.D(io_sram7_wdata)
);
endmodule
module ysyx_050533_S011HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : {4{$random}};
end

wire [Wen_Width-1:0]ram_0 ;
assign ram_0=ram[0];
endmodule

