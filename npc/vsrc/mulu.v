`define WIDTH 66
`define COMPUTE_WIDTH 64
module sel_gen(input [2:0]src,output [3:0]sel);
	wire y_add,y,y_sub;
	wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
	
	assign {y_add,y,y_sub} = src;
	
	assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
	assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
	assign sel_double_negative =  y_add & ~y & ~y_sub;
	assign sel_double_positive = ~y_add &  y &  y_sub;

	assign sel={sel_negative,sel_positive,sel_double_negative,sel_double_positive};
endmodule

module res_sel(input [3:0]sel,input [1:0]src,output p);
	wire x,x_sub;
	wire sel_negative,sel_double_negative,sel_positive,sel_double_positive;
	assign {sel_negative,sel_positive,sel_double_negative,sel_double_positive}=sel;
	assign {x,x_sub}=src;

	assign p = ~(~(sel_negative & ~x) & ~(sel_double_negative & ~x_sub) 
           & ~(sel_positive & x ) & ~(sel_double_positive &  x_sub));
endmodule

module mul_partial(//部分积生成模块
	input  [2*`WIDTH-1:0]x_src,
	input  [2:0]y_src,
	output [2*`WIDTH-1:0]p_result,
	output cout
);
	wire [3:0]sel;
	wire sel_negative=sel[3];
	wire sel_double_negative=sel[1];

	assign cout=sel_negative||sel_double_negative;

	sel_gen sel_gen_num0(.src(y_src),.sel(sel));
	res_sel res_sel_num0(.sel(sel),.src({x_src[0],1'b0}),.p(p_result[0]));
	genvar i;
	generate
		for(i=1;i<`WIDTH*2;i=i+1)begin
			res_sel res_sel_num(.sel(sel),.src(x_src[i:i-1]),.p(p_result[i]));
		end
	endgenerate
endmodule

module mulu(input clk,input rst, input[`COMPUTE_WIDTH:0]multiplicand,input [`COMPUTE_WIDTH:0]multiplier,input mul_valid,output reg mul_ready,output reg out_valid,/*output reg [`WIDTH*2-1:0]result,*/output [63:0]result);
	reg [`WIDTH*2-1:0]tmp_result,multiplicand_r;
	reg [`WIDTH:0]multiplier_r;
	reg running_r;
	wire mul_prepare,done;
	wire [`WIDTH*2-1:0]p_result;
	reg [6:0]cnt;
//cnt
	always@(posedge clk)begin
		if(rst|out_valid)
			cnt<='d0;
		else if(running_r)
			cnt<=cnt+1'b1;
	end
	assign mul_prepare=mul_valid&mul_ready;
 //wheather running
 always@(posedge clk)begin
	 if(rst)begin
		 running_r<='b0;
	 end
	 else if(mul_prepare)
		 running_r<='b1;
	 else if(done)
		 running_r<='b0;
 end
 //valid and ready
 always@(posedge clk)begin
	 if(rst)
		 mul_ready<='b1;
	 else if(mul_prepare)
		 mul_ready<='b0;
	 else if(out_valid)
		 mul_ready<='b1;
 end
 always@(posedge clk)begin
	 if(rst)
		 out_valid<=1'b0;
	 else if(out_valid)
		 out_valid<='b0;
	 else if(done)
		 out_valid<='b1;
 end
 always@(posedge clk)begin
	 if(rst)begin
		 multiplicand_r<=0;
		 multiplier_r<=0;
	 end
	 else if(mul_prepare)begin
		 multiplicand_r<={{`WIDTH{multiplicand[`COMPUTE_WIDTH]}},multiplicand[`COMPUTE_WIDTH],multiplicand};
		 multiplier_r<={multiplier[`COMPUTE_WIDTH],multiplier,1'b0};
	 end
	 else if(running_r)begin
		 multiplicand_r<={multiplicand_r[`WIDTH*2-3:0],2'b0};
		 multiplier_r<={2'b0,multiplier_r[`WIDTH:2]};
	 end
 end
	assign done=running_r&&(cnt==7'h20||multiplier_r[`WIDTH:0]=={{`WIDTH{1'b0}},1'b0});
  wire partial_cout;
	mul_partial partial(.x_src(multiplicand_r),.y_src(multiplier_r[2:0]),.p_result(p_result),.cout(partial_cout));

	wire [`WIDTH*2-1:0]adder_result;
	wire adder_cout;
	assign {adder_cout,adder_result}=p_result+tmp_result+{{`WIDTH*2-1{1'b0}},partial_cout};

	always@(posedge clk)begin
		if(mul_prepare)begin
			tmp_result<={`WIDTH*2{1'b0}};
		end
		else if(running_r)begin
			tmp_result<=adder_result;
		end
	end
	assign result=tmp_result[63:0];
endmodule

