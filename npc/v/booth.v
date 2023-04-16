module ysyx_22050518_booth(input clk,
input rst_n,
input [131:0]     a,
input [66:0]     b,
output  [127:0]   out,
output [32:0]c,
output [131:0] x_0,
output [131:0] x_1,
output [131:0] x_2,
output [131:0] x_3,
output [131:0] x_4,
output [131:0] x_5,
output [131:0] x_6,
output [131:0] x_7,
output [131:0] x_8,
output [131:0] x_9,
output [131:0] x_10,
output [131:0] x_11,
output [131:0] x_12,
output [131:0] x_13,
output [131:0] x_14,
output [131:0] x_15,
output [131:0] x_16,
output [131:0] x_17,
output [131:0] x_18,
output [131:0] x_19,
output [131:0] x_20,
output [131:0] x_21,
output [131:0] x_22,
output [131:0] x_23,
output [131:0] x_24,
output [131:0] x_25,
output [131:0] x_26,
output [131:0] x_27,
output [131:0] x_28,
output [131:0] x_29,
output [131:0] x_30,
output [131:0] x_31,
output [131:0] x_32
);

wire [131:0] _a;
 assign _a = ~a;
wire y0_i1;
wire y0_i;
wire y0_1i;
wire y1_i1;
wire y1_i;
wire y1_1i;
wire y2_i1;
wire y2_i;
wire y2_1i;
wire y3_i1;
wire y3_i;
wire y3_1i;
wire y4_i1;
wire y4_i;
wire y4_1i;
wire y5_i1;
wire y5_i;
wire y5_1i;
wire y6_i1;
wire y6_i;
wire y6_1i;
wire y7_i1;
wire y7_i;
wire y7_1i;
wire y8_i1;
wire y8_i;
wire y8_1i;
wire y9_i1;
wire y9_i;
wire y9_1i;
wire y10_i1;
wire y10_i;
wire y10_1i;
wire y11_i1;
wire y11_i;
wire y11_1i;
wire y12_i1;
wire y12_i;
wire y12_1i;
wire y13_i1;
wire y13_i;
wire y13_1i;
wire y14_i1;
wire y14_i;
wire y14_1i;
wire y15_i1;
wire y15_i;
wire y15_1i;
wire y16_i1;
wire y16_i;
wire y16_1i;
wire y17_i1;
wire y17_i;
wire y17_1i;
wire y18_i1;
wire y18_i;
wire y18_1i;
wire y19_i1;
wire y19_i;
wire y19_1i;
wire y20_i1;
wire y20_i;
wire y20_1i;
wire y21_i1;
wire y21_i;
wire y21_1i;
wire y22_i1;
wire y22_i;
wire y22_1i;
wire y23_i1;
wire y23_i;
wire y23_1i;
wire y24_i1;
wire y24_i;
wire y24_1i;
wire y25_i1;
wire y25_i;
wire y25_1i;
wire y26_i1;
wire y26_i;
wire y26_1i;
wire y27_i1;
wire y27_i;
wire y27_1i;
wire y28_i1;
wire y28_i;
wire y28_1i;
wire y29_i1;
wire y29_i;
wire y29_1i;
wire y30_i1;
wire y30_i;
wire y30_1i;
wire y31_i1;
wire y31_i;
wire y31_1i;
wire y32_i1;
wire y32_i;
wire y32_1i;
assign y0_i1=b[2];
assign y0_i=b[1];
assign y0_1i=b[0];
assign y1_i1=b[4];
assign y1_i=b[3];
assign y1_1i=b[2];
assign y2_i1=b[6];
assign y2_i=b[5];
assign y2_1i=b[4];
assign y3_i1=b[8];
assign y3_i=b[7];
assign y3_1i=b[6];
assign y4_i1=b[10];
assign y4_i=b[9];
assign y4_1i=b[8];
assign y5_i1=b[12];
assign y5_i=b[11];
assign y5_1i=b[10];
assign y6_i1=b[14];
assign y6_i=b[13];
assign y6_1i=b[12];
assign y7_i1=b[16];
assign y7_i=b[15];
assign y7_1i=b[14];
assign y8_i1=b[18];
assign y8_i=b[17];
assign y8_1i=b[16];
assign y9_i1=b[20];
assign y9_i=b[19];
assign y9_1i=b[18];
assign y10_i1=b[22];
assign y10_i=b[21];
assign y10_1i=b[20];
assign y11_i1=b[24];
assign y11_i=b[23];
assign y11_1i=b[22];
assign y12_i1=b[26];
assign y12_i=b[25];
assign y12_1i=b[24];
assign y13_i1=b[28];
assign y13_i=b[27];
assign y13_1i=b[26];
assign y14_i1=b[30];
assign y14_i=b[29];
assign y14_1i=b[28];
assign y15_i1=b[32];
assign y15_i=b[31];
assign y15_1i=b[30];
assign y16_i1=b[34];
assign y16_i=b[33];
assign y16_1i=b[32];
assign y17_i1=b[36];
assign y17_i=b[35];
assign y17_1i=b[34];
assign y18_i1=b[38];
assign y18_i=b[37];
assign y18_1i=b[36];
assign y19_i1=b[40];
assign y19_i=b[39];
assign y19_1i=b[38];
assign y20_i1=b[42];
assign y20_i=b[41];
assign y20_1i=b[40];
assign y21_i1=b[44];
assign y21_i=b[43];
assign y21_1i=b[42];
assign y22_i1=b[46];
assign y22_i=b[45];
assign y22_1i=b[44];
assign y23_i1=b[48];
assign y23_i=b[47];
assign y23_1i=b[46];
assign y24_i1=b[50];
assign y24_i=b[49];
assign y24_1i=b[48];
assign y25_i1=b[52];
assign y25_i=b[51];
assign y25_1i=b[50];
assign y26_i1=b[54];
assign y26_i=b[53];
assign y26_1i=b[52];
assign y27_i1=b[56];
assign y27_i=b[55];
assign y27_1i=b[54];
assign y28_i1=b[58];
assign y28_i=b[57];
assign y28_1i=b[56];
assign y29_i1=b[60];
assign y29_i=b[59];
assign y29_1i=b[58];
assign y30_i1=b[62];
assign y30_i=b[61];
assign y30_1i=b[60];
assign y31_i1=b[64];
assign y31_i=b[63];
assign y31_1i=b[62];
assign y32_i1=b[66];
assign y32_i=b[65];
assign y32_1i=b[64];
wire s0_sub_x;
wire s0_add_x;
wire s0_sub2_x;
wire s0_add2_x;
wire s1_sub_x;
wire s1_add_x;
wire s1_sub2_x;
wire s1_add2_x;
wire s2_sub_x;
wire s2_add_x;
wire s2_sub2_x;
wire s2_add2_x;
wire s3_sub_x;
wire s3_add_x;
wire s3_sub2_x;
wire s3_add2_x;
wire s4_sub_x;
wire s4_add_x;
wire s4_sub2_x;
wire s4_add2_x;
wire s5_sub_x;
wire s5_add_x;
wire s5_sub2_x;
wire s5_add2_x;
wire s6_sub_x;
wire s6_add_x;
wire s6_sub2_x;
wire s6_add2_x;
wire s7_sub_x;
wire s7_add_x;
wire s7_sub2_x;
wire s7_add2_x;
wire s8_sub_x;
wire s8_add_x;
wire s8_sub2_x;
wire s8_add2_x;
wire s9_sub_x;
wire s9_add_x;
wire s9_sub2_x;
wire s9_add2_x;
wire s10_sub_x;
wire s10_add_x;
wire s10_sub2_x;
wire s10_add2_x;
wire s11_sub_x;
wire s11_add_x;
wire s11_sub2_x;
wire s11_add2_x;
wire s12_sub_x;
wire s12_add_x;
wire s12_sub2_x;
wire s12_add2_x;
wire s13_sub_x;
wire s13_add_x;
wire s13_sub2_x;
wire s13_add2_x;
wire s14_sub_x;
wire s14_add_x;
wire s14_sub2_x;
wire s14_add2_x;
wire s15_sub_x;
wire s15_add_x;
wire s15_sub2_x;
wire s15_add2_x;
wire s16_sub_x;
wire s16_add_x;
wire s16_sub2_x;
wire s16_add2_x;
wire s17_sub_x;
wire s17_add_x;
wire s17_sub2_x;
wire s17_add2_x;
wire s18_sub_x;
wire s18_add_x;
wire s18_sub2_x;
wire s18_add2_x;
wire s19_sub_x;
wire s19_add_x;
wire s19_sub2_x;
wire s19_add2_x;
wire s20_sub_x;
wire s20_add_x;
wire s20_sub2_x;
wire s20_add2_x;
wire s21_sub_x;
wire s21_add_x;
wire s21_sub2_x;
wire s21_add2_x;
wire s22_sub_x;
wire s22_add_x;
wire s22_sub2_x;
wire s22_add2_x;
wire s23_sub_x;
wire s23_add_x;
wire s23_sub2_x;
wire s23_add2_x;
wire s24_sub_x;
wire s24_add_x;
wire s24_sub2_x;
wire s24_add2_x;
wire s25_sub_x;
wire s25_add_x;
wire s25_sub2_x;
wire s25_add2_x;
wire s26_sub_x;
wire s26_add_x;
wire s26_sub2_x;
wire s26_add2_x;
wire s27_sub_x;
wire s27_add_x;
wire s27_sub2_x;
wire s27_add2_x;
wire s28_sub_x;
wire s28_add_x;
wire s28_sub2_x;
wire s28_add2_x;
wire s29_sub_x;
wire s29_add_x;
wire s29_sub2_x;
wire s29_add2_x;
wire s30_sub_x;
wire s30_add_x;
wire s30_sub2_x;
wire s30_add2_x;
wire s31_sub_x;
wire s31_add_x;
wire s31_sub2_x;
wire s31_add2_x;
wire s32_sub_x;
wire s32_add_x;
wire s32_sub2_x;
wire s32_add2_x;
assign s0_sub_x = ~(~(y0_i1&y0_i&(~y0_1i))&~(y0_i1&(~y0_i)&y0_1i));
assign s0_add_x = ~(~((~y0_i1)&y0_i&(~y0_1i))&~((~y0_i1)&(~y0_i)&y0_1i));
assign s0_sub2_x = ~(~(y0_i1&(~y0_i)&(~y0_1i)));
assign s0_add2_x = ~(~((~y0_i1)&y0_i&y0_1i));
assign s1_sub_x = ~(~(y1_i1&y1_i&(~y1_1i))&~(y1_i1&(~y1_i)&y1_1i));
assign s1_add_x = ~(~((~y1_i1)&y1_i&(~y1_1i))&~((~y1_i1)&(~y1_i)&y1_1i));
assign s1_sub2_x = ~(~(y1_i1&(~y1_i)&(~y1_1i)));
assign s1_add2_x = ~(~((~y1_i1)&y1_i&y1_1i));
assign s2_sub_x = ~(~(y2_i1&y2_i&(~y2_1i))&~(y2_i1&(~y2_i)&y2_1i));
assign s2_add_x = ~(~((~y2_i1)&y2_i&(~y2_1i))&~((~y2_i1)&(~y2_i)&y2_1i));
assign s2_sub2_x = ~(~(y2_i1&(~y2_i)&(~y2_1i)));
assign s2_add2_x = ~(~((~y2_i1)&y2_i&y2_1i));
assign s3_sub_x = ~(~(y3_i1&y3_i&(~y3_1i))&~(y3_i1&(~y3_i)&y3_1i));
assign s3_add_x = ~(~((~y3_i1)&y3_i&(~y3_1i))&~((~y3_i1)&(~y3_i)&y3_1i));
assign s3_sub2_x = ~(~(y3_i1&(~y3_i)&(~y3_1i)));
assign s3_add2_x = ~(~((~y3_i1)&y3_i&y3_1i));
assign s4_sub_x = ~(~(y4_i1&y4_i&(~y4_1i))&~(y4_i1&(~y4_i)&y4_1i));
assign s4_add_x = ~(~((~y4_i1)&y4_i&(~y4_1i))&~((~y4_i1)&(~y4_i)&y4_1i));
assign s4_sub2_x = ~(~(y4_i1&(~y4_i)&(~y4_1i)));
assign s4_add2_x = ~(~((~y4_i1)&y4_i&y4_1i));
assign s5_sub_x = ~(~(y5_i1&y5_i&(~y5_1i))&~(y5_i1&(~y5_i)&y5_1i));
assign s5_add_x = ~(~((~y5_i1)&y5_i&(~y5_1i))&~((~y5_i1)&(~y5_i)&y5_1i));
assign s5_sub2_x = ~(~(y5_i1&(~y5_i)&(~y5_1i)));
assign s5_add2_x = ~(~((~y5_i1)&y5_i&y5_1i));
assign s6_sub_x = ~(~(y6_i1&y6_i&(~y6_1i))&~(y6_i1&(~y6_i)&y6_1i));
assign s6_add_x = ~(~((~y6_i1)&y6_i&(~y6_1i))&~((~y6_i1)&(~y6_i)&y6_1i));
assign s6_sub2_x = ~(~(y6_i1&(~y6_i)&(~y6_1i)));
assign s6_add2_x = ~(~((~y6_i1)&y6_i&y6_1i));
assign s7_sub_x = ~(~(y7_i1&y7_i&(~y7_1i))&~(y7_i1&(~y7_i)&y7_1i));
assign s7_add_x = ~(~((~y7_i1)&y7_i&(~y7_1i))&~((~y7_i1)&(~y7_i)&y7_1i));
assign s7_sub2_x = ~(~(y7_i1&(~y7_i)&(~y7_1i)));
assign s7_add2_x = ~(~((~y7_i1)&y7_i&y7_1i));
assign s8_sub_x = ~(~(y8_i1&y8_i&(~y8_1i))&~(y8_i1&(~y8_i)&y8_1i));
assign s8_add_x = ~(~((~y8_i1)&y8_i&(~y8_1i))&~((~y8_i1)&(~y8_i)&y8_1i));
assign s8_sub2_x = ~(~(y8_i1&(~y8_i)&(~y8_1i)));
assign s8_add2_x = ~(~((~y8_i1)&y8_i&y8_1i));
assign s9_sub_x = ~(~(y9_i1&y9_i&(~y9_1i))&~(y9_i1&(~y9_i)&y9_1i));
assign s9_add_x = ~(~((~y9_i1)&y9_i&(~y9_1i))&~((~y9_i1)&(~y9_i)&y9_1i));
assign s9_sub2_x = ~(~(y9_i1&(~y9_i)&(~y9_1i)));
assign s9_add2_x = ~(~((~y9_i1)&y9_i&y9_1i));
assign s10_sub_x = ~(~(y10_i1&y10_i&(~y10_1i))&~(y10_i1&(~y10_i)&y10_1i));
assign s10_add_x = ~(~((~y10_i1)&y10_i&(~y10_1i))&~((~y10_i1)&(~y10_i)&y10_1i));
assign s10_sub2_x = ~(~(y10_i1&(~y10_i)&(~y10_1i)));
assign s10_add2_x = ~(~((~y10_i1)&y10_i&y10_1i));
assign s11_sub_x = ~(~(y11_i1&y11_i&(~y11_1i))&~(y11_i1&(~y11_i)&y11_1i));
assign s11_add_x = ~(~((~y11_i1)&y11_i&(~y11_1i))&~((~y11_i1)&(~y11_i)&y11_1i));
assign s11_sub2_x = ~(~(y11_i1&(~y11_i)&(~y11_1i)));
assign s11_add2_x = ~(~((~y11_i1)&y11_i&y11_1i));
assign s12_sub_x = ~(~(y12_i1&y12_i&(~y12_1i))&~(y12_i1&(~y12_i)&y12_1i));
assign s12_add_x = ~(~((~y12_i1)&y12_i&(~y12_1i))&~((~y12_i1)&(~y12_i)&y12_1i));
assign s12_sub2_x = ~(~(y12_i1&(~y12_i)&(~y12_1i)));
assign s12_add2_x = ~(~((~y12_i1)&y12_i&y12_1i));
assign s13_sub_x = ~(~(y13_i1&y13_i&(~y13_1i))&~(y13_i1&(~y13_i)&y13_1i));
assign s13_add_x = ~(~((~y13_i1)&y13_i&(~y13_1i))&~((~y13_i1)&(~y13_i)&y13_1i));
assign s13_sub2_x = ~(~(y13_i1&(~y13_i)&(~y13_1i)));
assign s13_add2_x = ~(~((~y13_i1)&y13_i&y13_1i));
assign s14_sub_x = ~(~(y14_i1&y14_i&(~y14_1i))&~(y14_i1&(~y14_i)&y14_1i));
assign s14_add_x = ~(~((~y14_i1)&y14_i&(~y14_1i))&~((~y14_i1)&(~y14_i)&y14_1i));
assign s14_sub2_x = ~(~(y14_i1&(~y14_i)&(~y14_1i)));
assign s14_add2_x = ~(~((~y14_i1)&y14_i&y14_1i));
assign s15_sub_x = ~(~(y15_i1&y15_i&(~y15_1i))&~(y15_i1&(~y15_i)&y15_1i));
assign s15_add_x = ~(~((~y15_i1)&y15_i&(~y15_1i))&~((~y15_i1)&(~y15_i)&y15_1i));
assign s15_sub2_x = ~(~(y15_i1&(~y15_i)&(~y15_1i)));
assign s15_add2_x = ~(~((~y15_i1)&y15_i&y15_1i));
assign s16_sub_x = ~(~(y16_i1&y16_i&(~y16_1i))&~(y16_i1&(~y16_i)&y16_1i));
assign s16_add_x = ~(~((~y16_i1)&y16_i&(~y16_1i))&~((~y16_i1)&(~y16_i)&y16_1i));
assign s16_sub2_x = ~(~(y16_i1&(~y16_i)&(~y16_1i)));
assign s16_add2_x = ~(~((~y16_i1)&y16_i&y16_1i));
assign s17_sub_x = ~(~(y17_i1&y17_i&(~y17_1i))&~(y17_i1&(~y17_i)&y17_1i));
assign s17_add_x = ~(~((~y17_i1)&y17_i&(~y17_1i))&~((~y17_i1)&(~y17_i)&y17_1i));
assign s17_sub2_x = ~(~(y17_i1&(~y17_i)&(~y17_1i)));
assign s17_add2_x = ~(~((~y17_i1)&y17_i&y17_1i));
assign s18_sub_x = ~(~(y18_i1&y18_i&(~y18_1i))&~(y18_i1&(~y18_i)&y18_1i));
assign s18_add_x = ~(~((~y18_i1)&y18_i&(~y18_1i))&~((~y18_i1)&(~y18_i)&y18_1i));
assign s18_sub2_x = ~(~(y18_i1&(~y18_i)&(~y18_1i)));
assign s18_add2_x = ~(~((~y18_i1)&y18_i&y18_1i));
assign s19_sub_x = ~(~(y19_i1&y19_i&(~y19_1i))&~(y19_i1&(~y19_i)&y19_1i));
assign s19_add_x = ~(~((~y19_i1)&y19_i&(~y19_1i))&~((~y19_i1)&(~y19_i)&y19_1i));
assign s19_sub2_x = ~(~(y19_i1&(~y19_i)&(~y19_1i)));
assign s19_add2_x = ~(~((~y19_i1)&y19_i&y19_1i));
assign s20_sub_x = ~(~(y20_i1&y20_i&(~y20_1i))&~(y20_i1&(~y20_i)&y20_1i));
assign s20_add_x = ~(~((~y20_i1)&y20_i&(~y20_1i))&~((~y20_i1)&(~y20_i)&y20_1i));
assign s20_sub2_x = ~(~(y20_i1&(~y20_i)&(~y20_1i)));
assign s20_add2_x = ~(~((~y20_i1)&y20_i&y20_1i));
assign s21_sub_x = ~(~(y21_i1&y21_i&(~y21_1i))&~(y21_i1&(~y21_i)&y21_1i));
assign s21_add_x = ~(~((~y21_i1)&y21_i&(~y21_1i))&~((~y21_i1)&(~y21_i)&y21_1i));
assign s21_sub2_x = ~(~(y21_i1&(~y21_i)&(~y21_1i)));
assign s21_add2_x = ~(~((~y21_i1)&y21_i&y21_1i));
assign s22_sub_x = ~(~(y22_i1&y22_i&(~y22_1i))&~(y22_i1&(~y22_i)&y22_1i));
assign s22_add_x = ~(~((~y22_i1)&y22_i&(~y22_1i))&~((~y22_i1)&(~y22_i)&y22_1i));
assign s22_sub2_x = ~(~(y22_i1&(~y22_i)&(~y22_1i)));
assign s22_add2_x = ~(~((~y22_i1)&y22_i&y22_1i));
assign s23_sub_x = ~(~(y23_i1&y23_i&(~y23_1i))&~(y23_i1&(~y23_i)&y23_1i));
assign s23_add_x = ~(~((~y23_i1)&y23_i&(~y23_1i))&~((~y23_i1)&(~y23_i)&y23_1i));
assign s23_sub2_x = ~(~(y23_i1&(~y23_i)&(~y23_1i)));
assign s23_add2_x = ~(~((~y23_i1)&y23_i&y23_1i));
assign s24_sub_x = ~(~(y24_i1&y24_i&(~y24_1i))&~(y24_i1&(~y24_i)&y24_1i));
assign s24_add_x = ~(~((~y24_i1)&y24_i&(~y24_1i))&~((~y24_i1)&(~y24_i)&y24_1i));
assign s24_sub2_x = ~(~(y24_i1&(~y24_i)&(~y24_1i)));
assign s24_add2_x = ~(~((~y24_i1)&y24_i&y24_1i));
assign s25_sub_x = ~(~(y25_i1&y25_i&(~y25_1i))&~(y25_i1&(~y25_i)&y25_1i));
assign s25_add_x = ~(~((~y25_i1)&y25_i&(~y25_1i))&~((~y25_i1)&(~y25_i)&y25_1i));
assign s25_sub2_x = ~(~(y25_i1&(~y25_i)&(~y25_1i)));
assign s25_add2_x = ~(~((~y25_i1)&y25_i&y25_1i));
assign s26_sub_x = ~(~(y26_i1&y26_i&(~y26_1i))&~(y26_i1&(~y26_i)&y26_1i));
assign s26_add_x = ~(~((~y26_i1)&y26_i&(~y26_1i))&~((~y26_i1)&(~y26_i)&y26_1i));
assign s26_sub2_x = ~(~(y26_i1&(~y26_i)&(~y26_1i)));
assign s26_add2_x = ~(~((~y26_i1)&y26_i&y26_1i));
assign s27_sub_x = ~(~(y27_i1&y27_i&(~y27_1i))&~(y27_i1&(~y27_i)&y27_1i));
assign s27_add_x = ~(~((~y27_i1)&y27_i&(~y27_1i))&~((~y27_i1)&(~y27_i)&y27_1i));
assign s27_sub2_x = ~(~(y27_i1&(~y27_i)&(~y27_1i)));
assign s27_add2_x = ~(~((~y27_i1)&y27_i&y27_1i));
assign s28_sub_x = ~(~(y28_i1&y28_i&(~y28_1i))&~(y28_i1&(~y28_i)&y28_1i));
assign s28_add_x = ~(~((~y28_i1)&y28_i&(~y28_1i))&~((~y28_i1)&(~y28_i)&y28_1i));
assign s28_sub2_x = ~(~(y28_i1&(~y28_i)&(~y28_1i)));
assign s28_add2_x = ~(~((~y28_i1)&y28_i&y28_1i));
assign s29_sub_x = ~(~(y29_i1&y29_i&(~y29_1i))&~(y29_i1&(~y29_i)&y29_1i));
assign s29_add_x = ~(~((~y29_i1)&y29_i&(~y29_1i))&~((~y29_i1)&(~y29_i)&y29_1i));
assign s29_sub2_x = ~(~(y29_i1&(~y29_i)&(~y29_1i)));
assign s29_add2_x = ~(~((~y29_i1)&y29_i&y29_1i));
assign s30_sub_x = ~(~(y30_i1&y30_i&(~y30_1i))&~(y30_i1&(~y30_i)&y30_1i));
assign s30_add_x = ~(~((~y30_i1)&y30_i&(~y30_1i))&~((~y30_i1)&(~y30_i)&y30_1i));
assign s30_sub2_x = ~(~(y30_i1&(~y30_i)&(~y30_1i)));
assign s30_add2_x = ~(~((~y30_i1)&y30_i&y30_1i));
assign s31_sub_x = ~(~(y31_i1&y31_i&(~y31_1i))&~(y31_i1&(~y31_i)&y31_1i));
assign s31_add_x = ~(~((~y31_i1)&y31_i&(~y31_1i))&~((~y31_i1)&(~y31_i)&y31_1i));
assign s31_sub2_x = ~(~(y31_i1&(~y31_i)&(~y31_1i)));
assign s31_add2_x = ~(~((~y31_i1)&y31_i&y31_1i));
assign s32_sub_x = ~(~(y32_i1&y32_i&(~y32_1i))&~(y32_i1&(~y32_i)&y32_1i));
assign s32_add_x = ~(~((~y32_i1)&y32_i&(~y32_1i))&~((~y32_i1)&(~y32_i)&y32_1i));
assign s32_sub2_x = ~(~(y32_i1&(~y32_i)&(~y32_1i)));
assign s32_add2_x = ~(~((~y32_i1)&y32_i&y32_1i));
wire c_0;
assign c_0 = s0_sub_x||s0_sub2_x;
reg [131:0] p_x0;
always@(*)begin
case({s0_sub_x,s0_sub2_x,s0_add_x,s0_add2_x})
4'b0000:    p_x0 = 132'b0;
4'b1000:    p_x0 = ~{a[131:0],{0{1'b0}}} ;
4'b0100:    p_x0 = ~{a[130:0],{1{1'b0}}};
4'b0010:    p_x0 = {a[131:0],{0{1'b0}}};
4'b0001:    p_x0 = {a[130:0],{1{1'b0}}};
default:    p_x0 = 132'b0;
endcase
end
wire c_1;
assign c_1 = s1_sub_x||s1_sub2_x;
reg [131:0] p_x1;
always@(*)begin
case({s1_sub_x,s1_sub2_x,s1_add_x,s1_add2_x})
4'b0000:    p_x1 = 132'b0;
4'b1000:    p_x1 = ~{a[129:0],{2{1'b0}}} ;
4'b0100:    p_x1 = ~{a[128:0],{3{1'b0}}};
4'b0010:    p_x1 = {a[129:0],{2{1'b0}}};
4'b0001:    p_x1 = {a[128:0],{3{1'b0}}};
default:    p_x1 = 132'b0;
endcase
end
wire c_2;
assign c_2 = s2_sub_x||s2_sub2_x;
reg [131:0] p_x2;
always@(*)begin
case({s2_sub_x,s2_sub2_x,s2_add_x,s2_add2_x})
4'b0000:    p_x2 = 132'b0;
4'b1000:    p_x2 = ~{a[127:0],{4{1'b0}}} ;
4'b0100:    p_x2 = ~{a[126:0],{5{1'b0}}};
4'b0010:    p_x2 = {a[127:0],{4{1'b0}}};
4'b0001:    p_x2 = {a[126:0],{5{1'b0}}};
default:    p_x2 = 132'b0;
endcase
end
wire c_3;
assign c_3 = s3_sub_x||s3_sub2_x;
reg [131:0] p_x3;
always@(*)begin
case({s3_sub_x,s3_sub2_x,s3_add_x,s3_add2_x})
4'b0000:    p_x3 = 132'b0;
4'b1000:    p_x3 = ~{a[125:0],{6{1'b0}}} ;
4'b0100:    p_x3 = ~{a[124:0],{7{1'b0}}};
4'b0010:    p_x3 = {a[125:0],{6{1'b0}}};
4'b0001:    p_x3 = {a[124:0],{7{1'b0}}};
default:    p_x3 = 132'b0;
endcase
end
wire c_4;
assign c_4 = s4_sub_x||s4_sub2_x;
reg [131:0] p_x4;
always@(*)begin
case({s4_sub_x,s4_sub2_x,s4_add_x,s4_add2_x})
4'b0000:    p_x4 = 132'b0;
4'b1000:    p_x4 = ~{a[123:0],{8{1'b0}}} ;
4'b0100:    p_x4 = ~{a[122:0],{9{1'b0}}};
4'b0010:    p_x4 = {a[123:0],{8{1'b0}}};
4'b0001:    p_x4 = {a[122:0],{9{1'b0}}};
default:    p_x4 = 132'b0;
endcase
end
wire c_5;
assign c_5 = s5_sub_x||s5_sub2_x;
reg [131:0] p_x5;
always@(*)begin
case({s5_sub_x,s5_sub2_x,s5_add_x,s5_add2_x})
4'b0000:    p_x5 = 132'b0;
4'b1000:    p_x5 = ~{a[121:0],{10{1'b0}}} ;
4'b0100:    p_x5 = ~{a[120:0],{11{1'b0}}};
4'b0010:    p_x5 = {a[121:0],{10{1'b0}}};
4'b0001:    p_x5 = {a[120:0],{11{1'b0}}};
default:    p_x5 = 132'b0;
endcase
end
wire c_6;
assign c_6 = s6_sub_x||s6_sub2_x;
reg [131:0] p_x6;
always@(*)begin
case({s6_sub_x,s6_sub2_x,s6_add_x,s6_add2_x})
4'b0000:    p_x6 = 132'b0;
4'b1000:    p_x6 = ~{a[119:0],{12{1'b0}}} ;
4'b0100:    p_x6 = ~{a[118:0],{13{1'b0}}};
4'b0010:    p_x6 = {a[119:0],{12{1'b0}}};
4'b0001:    p_x6 = {a[118:0],{13{1'b0}}};
default:    p_x6 = 132'b0;
endcase
end
wire c_7;
assign c_7 = s7_sub_x||s7_sub2_x;
reg [131:0] p_x7;
always@(*)begin
case({s7_sub_x,s7_sub2_x,s7_add_x,s7_add2_x})
4'b0000:    p_x7 = 132'b0;
4'b1000:    p_x7 = ~{a[117:0],{14{1'b0}}} ;
4'b0100:    p_x7 = ~{a[116:0],{15{1'b0}}};
4'b0010:    p_x7 = {a[117:0],{14{1'b0}}};
4'b0001:    p_x7 = {a[116:0],{15{1'b0}}};
default:    p_x7 = 132'b0;
endcase
end
wire c_8;
assign c_8 = s8_sub_x||s8_sub2_x;
reg [131:0] p_x8;
always@(*)begin
case({s8_sub_x,s8_sub2_x,s8_add_x,s8_add2_x})
4'b0000:    p_x8 = 132'b0;
4'b1000:    p_x8 = ~{a[115:0],{16{1'b0}}} ;
4'b0100:    p_x8 = ~{a[114:0],{17{1'b0}}};
4'b0010:    p_x8 = {a[115:0],{16{1'b0}}};
4'b0001:    p_x8 = {a[114:0],{17{1'b0}}};
default:    p_x8 = 132'b0;
endcase
end
wire c_9;
assign c_9 = s9_sub_x||s9_sub2_x;
reg [131:0] p_x9;
always@(*)begin
case({s9_sub_x,s9_sub2_x,s9_add_x,s9_add2_x})
4'b0000:    p_x9 = 132'b0;
4'b1000:    p_x9 = ~{a[113:0],{18{1'b0}}} ;
4'b0100:    p_x9 = ~{a[112:0],{19{1'b0}}};
4'b0010:    p_x9 = {a[113:0],{18{1'b0}}};
4'b0001:    p_x9 = {a[112:0],{19{1'b0}}};
default:    p_x9 = 132'b0;
endcase
end
wire c_10;
assign c_10 = s10_sub_x||s10_sub2_x;
reg [131:0] p_x10;
always@(*)begin
case({s10_sub_x,s10_sub2_x,s10_add_x,s10_add2_x})
4'b0000:    p_x10 = 132'b0;
4'b1000:    p_x10 = ~{a[111:0],{20{1'b0}}} ;
4'b0100:    p_x10 = ~{a[110:0],{21{1'b0}}};
4'b0010:    p_x10 = {a[111:0],{20{1'b0}}};
4'b0001:    p_x10 = {a[110:0],{21{1'b0}}};
default:    p_x10 = 132'b0;
endcase
end
wire c_11;
assign c_11 = s11_sub_x||s11_sub2_x;
reg [131:0] p_x11;
always@(*)begin
case({s11_sub_x,s11_sub2_x,s11_add_x,s11_add2_x})
4'b0000:    p_x11 = 132'b0;
4'b1000:    p_x11 = ~{a[109:0],{22{1'b0}}} ;
4'b0100:    p_x11 = ~{a[108:0],{23{1'b0}}};
4'b0010:    p_x11 = {a[109:0],{22{1'b0}}};
4'b0001:    p_x11 = {a[108:0],{23{1'b0}}};
default:    p_x11 = 132'b0;
endcase
end
wire c_12;
assign c_12 = s12_sub_x||s12_sub2_x;
reg [131:0] p_x12;
always@(*)begin
case({s12_sub_x,s12_sub2_x,s12_add_x,s12_add2_x})
4'b0000:    p_x12 = 132'b0;
4'b1000:    p_x12 = ~{a[107:0],{24{1'b0}}} ;
4'b0100:    p_x12 = ~{a[106:0],{25{1'b0}}};
4'b0010:    p_x12 = {a[107:0],{24{1'b0}}};
4'b0001:    p_x12 = {a[106:0],{25{1'b0}}};
default:    p_x12 = 132'b0;
endcase
end
wire c_13;
assign c_13 = s13_sub_x||s13_sub2_x;
reg [131:0] p_x13;
always@(*)begin
case({s13_sub_x,s13_sub2_x,s13_add_x,s13_add2_x})
4'b0000:    p_x13 = 132'b0;
4'b1000:    p_x13 = ~{a[105:0],{26{1'b0}}} ;
4'b0100:    p_x13 = ~{a[104:0],{27{1'b0}}};
4'b0010:    p_x13 = {a[105:0],{26{1'b0}}};
4'b0001:    p_x13 = {a[104:0],{27{1'b0}}};
default:    p_x13 = 132'b0;
endcase
end
wire c_14;
assign c_14 = s14_sub_x||s14_sub2_x;
reg [131:0] p_x14;
always@(*)begin
case({s14_sub_x,s14_sub2_x,s14_add_x,s14_add2_x})
4'b0000:    p_x14 = 132'b0;
4'b1000:    p_x14 = ~{a[103:0],{28{1'b0}}} ;
4'b0100:    p_x14 = ~{a[102:0],{29{1'b0}}};
4'b0010:    p_x14 = {a[103:0],{28{1'b0}}};
4'b0001:    p_x14 = {a[102:0],{29{1'b0}}};
default:    p_x14 = 132'b0;
endcase
end
wire c_15;
assign c_15 = s15_sub_x||s15_sub2_x;
reg [131:0] p_x15;
always@(*)begin
case({s15_sub_x,s15_sub2_x,s15_add_x,s15_add2_x})
4'b0000:    p_x15 = 132'b0;
4'b1000:    p_x15 = ~{a[101:0],{30{1'b0}}} ;
4'b0100:    p_x15 = ~{a[100:0],{31{1'b0}}};
4'b0010:    p_x15 = {a[101:0],{30{1'b0}}};
4'b0001:    p_x15 = {a[100:0],{31{1'b0}}};
default:    p_x15 = 132'b0;
endcase
end
wire c_16;
assign c_16 = s16_sub_x||s16_sub2_x;
reg [131:0] p_x16;
always@(*)begin
case({s16_sub_x,s16_sub2_x,s16_add_x,s16_add2_x})
4'b0000:    p_x16 = 132'b0;
4'b1000:    p_x16 = ~{a[99:0],{32{1'b0}}} ;
4'b0100:    p_x16 = ~{a[98:0],{33{1'b0}}};
4'b0010:    p_x16 = {a[99:0],{32{1'b0}}};
4'b0001:    p_x16 = {a[98:0],{33{1'b0}}};
default:    p_x16 = 132'b0;
endcase
end
wire c_17;
assign c_17 = s17_sub_x||s17_sub2_x;
reg [131:0] p_x17;
always@(*)begin
case({s17_sub_x,s17_sub2_x,s17_add_x,s17_add2_x})
4'b0000:    p_x17 = 132'b0;
4'b1000:    p_x17 = ~{a[97:0],{34{1'b0}}} ;
4'b0100:    p_x17 = ~{a[96:0],{35{1'b0}}};
4'b0010:    p_x17 = {a[97:0],{34{1'b0}}};
4'b0001:    p_x17 = {a[96:0],{35{1'b0}}};
default:    p_x17 = 132'b0;
endcase
end
wire c_18;
assign c_18 = s18_sub_x||s18_sub2_x;
reg [131:0] p_x18;
always@(*)begin
case({s18_sub_x,s18_sub2_x,s18_add_x,s18_add2_x})
4'b0000:    p_x18 = 132'b0;
4'b1000:    p_x18 = ~{a[95:0],{36{1'b0}}} ;
4'b0100:    p_x18 = ~{a[94:0],{37{1'b0}}};
4'b0010:    p_x18 = {a[95:0],{36{1'b0}}};
4'b0001:    p_x18 = {a[94:0],{37{1'b0}}};
default:    p_x18 = 132'b0;
endcase
end
wire c_19;
assign c_19 = s19_sub_x||s19_sub2_x;
reg [131:0] p_x19;
always@(*)begin
case({s19_sub_x,s19_sub2_x,s19_add_x,s19_add2_x})
4'b0000:    p_x19 = 132'b0;
4'b1000:    p_x19 = ~{a[93:0],{38{1'b0}}} ;
4'b0100:    p_x19 = ~{a[92:0],{39{1'b0}}};
4'b0010:    p_x19 = {a[93:0],{38{1'b0}}};
4'b0001:    p_x19 = {a[92:0],{39{1'b0}}};
default:    p_x19 = 132'b0;
endcase
end
wire c_20;
assign c_20 = s20_sub_x||s20_sub2_x;
reg [131:0] p_x20;
always@(*)begin
case({s20_sub_x,s20_sub2_x,s20_add_x,s20_add2_x})
4'b0000:    p_x20 = 132'b0;
4'b1000:    p_x20 = ~{a[91:0],{40{1'b0}}} ;
4'b0100:    p_x20 = ~{a[90:0],{41{1'b0}}};
4'b0010:    p_x20 = {a[91:0],{40{1'b0}}};
4'b0001:    p_x20 = {a[90:0],{41{1'b0}}};
default:    p_x20 = 132'b0;
endcase
end
wire c_21;
assign c_21 = s21_sub_x||s21_sub2_x;
reg [131:0] p_x21;
always@(*)begin
case({s21_sub_x,s21_sub2_x,s21_add_x,s21_add2_x})
4'b0000:    p_x21 = 132'b0;
4'b1000:    p_x21 = ~{a[89:0],{42{1'b0}}} ;
4'b0100:    p_x21 = ~{a[88:0],{43{1'b0}}};
4'b0010:    p_x21 = {a[89:0],{42{1'b0}}};
4'b0001:    p_x21 = {a[88:0],{43{1'b0}}};
default:    p_x21 = 132'b0;
endcase
end
wire c_22;
assign c_22 = s22_sub_x||s22_sub2_x;
reg [131:0] p_x22;
always@(*)begin
case({s22_sub_x,s22_sub2_x,s22_add_x,s22_add2_x})
4'b0000:    p_x22 = 132'b0;
4'b1000:    p_x22 = ~{a[87:0],{44{1'b0}}} ;
4'b0100:    p_x22 = ~{a[86:0],{45{1'b0}}};
4'b0010:    p_x22 = {a[87:0],{44{1'b0}}};
4'b0001:    p_x22 = {a[86:0],{45{1'b0}}};
default:    p_x22 = 132'b0;
endcase
end
wire c_23;
assign c_23 = s23_sub_x||s23_sub2_x;
reg [131:0] p_x23;
always@(*)begin
case({s23_sub_x,s23_sub2_x,s23_add_x,s23_add2_x})
4'b0000:    p_x23 = 132'b0;
4'b1000:    p_x23 = ~{a[85:0],{46{1'b0}}} ;
4'b0100:    p_x23 = ~{a[84:0],{47{1'b0}}};
4'b0010:    p_x23 = {a[85:0],{46{1'b0}}};
4'b0001:    p_x23 = {a[84:0],{47{1'b0}}};
default:    p_x23 = 132'b0;
endcase
end
wire c_24;
assign c_24 = s24_sub_x||s24_sub2_x;
reg [131:0] p_x24;
always@(*)begin
case({s24_sub_x,s24_sub2_x,s24_add_x,s24_add2_x})
4'b0000:    p_x24 = 132'b0;
4'b1000:    p_x24 = ~{a[83:0],{48{1'b0}}} ;
4'b0100:    p_x24 = ~{a[82:0],{49{1'b0}}};
4'b0010:    p_x24 = {a[83:0],{48{1'b0}}};
4'b0001:    p_x24 = {a[82:0],{49{1'b0}}};
default:    p_x24 = 132'b0;
endcase
end
wire c_25;
assign c_25 = s25_sub_x||s25_sub2_x;
reg [131:0] p_x25;
always@(*)begin
case({s25_sub_x,s25_sub2_x,s25_add_x,s25_add2_x})
4'b0000:    p_x25 = 132'b0;
4'b1000:    p_x25 = ~{a[81:0],{50{1'b0}}} ;
4'b0100:    p_x25 = ~{a[80:0],{51{1'b0}}};
4'b0010:    p_x25 = {a[81:0],{50{1'b0}}};
4'b0001:    p_x25 = {a[80:0],{51{1'b0}}};
default:    p_x25 = 132'b0;
endcase
end
wire c_26;
assign c_26 = s26_sub_x||s26_sub2_x;
reg [131:0] p_x26;
always@(*)begin
case({s26_sub_x,s26_sub2_x,s26_add_x,s26_add2_x})
4'b0000:    p_x26 = 132'b0;
4'b1000:    p_x26 = ~{a[79:0],{52{1'b0}}} ;
4'b0100:    p_x26 = ~{a[78:0],{53{1'b0}}};
4'b0010:    p_x26 = {a[79:0],{52{1'b0}}};
4'b0001:    p_x26 = {a[78:0],{53{1'b0}}};
default:    p_x26 = 132'b0;
endcase
end
wire c_27;
assign c_27 = s27_sub_x||s27_sub2_x;
reg [131:0] p_x27;
always@(*)begin
case({s27_sub_x,s27_sub2_x,s27_add_x,s27_add2_x})
4'b0000:    p_x27 = 132'b0;
4'b1000:    p_x27 = ~{a[77:0],{54{1'b0}}} ;
4'b0100:    p_x27 = ~{a[76:0],{55{1'b0}}};
4'b0010:    p_x27 = {a[77:0],{54{1'b0}}};
4'b0001:    p_x27 = {a[76:0],{55{1'b0}}};
default:    p_x27 = 132'b0;
endcase
end
wire c_28;
assign c_28 = s28_sub_x||s28_sub2_x;
reg [131:0] p_x28;
always@(*)begin
case({s28_sub_x,s28_sub2_x,s28_add_x,s28_add2_x})
4'b0000:    p_x28 = 132'b0;
4'b1000:    p_x28 = ~{a[75:0],{56{1'b0}}} ;
4'b0100:    p_x28 = ~{a[74:0],{57{1'b0}}};
4'b0010:    p_x28 = {a[75:0],{56{1'b0}}};
4'b0001:    p_x28 = {a[74:0],{57{1'b0}}};
default:    p_x28 = 132'b0;
endcase
end
wire c_29;
assign c_29 = s29_sub_x||s29_sub2_x;
reg [131:0] p_x29;
always@(*)begin
case({s29_sub_x,s29_sub2_x,s29_add_x,s29_add2_x})
4'b0000:    p_x29 = 132'b0;
4'b1000:    p_x29 = ~{a[73:0],{58{1'b0}}} ;
4'b0100:    p_x29 = ~{a[72:0],{59{1'b0}}};
4'b0010:    p_x29 = {a[73:0],{58{1'b0}}};
4'b0001:    p_x29 = {a[72:0],{59{1'b0}}};
default:    p_x29 = 132'b0;
endcase
end
wire c_30;
assign c_30 = s30_sub_x||s30_sub2_x;
reg [131:0] p_x30;
always@(*)begin
case({s30_sub_x,s30_sub2_x,s30_add_x,s30_add2_x})
4'b0000:    p_x30 = 132'b0;
4'b1000:    p_x30 = ~{a[71:0],{60{1'b0}}} ;
4'b0100:    p_x30 = ~{a[70:0],{61{1'b0}}};
4'b0010:    p_x30 = {a[71:0],{60{1'b0}}};
4'b0001:    p_x30 = {a[70:0],{61{1'b0}}};
default:    p_x30 = 132'b0;
endcase
end
wire c_31;
assign c_31 = s31_sub_x||s31_sub2_x;
reg [131:0] p_x31;
always@(*)begin
case({s31_sub_x,s31_sub2_x,s31_add_x,s31_add2_x})
4'b0000:    p_x31 = 132'b0;
4'b1000:    p_x31 = ~{a[69:0],{62{1'b0}}} ;
4'b0100:    p_x31 = ~{a[68:0],{63{1'b0}}};
4'b0010:    p_x31 = {a[69:0],{62{1'b0}}};
4'b0001:    p_x31 = {a[68:0],{63{1'b0}}};
default:    p_x31 = 132'b0;
endcase
end
wire c_32;
assign c_32 = s32_sub_x||s32_sub2_x;
reg [131:0] p_x32;
always@(*)begin
case({s32_sub_x,s32_sub2_x,s32_add_x,s32_add2_x})
4'b0000:    p_x32 = 132'b0;
4'b1000:    p_x32 = ~{a[67:0],{64{1'b0}}} ;
4'b0100:    p_x32 = ~{a[66:0],{65{1'b0}}};
4'b0010:    p_x32 = {a[67:0],{64{1'b0}}};
4'b0001:    p_x32 = {a[66:0],{65{1'b0}}};
default:    p_x32 = 132'b0;
endcase
end
assign x_0 = p_x0;
assign x_1 = p_x1;
assign x_2 = p_x2;
assign x_3 = p_x3;
assign x_4 = p_x4;
assign x_5 = p_x5;
assign x_6 = p_x6;
assign x_7 = p_x7;
assign x_8 = p_x8;
assign x_9 = p_x9;
assign x_10 = p_x10;
assign x_11 = p_x11;
assign x_12 = p_x12;
assign x_13 = p_x13;
assign x_14 = p_x14;
assign x_15 = p_x15;
assign x_16 = p_x16;
assign x_17 = p_x17;
assign x_18 = p_x18;
assign x_19 = p_x19;
assign x_20 = p_x20;
assign x_21 = p_x21;
assign x_22 = p_x22;
assign x_23 = p_x23;
assign x_24 = p_x24;
assign x_25 = p_x25;
assign x_26 = p_x26;
assign x_27 = p_x27;
assign x_28 = p_x28;
assign x_29 = p_x29;
assign x_30 = p_x30;
assign x_31 = p_x31;
assign x_32 = p_x32;
assign c = {c_32,c_31,c_30,c_29,c_28,c_27,c_26,c_25,c_24,c_23,c_22,c_21,c_20,c_19,c_18,c_17,c_16,c_15,c_14,c_13,c_12,c_11,c_10,c_9,c_8,c_7,c_6,c_5,c_4,c_3,c_2,c_1,c_0 };
endmodule
