module imm_decode (
  input [11:0]        imm_i_l_jalr,
  input [11:0]        imm_s,
  input [11:0]        imm_b, 
  input [19:0]        imm_jal, 
  input [19:0]        imm_u, 
  input [ 3:0]        sel,
  output reg [63:0]        out  

);
  wire [63:0]         ext_imm_iljalr;
  wire [63:0]         ext_imm_s;
  wire [63:0]         ext_imm_b;
  wire [63:0]         ext_imm_jal;
  wire [63:0]         ext_imm_u;
  wire [63:0]         ext_i_shamt;

  assign ext_imm_iljalr = {{52{imm_i_l_jalr[11]}},imm_i_l_jalr};
  assign ext_imm_s      = {{52{imm_s[11]}},imm_s};
  assign ext_imm_b      = {(imm_b[11]==1'b0)?{52{1'b0}}:{52{1'b1}},imm_b,1'b0};
  assign ext_imm_jal    = {(imm_jal[19]==1'b0)?{43{1'b0}}:{43{1'b1}},imm_jal,1'b0};
  assign ext_imm_u      = {(imm_u[19]==1'b0)?{32{1'b0}}:{32{1'b1}},imm_u,12'b0};
  assign ext_i_shamt    = {{58{1'b0}},ext_imm_iljalr[5:0]};



  always@(*)begin
    case(sel )
    4'd0: out = 64'b0;
    4'd1: out = ext_imm_iljalr;
    4'd2: out = ext_imm_s;
    4'd3: out = ext_imm_b;
    4'd4: out = ext_imm_jal;
    4'd5: out = ext_imm_u;
    4'd6: out = ext_i_shamt;
    default:out = 64'b0;

    endcase     
  end

endmodule

