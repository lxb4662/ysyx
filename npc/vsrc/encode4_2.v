module encode4_2(
    input [3:0] in0,
    output reg [1:0] out0
);

    always@(*)begin
        case(in0)
            4'b0001: out0 = 2'd0;
            4'b0010: out0 = 2'd1;
            4'b0100: out0 = 2'd2;
            4'b1000: out0 = 2'd3;
            default: out0 = 2'b0;
        endcase

    end
endmodule 