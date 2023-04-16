module ysyx_22050518_mux4t1_64(
    input [1:0] sel ,
    input [63:0]    in0,
    input [63:0]    in1,
    input [63:0]    in2,
    input [63:0]    in3,
    output reg [63:0]   out
);

always@(*)begin
    case(sel)
        2'd0: out = in0;
        2'd1: out = in1;
        2'd2: out = in2;
        2'd3: out = in3;
    endcase 
end
endmodule 
