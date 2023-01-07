module Alu(input [63:0]a, input [63:0]b,output [63:0]out,output [63:0]compare,output [63:0]ur,output signed [63:0]sr,output [63:0]ul,output [63:0]sl,output [63:0]yu,output [63:0]huo,output [63:0]yihuo,output [63:0]cheng,output [63:0]chu,output signed [63:0]scheng,output signed [63:0]schu,output signed [63:0]syu);
    assign out=a+b;
		assign compare={{63{1'b0}},(a>b)};
		
		assign ur=a>>b;
		assign sr=$signed(a)>>>b;

		assign ul=a<<b;
		assign sl=a<<<b;

		assign yu=a&b;
		assign huo=a|b;
		 
		assign yihuo=a^b;

		assign cheng=a*b;
		assign chu=a/b;

		assign scheng=$signed(a*b);
		assign schu=$signed(a/b);
		assign syu=$signed(a%b);

endmodule
