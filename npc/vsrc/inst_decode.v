module inst_decode (
  input       [31:0]            inst,
  output      [6:0]             opcode,
  output      [2:0]             func3,
  output      [6:0]             func7,

  input                         jup,


  output      [4:0]             rs1_addr,
  output                        alu_in1_sel,
  output                        alu_in2_sel,
  output      [4:0]             rs2_addr,
  output      [63:0]            imm_exted,

  output      [4:0]             rd_addr, 
  output                        rd_w_en,

  output                        auipc,
  output                        lui,
  output                        sub_sra,
  output                        ebreak,
  
  output                        r_type,
  output                        m_type,
  output                        w_type,
  output                        u_type,
  output                        jal_type,
  output                        jalr_type,
  output                        i_type,
  output                        b_type,
  output                        l_type,
  output                        s_type,

  output                        csrr,
  output                        mret,
  output                        ecall,
  output    [11:0]              csr_addr,
  output pri_exu_en,
/*
  output                        i_alu,
  output                        ii_alu,
  output                        ir_alu,
  output                        m_alu,
  output                        w_alu,
  output                        wi_alu,
  output                        wr_alu,
  output                        mw_alu,
*/
  output                        exu_en,
  output      [6:0]             alu_op,

  output                        lsu_en,
  output                        lsu_w




);

  assign opcode   = inst [ 6: 0];
  assign rs1_addr = ecall?5'd17:inst [19:15];
  assign rs2_addr = inst [24:20];
  assign func3    = inst [14:12];
  assign func7    = inst [31:25];
  assign rd_addr  = inst [11: 7];

  assign rd_w_en  = i_type|r_type|l_type|jal_type|jalr_type|u_type|w_type|csrr;

  wire rw_type;
  wire iw_type;
  assign w_type    = rw_type | iw_type;
  assign r_type   = ((opcode == 7'b0110011)?1'b1:1'b0)|rw_type;
  assign rw_type   = (opcode == 7'b0111011)?1'b1:1'b0;
  assign iw_type   = (opcode == 7'b0011011)?1'b1:1'b0;
  assign i_type   = ((opcode == 7'b0010011)?1'b1:1'b0)|iw_type;
  assign s_type   = (opcode == 7'b0100011)?1'b1:1'b0;
  assign l_type   = (opcode == 7'b0000011)?1'b1:1'b0;
  assign jal_type = (opcode == 7'b1101111)?1'b1:1'b0;
  assign jalr_type= (opcode == 7'b1100111)?1'b1:1'b0;
  assign b_type   = (opcode == 7'b1100011)?1'b1:1'b0;
  assign auipc    = (opcode == 7'b0010111)?1'b1:1'b0;
  assign lui      = (opcode == 7'b0110111)?1'b1:1'b0;
  assign m_type   = (opcode == 7'b0110011&func7==7'b0000001)?1'b1:1'b0;


  assign sub_sra = (((opcode==7'b0111011)||(opcode == 7'b0110011))&&(func7==7'b0100000)&&(func3==3'b0))||(((opcode==7'b0010011)||(opcode==7'b0110011)||(opcode==7'b0111011)||(opcode==7'b0011011))&&(func7==7'b0100000)&&(func3==3'b101));

  assign u_type = auipc | lui;

  //assign alu_op = auipc?4'b0:r_type?{func7[5],func3}:{1'b0,func3};

  wire [3:0] imm_decode_sel;
  assign imm_decode_sel = (i_type|l_type|jalr_type)?4'd1:(s_type?4'd2:(b_type?4'd3:(jal_type?4'd4:(u_type?4'd5:4'b0))));

  assign exu_en = i_type|r_type|b_type|jal_type|jalr_type|u_type;


  assign lsu_en = l_type|s_type;



/*
  assign ii_alu = (opcode==7'b0010011);
  assign ir_alu = (opcode==7'b0110011)&&((func7==7'b0)||(func7==7'b0100000));
  assign i_alu = ir_alu|ii_alu;

  
  assign m_alu = (opcode==7'b0110011)&&(func7==7'b0000001);

  
  assign wi_alu = (opcode==7'b0011011);
  assign wr_alu = (opcode==7'b0111011)&&((func7==7'b0)||(func7==7'b0100000));
  assign w_alu  = wi_alu||wr_alu;


  assign mw_alu= (opcode==7'b0111011)&&(func7==7'b0000001);
  
  wire alu_in0_from_rs0;
  wire alu_in1_from_rs1;

  assign alu_in0_from_rs0 = i_alu|m_alu|w_alu|mw_alu;
  assign alu_in1_from_rs1 = ir_alu|m_alu|wr_alu|mw_alu;
*/
  //assign exu_o_sel = (i_type|r_type|)

  imm_decode imm_decode(
    .imm_i_l_jalr(inst[31:20]),
    .imm_s({inst[31:25],inst[11:7]}),
    .imm_b({inst[31],inst[7],inst[30:25],inst[11:8]}),
    .imm_jal({inst[31],inst[19:12],inst[20],inst[30:21]}),
    .imm_u(inst[31:12]),
    .sel(imm_decode_sel),
    .out(imm_exted)
  );


  assign alu_in1_sel = jal_type|b_type;
  assign alu_in2_sel = (opcode==7'b0010011)|(opcode ==7'b0011011)|jalr_type|jal_type|b_type;

  assign ecall  = (32'b00000000000000000000000001110011==inst)?1'b1:1'b0;
  assign ebreak = (32'b00000000000100000000000001110011==inst)?1'b1:1'b0;
  assign mret   = (32'b00110000001000000000000001110011==inst)?1'b1:1'b0;


  assign csrr = (opcode == 7'b1110011)&&(func3!=3'b000);

  assign csr_addr = inst[31:20];

  assign pri_exu_en = ecall||mret||csrr;


  assign alu_op = auipc?{7'b0100000}:{w_type,i_type,sub|m,sra|m,func3};

  wire sub;
  assign sub = (func3==3'b000)&(func7==7'b0100000)&(opcode==7'b0110011) | (func3==3'b0)&(func7==7'b0100000)&(opcode==7'b0111011) ;
  
  wire sra;
  assign sra = (func3==3'b101)&(func7[6:1]==6'b010000)&((opcode==7'b0110011) | (opcode==7'b0111011)  | (opcode==7'b0010011)  | (opcode==7'b0011011) );
  wire m;
  wire m_w;
  assign m_w = (func7==7'b1)&(opcode==7'b0111011);
  assign m = m_type|m_w;

endmodule
