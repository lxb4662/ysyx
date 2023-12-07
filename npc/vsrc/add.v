module ysyx_22050518_add (
 input [63:0]    in1, 
 input [63:0]    in2,
 input            c_in,
 output           c_out,
 output [63:0]    out 
);

    assign {c_out,out} = in1+in2+c_in;

endmodule


module ysyx_22050518_full_adder_1bit(
    input a,
    input b,
    input c_in,
    output c_out,
    output s
    );
    assign s = ~a&~b&c_in|~a&b&~c_in|a&~b&~c_in|a&b&c_in;
    assign c_out = a & b|a&c_in|b&c_in;
    
    
endmodule


module Adder64_unsync(
	input [63:0]	a,
	input [63:0]	b,
	input 		cin,
	output [63:0]	s,
	output 		cout	
);
	assign {cout,s} = a + b + cin;


endmodule

module Adder64(
	input [63:0]	a,
	input [63:0]	b,
	input 		cin,
	output [63:0]	s,
	output 		cout	
);
	wire c3,c7,c11,c15,c19,c23,c27,c31,c35,c39,c43,c47,c51,c55,c59,c63;
	Four_Bits_Lookahead_Adder FA0(.a(a[3:0]),.b(b[3:0]),.cin(cin),.S(s[3:0]),.C(c3));
	Four_Bits_Lookahead_Adder FA4(.a(a[7:4]),.b(b[7:4]),.cin(c3),.S(s[7:4]),.C(c7));
	Four_Bits_Lookahead_Adder FA8(.a(a[11:8]),.b(b[11:8]),.cin(c7),.S(s[11:8]),.C(c11));
	Four_Bits_Lookahead_Adder FA12(.a(a[15:12]),.b(b[15:12]),.cin(c11),.S(s[15:12]),.C(c15));
	Four_Bits_Lookahead_Adder FA16(.a(a[19:16]),.b(b[19:16]),.cin(c15),.S(s[19:16]),.C(c19));
	Four_Bits_Lookahead_Adder FA20(.a(a[23:20]),.b(b[23:20]),.cin(c19),.S(s[23:20]),.C(c23));
	Four_Bits_Lookahead_Adder FA24(.a(a[27:24]),.b(b[27:24]),.cin(c23),.S(s[27:24]),.C(c27));
	Four_Bits_Lookahead_Adder FA28(.a(a[31:28]),.b(b[31:28]),.cin(c27),.S(s[31:28]),.C(c31));
	Four_Bits_Lookahead_Adder FA32(.a(a[35:32]),.b(b[35:32]),.cin(c31),.S(s[35:32]),.C(c35));
	Four_Bits_Lookahead_Adder FA36(.a(a[39:36]),.b(b[39:36]),.cin(c35),.S(s[39:36]),.C(c39));
	Four_Bits_Lookahead_Adder FA40(.a(a[43:40]),.b(b[43:40]),.cin(c39),.S(s[43:40]),.C(c43));
	Four_Bits_Lookahead_Adder FA44(.a(a[47:44]),.b(b[47:44]),.cin(c43),.S(s[47:44]),.C(c47));
	Four_Bits_Lookahead_Adder FA48(.a(a[51:48]),.b(b[51:48]),.cin(c47),.S(s[51:48]),.C(c51));
	Four_Bits_Lookahead_Adder FA52(.a(a[55:52]),.b(b[55:52]),.cin(c51),.S(s[55:52]),.C(c55));
	Four_Bits_Lookahead_Adder FA60(.a(a[59:56]),.b(b[59:56]),.cin(c55),.S(s[59:56]),.C(c59));
	Four_Bits_Lookahead_Adder FA64(.a(a[63:60]),.b(b[63:60]),.cin(c59),.S(s[63:60]),.C(cout));

endmodule

module Four_Bits_Lookahead_Adder(a,b,cin,S,C);
    input [3:0] a;
    input [3:0] b;
    input cin;
    output [3:0] S;
    output C;
    wire [4:1] c;
    
    Lookahead uut(a,b,cin,c);
    assign C=c[4];
    Full_Adder u1(a[0],b[0],cin,S[0]);
    Full_Adder u2(a[1],b[1],c[1],S[1]);
    Full_Adder u3(a[2],b[2],c[2],S[2]);
    Full_Adder u4(a[3],b[3],c[3],S[3]);
endmodule

module Lookahead(a,b,cin,C);
    input [3:0] a;
    input [3:0] b;
    input cin;
    output [4:1] C;
    wire [3:0] G;
    wire [3:0] P;
    
    assign G[0]=a[0]&b[0];
    assign G[1]=a[1]&b[1];
    assign G[2]=a[2]&b[2];
    assign G[3]=a[3]&b[3];
    
    assign P[0]=a[0]|b[0];    
    assign P[1]=a[1]|b[1];
    assign P[2]=a[2]|b[2];
    assign P[3]=a[3]|b[3];
    
    assign C[1]=G[0]|(P[0]&cin);
    assign C[2]=G[1]|(P[1]&G[0])|(P[1]&P[0]&cin);
    assign C[3]=G[2]|(P[2]&G[1])|(P[2]&P[1]&G[0])|(P[2]&P[1]&P[0]&cin);
    assign C[4]=G[3]|(P[3]&G[2])|(P[3]&P[2]&G[1])|(P[3]&P[2]&P[1]&G[0])|(P[3]&P[2]&P[1]&P[0]&cin);
endmodule
module Full_Adder(a,b,cin,S,C);
    	input a,b,cin;
    	output S,C;

	assign S = a^b^cin;
	assign C = a&b + (a^b)&cin;

endmodule