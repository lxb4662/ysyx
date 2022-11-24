
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/11 18:32:48
// Design Name: 
// Module Name: mul
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module mul(
    input           clk,
    input           rst_n,
    input           mul_valid,
    input           flush,
    input           mulw,
    input [1:0]     mul_signed,
    input [63:0]    multiplicand,
    input [63:0]    multiplier,
    output          out_ready,
    output          out_valid,
    output [63:0]   result_hi,
    output [63:0]   result_lo

    );

    reg [3:0]   fsm;
    reg [3:0]   fsm_next;

    assign out_valid = fsm==4'd8;
    assign out_ready = fsm==4'b0;
    always@(*)begin
        case(fsm)
            4'd0: fsm_next = mul_valid ? 4'd1:4'd0;
            4'd1: fsm_next = 4'd2;
            4'd2: fsm_next = 4'd3;
            4'd3: fsm_next = 4'd4;
            4'd4: fsm_next = 4'd5;
            4'd5: fsm_next = 4'd6;
            4'd6: fsm_next = 4'd7;
            4'd7: fsm_next = 4'd8;
            4'd8: fsm_next = 4'd0;
            default: fsm_next = 4'd0;
        endcase
    end


    always@(posedge clk)begin
        if((!rst_n)|flush)begin
            fsm <= 4'b0;
        end
        else begin
            fsm <= fsm_next;
        end
    end

    wire [131:0] x_0;
    wire [131:0] x_1;
    wire [131:0] x_2;
    wire [131:0] x_3;
    wire [131:0] x_4;
    wire [131:0] x_5;
    wire [131:0] x_6;
    wire [131:0] x_7;
    wire [131:0] x_8;
    wire [131:0] x_9;
    wire [131:0] x_10;
    wire [131:0] x_11;
    wire [131:0] x_12;
    wire [131:0] x_13;
    wire [131:0] x_14;
    wire [131:0] x_15;
    wire [131:0] x_16;
    wire [131:0] x_17;
    wire [131:0] x_18;
    wire [131:0] x_19;
    wire [131:0] x_20;
    wire [131:0] x_21;
    wire [131:0] x_22;
    wire [131:0] x_23;
    wire [131:0] x_24;
    wire [131:0] x_25;
    wire [131:0] x_26;
    wire [131:0] x_27;
    wire [131:0] x_28;
    wire [131:0] x_29;
    wire [131:0] x_30;
    wire [131:0] x_31;
    wire [131:0] x_32;
    
    wire [32:0]c_0;

    reg [131:0] in1;
    reg [66:0]  in2;

    wire [131:0] in1_w;
    wire [66:0] in2_w;

    assign in1_w = {{100{multiplicand[31]}},multiplicand[31:0]};
    assign in2_w = {{34{multiplier[31]}},multiplier[31:0],1'b0};

    always@(*)begin
        case(mul_signed)
            2'b00: in1 = {68'b0,multiplicand};
            2'b01: in1 = 132'b0;
            2'b10: in1 = {{68{multiplicand[63]}},multiplicand};
            2'b11: in1 = {{68{multiplicand[63]}},multiplicand};
        endcase
    end

    always@(*)begin
        case(mul_signed)
            2'b00: in2 = {2'b0,multiplier,1'b0};
            2'b01: in2 = 67'b0;
            2'b10: in2 = {2'b0,multiplier,1'b0};
            2'b11: in2 = {{2{multiplier[63]}},multiplier,1'b0};
        endcase
    end

    wire [131:0] booth_in1;
    wire [66:0]  booth_in2;

    assign booth_in1 = mulw?in1_w:in1;
    assign booth_in2 = mulw?in2_w:in2;

    booth b1(
    .a(booth_in1)
    ,.b(booth_in2)
    ,.c(c_0)
    ,. x_0(x_0)
    ,. x_1(x_1)
    ,. x_2(x_2)
    ,. x_3(x_3)
    ,. x_4(x_4)
    ,. x_5(x_5)
    ,. x_6(x_6)
    ,. x_7(x_7)
    ,. x_8(x_8)
    ,. x_9(x_9)
    ,. x_10(x_10)
    ,. x_11(x_11)
    ,. x_12(x_12)
    ,. x_13(x_13)
    ,. x_14(x_14)
    ,. x_15(x_15)
    ,. x_16(x_16)
    ,. x_17(x_17)
    ,. x_18(x_18)
    ,. x_19(x_19)
    ,. x_20(x_20)
    ,. x_21(x_21)
    ,. x_22(x_22)
    ,. x_23(x_23)
    ,. x_24(x_24)
    ,. x_25(x_25)
    ,. x_26(x_26)
    ,. x_27(x_27)
    ,. x_28(x_28)
    ,. x_29(x_29)
    ,. x_30(x_30)
    ,. x_31(x_31)
    ,. x_32(x_32)
    );

    wire [131:0]    s;
    wire [183:0]     cc;

    wallace_tree w1(
    .clk(clk)
    ,.rst_n(rst_n)
    ,.c(cc)
    , .s(s)
    ,.c_last_bit_0(c_0)
    ,.x_0(x_0)
    ,.x_1(x_1)
    ,. x_2(x_2)
    ,. x_3(x_3)
    ,. x_4(x_4)
    ,. x_5(x_5)
    ,. x_6(x_6)
    ,. x_7(x_7)
    ,. x_8(x_8)
    ,. x_9(x_9)
    ,. x_10(x_10)
    ,. x_11(x_11)
    ,. x_12(x_12)
    ,. x_13(x_13)
    ,. x_14(x_14)
    ,. x_15(x_15)
    ,. x_16(x_16)
    ,. x_17(x_17)
    ,. x_18(x_18)
    ,. x_19(x_19)
    ,. x_20(x_20)
    ,. x_21(x_21)
    ,. x_22(x_22)
    ,. x_23(x_23)
    ,. x_24(x_24)
    ,. x_25(x_25)
    ,. x_26(x_26)
    ,. x_27(x_27)
    ,. x_28(x_28)
    ,. x_29(x_29)
    ,. x_30(x_30)
    ,. x_31(x_31)
    ,. x_32(x_32)
    );
    wire f_c_out;
    assign {f_c_out,result_hi,result_lo}= {cc,c_0[31]} +s + c_0[32];

    //ysyx_22050518_add add(.in1(in0),.in2(add_in2),.c_in(alu_op[4]),.out(add_out));


endmodule

