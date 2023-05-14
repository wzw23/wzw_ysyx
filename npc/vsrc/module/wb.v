module wb(input [63:0] r_data,input [63:0]alu_result,input [2:0]sel_rf_res,output [63:0]wdata,input [63:0]c_rdata);
	MuxKey #(3,3,64) mux3(wdata,sel_rf_res,{//alu_src2赋值
		3'b001,alu_result,
		3'b010,r_data,
		3'b100,c_rdata
		});
endmodule
