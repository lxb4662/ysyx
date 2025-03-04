module S011HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [Wen_Width-1:0] bwen = ~BWEN;

reg [63:0] ram_0 [0:Word_Depth-1];
reg [63:0] ram_1 [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram_0[A] <= (D[63:0] & bwen[63:0]) | (ram_0[A] & ~bwen[63:0]);
        ram_1[A] <= (D[127:64] & bwen[127:64]) | (ram_1[A] & ~bwen[127:64]);
    end
    Q <= cen && !wen ? {ram_1[A],ram_0[A]} : {4{$random}};
end

endmodule
