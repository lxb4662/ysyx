
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/01/13 03:52:44
// Design Name: 
// Module Name: ram
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
module ram_tb(

);
    reg clk;
    reg rst_n;
    reg [7:0] addr;
    reg [127:0] data;
    reg cen;
    reg wen;
    reg d_sel;
    ram dut(
        .CLK(clk)
        ,.rst_n(rst_n)
        ,.CEN(cen)
        ,.WEN(wen)
        ,.A(addr)
        ,.D(data)
        ,.d_sel(addr[7])
        ,.BWEN(128'b0)
    );

    always #10 begin
        addr <= addr + 8'b1;
        data <= data + 128'b1;
        clk  <= ~clk;

    end

    initial begin
        clk <= 1'b1;
        addr <= 8'b0;
        data <= 128'd10;
        rst_n <= 1'b0;
        cen <= 1'b0;
        wen <= 1'b0;
    #10 clk <= ~clk;
    #10 clk <= ~clk;
        rst_n<= 1'b1;

    end

endmodule
/*
`define TAG_DATA_WIDTH  23
module tag_ram_128(
    clk,
    rst_n,
    data_in,
    addr,
    en,
    write,
    write_valid,
    set_valid,
    write_dirty,
    set_dirty,
    data_out
);

parameter ADDR_WIDTH = 7;
parameter WORD_DEPTH = 128;

input clk;
input rst_n;
input [`TAG_DATA_WIDTH-3:0] data_in;
input [ADDR_WIDTH-1:0] addr;
input en;
input write;
input write_dirty;
input write_valid;
input set_dirty;
input set_valid;
output reg [`TAG_DATA_WIDTH-1:0] data_out;


reg [`TAG_DATA_WIDTH-1:0] mem [WORD_DEPTH-1:0];

integer i;
always@(posedge clk)begin
    if(!rst_n)begin
        for (i=0;i<128;i = i+1)begin
            mem[i] = `TAG_DATA_WIDTH'b0;
        end
    end
    else begin
        if(en)begin
            if(write||write_valid||write_dirty)begin
                mem[addr] <= {write_dirty?set_dirty:mem[addr][`TAG_DATA_WIDTH-1],write_valid?set_valid:mem[addr][`TAG_DATA_WIDTH-2],write?data_in:mem[addr][`TAG_DATA_WIDTH-3:0]};
            end
            
            data_out <= mem[addr];
        end
    end
end



endmodule


module ram_128(
    Q0,
    Q1,
    CLK,
    rst_n,
    CEN,
    WEN,
    BWEN,
    A,
    D,
    d_sel
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 7;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q0;
output reg [Bits-1:0] Q1;
input                 CLK;
input                 rst_n;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Bits-1:0]      D;
input                 d_sel;

wire [Bits-1:0] q0;
wire [Bits-1:0] q1;
wire [Bits-1:0] q2;
wire [Bits-1:0] q3;


ram_ r0(
    .Q(q0)
    ,.CLK(CLK)
    ,.CEN(CEN|(A[Add_Width-1]!=1'B0))
    ,.WEN(WEN|d_sel)
    ,.BWEN(BWEN)
    ,.A(A[Add_Width-2:0])
    ,.D(D)
);
ram_ r1(
    .Q(q1)
    ,.CLK(CLK)
    ,.CEN(CEN|(A[Add_Width-1]!=1'B1))
    ,.WEN(WEN|d_sel)
    ,.BWEN(BWEN)
    ,.A(A[Add_Width-2:0])
    ,.D(D)
);
ram_ r2(
    .Q(q2)
    ,.CLK(CLK)
    ,.CEN(CEN|(A[Add_Width-1]!=1'B0))
    ,.WEN(WEN|~d_sel)
    ,.BWEN(BWEN)
    ,.A(A[Add_Width-2:0])
    ,.D(D)
);
ram_ r3(
    .Q(q3)
    ,.CLK(CLK)
    ,.CEN(CEN|(A[Add_Width-1]!=1'B1))
    ,.WEN(WEN|~d_sel)
    ,.BWEN(BWEN)
    ,.A(A[Add_Width-2:0])
    ,.D(D)
);

reg block_sel;
always@(posedge CLK or negedge rst_n)begin
    if(!rst_n)begin
        block_sel <= 1'b0;
    end
    else begin
        block_sel <= A[Add_Width-1];
    end
end


always@(*)begin
    case(block_sel)
        1'b0: Q0 = q0;
        1'b1: Q0 = q1;
    endcase
end


always@(*)begin
    case(block_sel)
        1'b0: Q1 = q2;
        1'b1: Q1 = q3;
    endcase
end


endmodule






module ram_1(
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

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
    end
    Q <= cen && !wen ? ram[A] : {4{$random}};
end

endmodule*/