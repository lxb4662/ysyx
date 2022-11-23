`timescale 1ns / 1ps
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


module wallace_tree_(
    input [32:0] a,
    input [31:0]c_in,
    output [31:0]c_out,
    output s,
    output c
    );

    wire [10:0] s_1;
    wire [10:0] c_1;
    wire [10:0] c_1_in;
    assign c_1_in = c_in[10:0];
    full_adder_1bit adder1_1(.a(a[0]),.b(a[1]),.c_in(a[2]),.s(s_1[0]),.c_out(c_1[0]));
    full_adder_1bit adder1_2(.a(a[3]),.b(a[4]),.c_in(a[5]),.s(s_1[1]),.c_out(c_1[1]));
    full_adder_1bit adder1_3(.a(a[6]),.b(a[7]),.c_in(a[8]),.s(s_1[2]),.c_out(c_1[2]));
    full_adder_1bit adder1_4(.a(a[9]),.b(a[10]),.c_in(a[11]),.s(s_1[3]),.c_out(c_1[3]));
    full_adder_1bit adder1_5(.a(a[12]),.b(a[13]),.c_in(a[14]),.s(s_1[4]),.c_out(c_1[4]));
    full_adder_1bit adder1_6(.a(a[15]),.b(a[16]),.c_in(a[17]),.s(s_1[5]),.c_out(c_1[5]));
    full_adder_1bit adder1_7(.a(a[18]),.b(a[19]),.c_in(a[20]),.s(s_1[6]),.c_out(c_1[6]));
    full_adder_1bit adder1_8(.a(a[21]),.b(a[22]),.c_in(a[23]),.s(s_1[7]),.c_out(c_1[7]));
    full_adder_1bit adder1_9(.a(a[24]),.b(a[25]),.c_in(a[26]),.s(s_1[8]),.c_out(c_1[8]));
    full_adder_1bit adder1_10(.a(a[27]),.b(a[28]),.c_in(a[29]),.s(s_1[9]),.c_out(c_1[9]));
    full_adder_1bit adder1_11(.a(a[30]),.b(a[31]),.c_in(a[32]),.s(s_1[10]),.c_out(c_1[10]));
        
    wire [6:0]  s_2;
    wire [6:0]  c_2;
    wire [6:0] c_2_in;
    assign c_2_in = c_in[17:11];

    full_adder_1bit adder2_1(.a(s_1[0]),.b(s_1[1]),.c_in(s_1[2]),.s(s_2[0]),.c_out(c_2[0]));
    full_adder_1bit adder2_2(.a(s_1[3]),.b(s_1[4]),.c_in(s_1[5]),.s(s_2[1]),.c_out(c_2[1]));
    full_adder_1bit adder2_3(.a(s_1[6]),.b(s_1[7]),.c_in(s_1[8]),.s(s_2[2]),.c_out(c_2[2]));
    full_adder_1bit adder2_4(.a(s_1[9]),.b(s_1[10]),.c_in(c_1_in[0]),.s(s_2[3]),.c_out(c_2[3]));
    full_adder_1bit adder2_5(.a(c_1_in[1]),.b(c_1_in[2]),.c_in(c_1_in[3]),.s(s_2[4]),.c_out(c_2[4]));
    full_adder_1bit adder2_6(.a(c_1_in[4]),.b(c_1_in[5]),.c_in(c_1_in[6]),.s(s_2[5]),.c_out(c_2[5]));
    full_adder_1bit adder2_7(.a(c_1_in[7]),.b(c_1_in[8]),.c_in(c_1_in[9]),.s(s_2[6]),.c_out(c_2[6]));
    //full_adder_1bit adder2_8(.a(),.b(1'b0),.c_in(1'b0),.s(s_2[7]),.c_out(c_2[6]));
            
    wire [4:0] s_3;
    wire [4:0] c_3;
    wire [4:0] c_3_in;
    assign c_3_in = c_in[22:18];

    full_adder_1bit adder3_1(.a(s_2[0]),.b(s_2[1]),.c_in(s_2[2]),.s(s_3[0]),.c_out(c_3[0]));
    full_adder_1bit adder3_2(.a(s_2[3]),.b(s_2[4]),.c_in(s_2[5]),.s(s_3[1]),.c_out(c_3[1]));
    full_adder_1bit adder3_3(.a(s_2[6]),.b(c_1_in[10]),.c_in(c_2_in[0]),.s(s_3[2]),.c_out(c_3[2]));
    full_adder_1bit adder3_4(.a(c_2_in[1]),.b(c_2_in[2]),.c_in(c_2_in[3]),.s(s_3[3]),.c_out(c_3[3]));
    full_adder_1bit adder3_5(.a(c_2_in[4]),.b(c_2_in[5]),.c_in(c_2_in[6]),.s(s_3[4]),.c_out(c_3[4]));
    //full_adder_1bit adder3_6(.a(c_2_in[8]),.b(c_1_in[10]),.c_in(1'b0),.s(s_3[5]),.c_out(c_3[5]));

    wire [2:0] s_4;
    wire [2:0] c_4;
    wire [2:0] c_4_in;
    assign c_4_in = c_in[25:23];
    full_adder_1bit adder4_1(.a(s_3[0]),.b(s_3[1]),.c_in(s_3[2]),.s(s_4[0]),.c_out(c_4[0]));
    full_adder_1bit adder4_2(.a(s_3[3]),.b(s_3[4]),.c_in(c_3_in[0]),.s(s_4[1]),.c_out(c_4[1]));
    full_adder_1bit adder4_3(.a(c_3_in[1]),.b(c_3_in[2]),.c_in(c_3_in[3]),.s(s_4[2]),.c_out(c_4[2]));
    //full_adder_1bit adder4_4(.a(c_3_in[3]),.b(c_3_in[4]),.c_in(c_3_in[5]),.s(s_4[3]),.c_out(c_4[3]));

    wire [1:0] s_5;
    wire [1:0] c_5;
    wire [1:0] c_5_in;
    assign c_5_in = c_in[27:26];
    full_adder_1bit adder5_1(.a(s_4[0]),.b(s_4[1]),.c_in(s_4[2]),.s(s_5[0]),.c_out(c_5[0]));
    full_adder_1bit adder5_2(.a(c_4_in[0]),.b(c_4_in[1]),.c_in(c_3_in[4]),.s(s_5[1]),.c_out(c_5[1]));
    //full_adder_1bit adder5_3(.a(c_4_in[2]),.b(c_4_in[3]),.c_in(1'b0),.s(s_5[2]),.c_out(c_5[2]));

    wire   s_6;
    wire   c_6;
    wire   c_6_in;
    assign c_6_in = c_in[28];
    full_adder_1bit adder6_1(.a(s_5[0]),.b(s_5[1]),.c_in(c_4_in[2]),.s(s_6),.c_out(c_6));
    //full_adder_1bit adder6_2(.a(c_5_in[1]),.b(c_3_in[4]),.c_in(1'b0),.s(s_6[1]),.c_out(c_6[1]));

    wire s_7;
    wire c_7;
    wire c_7_in;
    assign c_7_in = c_in[29];
    full_adder_1bit adder7_1(.a(s_6),.b(c_5_in[0]),.c_in(c_5_in[1]),.s(s_7),.c_out(c_7));

    wire c_8;
    wire s_8;
    full_adder_1bit adder8_1(.a(s_7),.b(c_6_in),.c_in(c_7_in),.s(s_8),.c_out(c_8));

    assign c_out = {c_7,c_6,c_5,c_4,c_3,c_2,c_1};
    assign s = s_8;
    assign c= c_8;
endmodule



