module load_ext(
    input [2:0]     func3,

    input [63:0]    mrd,

    output reg [63:0]   rd

    
);

wire [63:0]  lb;
wire [63:0]  lh;
wire [63:0]  lw;
wire [63:0]  lbu;
wire [63:0]  lhu;
wire [63:0]  lwu;
wire [63:0]  ld;


assign lb = {{56{mrd[7]}},mrd[7:0]};
assign lh = {{48{mrd[15]}},mrd[15:0]};
assign lw = {{32{mrd[31]}},mrd[31:0]};

assign lbu = {{56{1'b0}},mrd[7:0]};
assign lhu = {{48{1'b0}},mrd[15:0]};
assign lwu = {{32{1'b0}},mrd[31:0]};

assign ld  = mrd;
always@(*)begin
case (func3)
    3'b000: rd = lb; 
    3'b001: rd = lh; 
    3'b010: rd = lw; 
    3'b011: rd = ld; 

    3'b100: rd = lbu; 
    3'b101: rd = lhu; 
    3'b110: rd = lwu; 

    3'b111: rd = 64'b0;
    default : rd = 64'b0; 


endcase


end


endmodule 