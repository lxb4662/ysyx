module uart (
    input                   clk,
    input                   rst_n,

    input [63:0]            addr,
    input [63:0]            data,
    input                   w_en,

    output reg [7:0]        out,
    output reg              out_en,
    input                   get


);

wire write;

wire uart_seled;
wire [7:0]addr_top;

assign addr_top = addr[31:24];

assign uart_seled =  (addr_top==8'b10000001)?1'b1:1'b0;


assign write = (uart_seled&(w_en));

always@(posedge clk or negedge get)begin

    if(!get)begin
        out_en <= 1'b0;
    end
    else begin

        if(!rst_n)begin
            out     <= 8'b0;
            out_en  <= 1'b0;

        end
        else begin
            if(write)begin
                if(addr[7:0]==8'h00)begin
                    out_en <= data[0];

                end
                if(addr[7:0]==8'h04)begin
                    out <= data[7:0];
                end
            end
        end
    end
end



endmodule 