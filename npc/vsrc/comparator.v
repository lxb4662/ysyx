module comparator (
    input [63:0]    in1,
    input [63:0]    in2,

    output[63:0]    eq,
    output[63:0]    neq,
    output[63:0]    slt,
    output[63:0]    snlt,
    output[63:0]    uslt,
    output[63:0]    usnlt

);
assign eq       = (in1==in2)?64'b1:64'b0;
assign neq      = (eq==64'b1)?64'b0:64'b1;

assign uslt     = (in1<in2)?64'b1:64'b0;
assign usnlt    = (in1<in2)?64'b0:64'b1;

assign slt      = ($signed(in1)<$signed (in2))?64'b1:64'b0;

assign snlt     = (slt==64'b1)?64'b0:64'b1;

endmodule 