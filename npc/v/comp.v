module ysyx_22050518_comp(
    input [63:0]                in0,
    input [63:0]                in1,
    output [63:0]               slt,
    output [63:0]               sltu,
    output [63:0]               eq

    );
    wire [63:0] s;
    wire c_out;
    ysyx_22050518_add add1(
    .in1(in0)
    ,.in2(~in1)
    ,.c_in(1'b1)
    ,.c_out(c_out)
    ,.out(s)
    );

assign slt  = {63'b0,(in0[63]&~in1[63])|(~(in0[63]^in1[63]))&s[63]}; 
wire s_64;
assign s_64 = 1'b0^1'b1^c_out;
assign sltu = {63'b0,s_64}; 
assign eq = {63'b0,in0==in1};

endmodule