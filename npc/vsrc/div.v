module div(
  input                          clk           ,
  input                          reset         ,
  input  [63:0] x,
  input  [63:0] y,
  input         div_valid,
  input         div_signed,
  output reg    div_ready,
  output reg    out_valid,
  output [63:0] s,
  output [63:0] r

);
reg [127:0] dividend;
reg [63:0] divisor,qutient,remain;
reg running_r,divisor_s,dividend_s;
reg [6:0] count;
wire done,div_prepare;

//state transition
assign div_prepare = div_ready && div_valid;
assign done = running_r &&  count == 7'h40;
always @(posedge clk) begin
    if (reset  || out_valid) begin
        div_ready <= 1'b1;
    end
    else if (div_prepare) begin
        div_ready <= 1'b0;
    end 
end

always @(posedge clk) begin
    if (reset || done ) begin
        running_r <= 1'b0;
    end
    else if (div_prepare) begin
        running_r <= 1'b1;
    end 
end

always @(posedge clk) begin
    if (reset || out_valid ) begin
        out_valid <= 1'b0;
    end
    else if (done) begin
        out_valid <= 1'b1;
    end 
end
//signed bit
always @(posedge clk) begin
    if (reset) begin
        divisor_s <= 1'b0;
        dividend_s <= 1'b0;        
    end
    else if (div_prepare) begin
        divisor_s <= div_signed & y[63];
        dividend_s <= div_signed & x[63];
    end    
end
//iterative operation and correct
wire sub_cout;
wire [64:0] sub_result;
wire [63:0] qutient_correct,remain_correct;
wire [63:0] x_adder_result,y_adder_result,x_abs,y_abs;
wire [63:0] x_adder_src1,y_adder_src1;

assign x_adder_src1 = done ? dividend[127:64] : x;
assign y_adder_src1 = done ? qutient : y;


//signed <==> abs
adder_32 x_adder(
    .src1  (~x_adder_src1),
    .src2  ({64'b1}),
    .cin    (1'b0),
    .cout   (),
    .result (x_adder_result)
);
adder_32 y_adder(
    .src1  (~y_adder_src1),
    .src2  ({64'b1}),
    .cin    (1'b0),
    .cout   (),
    .result (y_adder_result)
);

// sub of iteration
adder_33 suber(
    .src1  (dividend[127:63]),
    .src2  ({1'b1,~divisor}),
    .cin    (1'b1),
    .cout   (sub_cout),
    .result (sub_result)
);
// Choose the abs of dividend and divisor
assign x_abs = div_signed & x[63] ? x_adder_result : x ;
assign y_abs = div_signed & y[63] ? y_adder_result : y ;

//Update dividend ,divisor and qutient
always @(posedge clk) begin
    if (div_prepare) begin
        dividend <= {64'b0,x_abs};
        divisor <= y_abs;
    end
    //iterate and shift left  << 1
    else if (running_r ) begin
       dividend <= sub_cout ? {sub_result[63:0],dividend[62:0],1'b0} : {dividend[126:0],1'b0};
    end
 
    
end
// counter
always @(posedge clk) begin
    if (reset || out_valid ) begin
        count <= 7'b0;
    end
    else if (running_r) begin
        count <= count +1'b1;
    end
    
end

//Correct result
wire qutient_need_correct,remain_need_correct;

assign remain_correct  = x_adder_result;
assign qutient_correct = y_adder_result;
assign qutient_need_correct = ~dividend_s & divisor_s | dividend_s & ~divisor_s;
assign remain_need_correct  = dividend_s;

always @(posedge clk ) begin
    if (done) begin
        remain  <= remain_need_correct  ? remain_correct  : dividend[127:64];
    end
   if (done) begin
        qutient <= qutient_need_correct ? qutient_correct : qutient;
    end 
    else if (running_r) begin
        qutient <= {qutient[62:0],sub_cout};
    end    
end
// finally result
assign s = qutient;
assign r = remain;



endmodule



module adder_32 (
    // 32-bit adder
    input [63:0] src1,
    input [63:0] src2,
    input        cin,
    output       cout,
    output [63:0] result
);
assign {cout, result} = src1 + src2 + {63'b0,cin};

endmodule
module adder_33 (
    // 33-bit adder
    input [64:0] src1,
    input [64:0] src2,
    input        cin,
    output       cout,
    output [64:0] result
);
assign {cout, result} = src1 + src2 + {64'b0,cin};
endmodule
