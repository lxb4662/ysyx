import "DPI-C" function void reg_cpy (input int adder,input int a,input int b);
module ysyx_22050518_reg_group(

  input clk,
  input rst_n,

  input [4:0]     rs1_addr,
  input [4:0]     rs2_addr,
  input [4:0]     rd_addr,
  input           write_en,
  input [63:0]    rd,


  output[63:0]    rs1,
  output[63:0]    rs2,
  output[63:0]    a0
);

  reg [63:0]  regs[31:0];

  assign rs1 = (rs1_addr==5'b0)?64'b0:regs[rs1_addr];
  assign rs2 = (rs2_addr==5'b0)?64'b0:regs[rs2_addr];
  
  always@(posedge clk )
  begin
    if(!rst_n)begin
      regs[5'b0] <= 64'b0; 
    end
    else begin
      if(write_en==1'b1)
      begin
        regs[rd_addr] <= rd;
      end
    end
  end

  always@(posedge clk )begin
    //integer i;
    if(write_en)begin
      reg_cpy(rd_addr,rd[63:32],rd[31:0]);
    end
  end



  assign a0 = regs[5'd10];

endmodule
