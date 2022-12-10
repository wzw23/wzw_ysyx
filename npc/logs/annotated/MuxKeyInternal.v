	// verilator_coverage annotation
	// 选择器模板内部实现
	module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
%000041	  output reg [DATA_LEN-1:0] out,
%000004	  input [KEY_LEN-1:0] key,
%000000	  input [DATA_LEN-1:0] default_out,
	  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
	);
	
	  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
	  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
%000010	  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
	  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];
	
	  generate
	    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
	      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
	      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
	      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
	    end
	  endgenerate
	
%000039	  reg [DATA_LEN-1 : 0] lut_out;
%000001	  reg hit;
	  integer i;
 000054	  always @(*) begin
 000027	    lut_out = 0;
 000027	    hit = 0;
 000027	    for (i = 0; i < NR_KEY; i = i + 1) begin
 000324	    verilator_coverage: (next point on previous line)

 000162	      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
 000162	      hit = hit | (key == key_list[i]);
	    end
%000000	    if (!HAS_DEFAULT) out = lut_out;
 000027	    verilator_coverage: (next point on previous line)

 000027	    else out = (hit ? lut_out : default_out);
	  end
	endmodule
	
	
	
	
	
	
