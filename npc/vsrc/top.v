//单周期cpu总模块
module top(
  input clk,
  input rst,
  input [31:0]inst,
  //input [31:0] in,
  output [31:0] cpupc
);
  //reg [5:0]count_c;
	wire [31:0]dnpc;
  // 位宽为1比特, 复位值为1'b1, 写使能一直有效
  //Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);
  // 位宽为3比特, 复位值为3'b0, 写使能为out[0]
  //Reg #(3, 3'b0) i1 (clk, rst, in[3:1], out[3:1], out[0]);
  //pc test
  pc i0(clk, rst, dnpc,cpupc);
  decode_exec de(clk,inst,cpupc,dnpc);
 /* always @ (posedge clk) begin*/
		/*if (rst) begin*/
			/*[>AUTORESET<]*/
			/*// Beginning of autoreset for uninitialized flops*/
			/*count_c <= 6'b0;*/
			/*// End of automatics*/
		/*end*/
		/*else begin*/
			/*count_c <= count_c + 1;*/
			/*if (count_c >= 20) begin*/
				/*// This write is a magic value the Makefile uses to make sure the*/
				/*// test completes successfully.*/
				/*$write("*-* All Finished *-*\n");*/
				/*$finish;*/
			/*end*/
		/*end*/
	/*end*/
	/////////////////////////////开启波形图/////////////////////
 /* initial begin*/
		/*if ($test$plusargs("trace") != 0) begin*/
			/*$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);*/
			/*$dumpfile("logs/vlt_dump.vcd");*/
			/*$dumpvars();*/
		/*end*/
		/*$display("[%0t] Model running...\n", $time);*/
	/*end*/
	//////////////////////////////////////////////////////////

	endmodule

