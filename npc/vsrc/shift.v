//shift.v
module shift(
    input [63:0]        in0,
    input [63:0]        in1,

    output [63:0]       logic_r,
    output [63:0]       logic_l,
    output [63:0]       arithmetic_r
    


);

wire [5:0]  shamt;

assign shamt = in1[5:0];







endmodule 
