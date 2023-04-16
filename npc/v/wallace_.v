`timescale 1ps / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/11/10 21:06:40
// Design Name: 
// Module Name: wallace_tree
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


module ysyx_22050518_wallace_tree_(
    input           clk,
    input           rst_n,
    input [32:0]    a,
    input [31:0]    c_in,
    output [31:0]   c_out,
    output          s,
    output          c
    );

    wire [10:0] s_1;
    wire [10:0] c_1;
    wire [10:0] c_1_in;
    assign c_1_in = c_in[10:0];
    ysyx_22050518_full_adder_1bit adder1_1(.a(a[0]),.b(a[1]),.c_in(a[2]),.s(s_1[0]),.c_out(c_1[0]));
    ysyx_22050518_full_adder_1bit adder1_2(.a(a[3]),.b(a[4]),.c_in(a[5]),.s(s_1[1]),.c_out(c_1[1]));
    ysyx_22050518_full_adder_1bit adder1_3(.a(a[6]),.b(a[7]),.c_in(a[8]),.s(s_1[2]),.c_out(c_1[2]));
    ysyx_22050518_full_adder_1bit adder1_4(.a(a[9]),.b(a[10]),.c_in(a[11]),.s(s_1[3]),.c_out(c_1[3]));
    ysyx_22050518_full_adder_1bit adder1_5(.a(a[12]),.b(a[13]),.c_in(a[14]),.s(s_1[4]),.c_out(c_1[4]));
    ysyx_22050518_full_adder_1bit adder1_6(.a(a[15]),.b(a[16]),.c_in(a[17]),.s(s_1[5]),.c_out(c_1[5]));
    ysyx_22050518_full_adder_1bit adder1_7(.a(a[18]),.b(a[19]),.c_in(a[20]),.s(s_1[6]),.c_out(c_1[6]));
    ysyx_22050518_full_adder_1bit adder1_8(.a(a[21]),.b(a[22]),.c_in(a[23]),.s(s_1[7]),.c_out(c_1[7]));
    ysyx_22050518_full_adder_1bit adder1_9(.a(a[24]),.b(a[25]),.c_in(a[26]),.s(s_1[8]),.c_out(c_1[8]));
    ysyx_22050518_full_adder_1bit adder1_10(.a(a[27]),.b(a[28]),.c_in(a[29]),.s(s_1[9]),.c_out(c_1[9]));
    ysyx_22050518_full_adder_1bit adder1_11(.a(a[30]),.b(a[31]),.c_in(a[32]),.s(s_1[10]),.c_out(c_1[10]));

    reg [10:0]  s_1_r;
    reg [10:0]  c_1_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_1_r <= 11'b0;
            c_1_r <= 11'b0;
        end
        else begin
            s_1_r <= s_1;
            c_1_r <= c_1;
        end
    end
        
    wire [6:0]  s_2;
    wire [6:0]  c_2;
    wire [6:0] c_2_in;
    assign c_2_in = c_in[17:11];

    ysyx_22050518_full_adder_1bit adder2_1(.a(s_1_r[0]),.b(s_1_r[1]),.c_in(s_1_r[2]),.s(s_2[0]),.c_out(c_2[0]));
    ysyx_22050518_full_adder_1bit adder2_2(.a(s_1_r[3]),.b(s_1_r[4]),.c_in(s_1_r[5]),.s(s_2[1]),.c_out(c_2[1]));
    ysyx_22050518_full_adder_1bit adder2_3(.a(s_1_r[6]),.b(s_1_r[7]),.c_in(s_1_r[8]),.s(s_2[2]),.c_out(c_2[2]));
    ysyx_22050518_full_adder_1bit adder2_4(.a(s_1_r[9]),.b(s_1_r[10]),.c_in(c_1_in[0]),.s(s_2[3]),.c_out(c_2[3]));
    ysyx_22050518_full_adder_1bit adder2_5(.a(c_1_in[1]),.b(c_1_in[2]),.c_in(c_1_in[3]),.s(s_2[4]),.c_out(c_2[4]));
    ysyx_22050518_full_adder_1bit adder2_6(.a(c_1_in[4]),.b(c_1_in[5]),.c_in(c_1_in[6]),.s(s_2[5]),.c_out(c_2[5]));
    ysyx_22050518_full_adder_1bit adder2_7(.a(c_1_in[7]),.b(c_1_in[8]),.c_in(c_1_in[9]),.s(s_2[6]),.c_out(c_2[6]));
    //full_adder_1bit adder2_8(.a(),.b(1'b0),.c_in(1'b0),.s(s_2[7]),.c_out(c_2[6]));
            

    reg [6:0]  s_2_r;
    reg [6:0]  c_2_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_2_r <= 7'b0;
            c_2_r <= 7'b0;
        end
        else begin
            s_2_r <= s_2;
            c_2_r <= c_2;
        end
    end

        
    wire [4:0] s_3;
    wire [4:0] c_3;
    wire [4:0] c_3_in;
    assign c_3_in = c_in[22:18];

    ysyx_22050518_full_adder_1bit adder3_1(.a(s_2_r[0]),.b(s_2_r[1]),.c_in(s_2_r[2]),.s(s_3[0]),.c_out(c_3[0]));
    ysyx_22050518_full_adder_1bit adder3_2(.a(s_2_r[3]),.b(s_2_r[4]),.c_in(s_2_r[5]),.s(s_3[1]),.c_out(c_3[1]));
    ysyx_22050518_full_adder_1bit adder3_3(.a(s_2_r[6]),.b(c_1_in[10]),.c_in(c_2_in[0]),.s(s_3[2]),.c_out(c_3[2]));
    ysyx_22050518_full_adder_1bit adder3_4(.a(c_2_in[1]),.b(c_2_in[2]),.c_in(c_2_in[3]),.s(s_3[3]),.c_out(c_3[3]));
    ysyx_22050518_full_adder_1bit adder3_5(.a(c_2_in[4]),.b(c_2_in[5]),.c_in(c_2_in[6]),.s(s_3[4]),.c_out(c_3[4]));
    //full_adder_1bit adder3_6(.a(c_2_in[8]),.b(c_1_in[10]),.c_in(1'b0),.s(s_3[5]),.c_out(c_3[5]));

    reg [4:0]  s_3_r;
    reg [4:0]  c_3_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_3_r <= 5'b0;
            c_3_r <= 5'b0;
        end
        else begin
            s_3_r <= s_3;
            c_3_r <= c_3;
        end
    end


    wire [2:0] s_4;
    wire [2:0] c_4;
    wire [2:0] c_4_in;
    assign c_4_in = c_in[25:23];
    ysyx_22050518_full_adder_1bit adder4_1(.a(s_3_r[0]),.b(s_3_r[1]),.c_in(s_3_r[2]),.s(s_4[0]),.c_out(c_4[0]));
    ysyx_22050518_full_adder_1bit adder4_2(.a(s_3_r[3]),.b(s_3_r[4]),.c_in(c_3_in[0]),.s(s_4[1]),.c_out(c_4[1]));
    ysyx_22050518_full_adder_1bit adder4_3(.a(c_3_in[1]),.b(c_3_in[2]),.c_in(c_3_in[3]),.s(s_4[2]),.c_out(c_4[2]));
    //full_adder_1bit adder4_4(.a(c_3_in[3]),.b(c_3_in[4]),.c_in(c_3_in[5]),.s(s_4[3]),.c_out(c_4[3]));


    reg [2:0]  s_4_r;
    reg [2:0]  c_4_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_4_r <= 3'b0;
            c_4_r <= 3'b0;
        end
        else begin
            s_4_r <= s_4;
            c_4_r <= c_4;
        end
    end



    wire [1:0] s_5;
    wire [1:0] c_5;
    wire [1:0] c_5_in;
    assign c_5_in = c_in[27:26];
    ysyx_22050518_full_adder_1bit adder5_1(.a(s_4_r[0]),.b(s_4_r[1]),.c_in(s_4_r[2]),.s(s_5[0]),.c_out(c_5[0]));
    ysyx_22050518_full_adder_1bit adder5_2(.a(c_4_in[0]),.b(c_4_in[1]),.c_in(c_3_in[4]),.s(s_5[1]),.c_out(c_5[1]));
    //full_adder_1bit adder5_3(.a(c_4_in[2]),.b(c_4_in[3]),.c_in(1'b0),.s(s_5[2]),.c_out(c_5[2]));



    reg [1:0]  s_5_r;
    reg [1:0]  c_5_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_5_r <= 2'b0;
            c_5_r <= 2'b0;
        end
        else begin
            s_5_r <= s_5;
            c_5_r <= c_5;
        end
    end


    wire   s_6;
    wire   c_6;
    wire   c_6_in;
    assign c_6_in = c_in[28];
    ysyx_22050518_full_adder_1bit adder6_1(.a(s_5_r[0]),.b(s_5_r[1]),.c_in(c_4_in[2]),.s(s_6),.c_out(c_6));
    //full_adder_1bit adder6_2(.a(c_5_in[1]),.b(c_3_in[4]),.c_in(1'b0),.s(s_6[1]),.c_out(c_6[1]));


    reg  s_6_r;
    reg  c_6_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_6_r <= 1'b0;
            c_6_r <= 1'b0;
        end
        else begin
            s_6_r <= s_6;
            c_6_r <= c_6;
        end
    end



    wire s_7;
    wire c_7;
    wire c_7_in;
    assign c_7_in = c_in[29];
    ysyx_22050518_full_adder_1bit adder7_1(.a(s_6_r),.b(c_5_in[0]),.c_in(c_5_in[1]),.s(s_7),.c_out(c_7));

    reg  s_7_r;
    reg  c_7_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_7_r <= 1'b0;
            c_7_r <= 1'b0;
        end
        else begin
            s_7_r <= s_7;
            c_7_r <= c_7;
        end
    end

    wire c_8;
    wire s_8;
    ysyx_22050518_full_adder_1bit adder8_1(.a(s_7_r),.b(c_6_in),.c_in(c_7_in),.s(s_8),.c_out(c_8));

    reg  s_8_r;
    reg  c_8_r;

    always@(posedge clk)begin
        if(!rst_n)begin
            s_8_r <= 1'b0;
            c_8_r <= 1'b0;
        end
        else begin
            s_8_r <= s_8;
            c_8_r <= c_8;
        end
    end

    assign c_out = {2'b0,c_7_r,c_6_r,c_5_r,c_4_r,c_3_r,c_2_r,c_1_r};
    assign s = s_8_r;
    assign c = c_8_r;
endmodule



