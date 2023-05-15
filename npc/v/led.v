module led(
    input clk,
    input rst,
    output reg [15:0]   ledr
);

always@(posedge clk)begin
    if(rst)begin
        ledr <= 16'b1;
    end
    else begin
        ledr <= {ledr[14:0],ledr[15]};


    end
end

endmodule