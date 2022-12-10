	// verilator_coverage annotation
	//单周期cpu总模块
	module top(
 000025	  input clk,
%000002	  input rst,
%000045	  input [31:0]inst,
	  //input [31:0] in,
 000044	  output [31:0] out
	);
 000023	  reg [3:0]count_c;
	  // 位宽为1比特, 复位值为1'b1, 写使能一直有效
	  //Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);
	  // 位宽为3比特, 复位值为3'b0, 写使能为out[0]
	  //Reg #(3, 3'b0) i1 (clk, rst, in[3:1], out[3:1], out[0]);
	  //pc test
	  pc i0(clk, rst, out);
	  decode_exec de(clk,inst);
 000024	  always @ (posedge clk) begin
%000002	      if (rst) begin
 000011	      verilator_coverage: (next point on previous line)

	         /*AUTORESET*/
	         // Beginning of autoreset for uninitialized flops
%000001	         count_c <= 4'b0;
	         // End of automatics
	      end
 000011	      else begin
 000011	         count_c <= count_c + 1;
%000002	         if (count_c >= 10) begin
 000010	         verilator_coverage: (next point on previous line)

	            // This write is a magic value the Makefile uses to make sure the
	            // test completes successfully.
%000001	            $write("*-* All Finished *-*\n");
%000001	            $finish;
	         end
	      end
	   end
%000002	initial begin
%000002	          if ($test$plusargs("trace") != 0) begin
%000000	          verilator_coverage: (next point on previous line)

%000001	              $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001	              $dumpfile("logs/vlt_dump.vcd");
%000001	              $dumpvars();
	          end
%000001	          $display("[%0t] Model running...\n", $time);
	 end
	
	endmodule
	
	
