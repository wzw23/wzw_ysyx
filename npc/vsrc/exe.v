module exe(input clk,input rst,input [63:0]imm,input [4:0]rs1,input[4:0]rs2,input[4:0]rd,input [2:0] sel_alu_src1,input [2:0] sel_alu_src2,input [11:0]alu_control,input rf_wen,input sel_rf_res,output [63:0]alu_result,output [63:0]ram_addr,output [63:0]src1);
	//wire [63:0]src1;
	wire [63:0]src2;

	reg [63:0]alu_src1;
	reg [63:0]alu_src2;
 /* MuxKey #(1,3,64) mux1(alu_src1,sel_alu_src1,{//alu_src1赋值*/
		/*3'b001,src1*/
		/*});*/
	always@(*)begin 
		case(sel_alu_src1)
			3'b001:alu_src1=src1;
		default:alu_src1=0;
		endcase
	end

	/*MuxKey #(2,3,64) mux2(alu_src2,sel_alu_src2,{//alu_src2赋值*/
		/*3'b001,src2,*/
		/*3'b010,imm*/
		/*});*/
	always@(*)begin
		case(sel_alu_src2)
			3'b001:alu_src2=src2;
			default:alu_src2=0;
		endcase
	end

	/*MuxKey #(1,1,64) mux3(wdata,sel_rf_res,{//alu_src2赋值*/
		/*1'b0,alu_result*/
		/*//1'b1,imm*/
		/*});*/

	reg [63:0]wdata;
	always@(*)begin
		case(sel_rf_res)
			1'b0:wdata=alu_result;
			1'b1:wdata=imm;
			default:wdata=0;
		endcase
	end

	RegisterFile2 #(5,64) r0 (clk,rst,rf_wen,wdata,rd,rs1,rs2,src1,src2);

	Alu2 alu2(alu_src1,alu_src2,alu_control,alu_result,ram_addr);
endmodule

