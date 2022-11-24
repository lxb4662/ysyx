//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/10/29 18:54:36
// Design Name: 
// Module Name: reg_62
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


module reg_62(
    input clk,
    input [61:0] data_in,
    output reg [61:0] data_out,
    input en,
    input rst_n
    );
    
    always@(posedge clk)begin
        if(!rst_n)begin
            data_out<=62'b0;
        end
        else if(en)begin
            data_out <= data_in;
        end 
    end
endmodule
