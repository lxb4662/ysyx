`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/10/30 17:20:38
// Design Name: 
// Module Name: tag_arry
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


module ysyx_22050518_tag_arry(
    input [6:0] addr,
    input clk,
    input en,
    input rst_n,
    input [54:0]    data_in,
    output[54:0]    data_out
              
    );
    
    reg [54:0]  data [127:0];
    integer i;
    always@(posedge clk)begin
        if(!rst_n)begin
            for(i = 0;i<128;i=i+1)begin
                data[i] = 55'b0;
            end
        end
        else begin
            if(en)begin
                data[addr] <= data_in;
            end
        end
    end
    
    assign data_out = data[addr];
    
    
endmodule
