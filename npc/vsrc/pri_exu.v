module pri_exu(
    input                   clk,
    input                   rst_n,
    input                   pri_en,
    input [63:0]            rs1_wire,
    input [4:0]             rd_addr_wire,
    input [63:0]            csr_wire,
    input [11:0]            csr_addr_wire,
    input [2:0]             func3,
    output reg [63:0]       rd_o,
    output reg  [4:0]       rd_addr_o,
    output reg              rd_w_o,
    output reg [63:0]       csr_o,
    output reg              csr_w_o,
    output reg [11:0]       csr_a_o
    


);

wire [63:0]     csrrw;
wire [63:0]     csrrc;
wire [63:0]     csrrs;

assign csrrw = rs1_wire;
assign csrrc = csr_wire &(~rs1_wire);
assign csrrs = csr_wire |( rs1_wire);

always@(posedge clk)begin
    if(!rst_n)begin
        rd_o        <= 64'b0;
        rd_w_o      <= 1'b0;
        csr_w_o     <= 1'b0;


    end
    else begin
        case(func3)
            3'b001: csr_o   <= csrrw;
            3'b010: csr_o   <= csrrc;
            3'b011: csr_o   <= csrrs;

        endcase
        rd_o        <= csr_wire;
        rd_w_o      <= pri_en;
        rd_addr_o   <= rd_addr_wire;
        csr_w_o     <= pri_en;
        csr_a_o     <= csr_addr_wire;
    end
end


endmodule