/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_B, TYPE_J, TYPE_R,TYPE_SH,TYPE_Z,
  TYPE_N, // none
};


static word_t CSR_read(word_t addr){
  //printf("csr_read_f %lx\n",addr);
  word_t re = 0;
  if(addr == 0x341){
    re = cpu.mepc;
  }
  if(addr == 0x342){
    re = cpu.mcause;//printf("mcsuse %ld",re);
  }
  if(addr == 0x300){
    re = cpu.mstatus;
    //printf("mstatus %lx",re);
  }
  if(addr == 0x305){
    re = cpu.mtvec;
  }

  return re;

}
static void CSR_write(word_t addr ,word_t data){

  //printf("csr_write_f%lx\n",addr);
  if(addr == 0x341){
    cpu.mepc = data;
    //printf("CSR write mepc is %lx\n",cpu.mepc);
  }
  
  if(addr == 0x342){
    cpu.mcause = data;
  }
  if(addr == 0x300){
    cpu.mstatus = data;
  }
  if(addr == 0x305){
    cpu.mtvec = data;
    //printf("mtvec = %lx\n",cpu.mtvec);
  }

}


#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7)<<11| BITS(i, 30, 25)<<5| BITS(i, 11, 8)<<1; } while(0)
#define immJ() do { *imm = ((SEXT(BITS(i, 31,31), 1) << 20)| BITS(i, 19, 12) <<12 | BITS(i, 20, 20)<<11| BITS(i, 30, 21)<<1)|0; } while(0)
#define immSH()do { *imm = SEXT(BITS(i, 25, 20), 6); } while(0)



#define csr() do { *csr = SEXT(BITS(i, 31, 20), 12); } while(0)

static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm,word_t * csr, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *dest = rd;
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_SH:src1R();          immSH(); break;
    case TYPE_Z:src1R();           csr(); break;
  }
}

static int decode_exec(Decode *s ,word_t inst_info[]) {
  int dest = 0;
  word_t src1 = 0, src2 = 0, imm = 0, csr = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) {   decode_operand(s, &dest, &src1, &src2, &imm, &csr, concat(TYPE_, type));   __VA_ARGS__ ; }

  INSTPAT_START();

  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = imm);
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + imm);  //

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jar    , J, s->dnpc = s->pc + imm; R(dest) =s->snpc;);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, s->dnpc   = (src1+imm)&(long long int)~1 ;R(dest) =s->snpc;);

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc   = (src1==src2)?(imm+s->pc):s->pc+4;);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc   = (src1!=src2)?(imm+s->pc):s->pc+4;);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc   = ((long long int)src1<(long long int)src2 )?(imm+s->pc):s->pc+4;);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc   = ((long long unsigned int)src1< (long long unsigned int)src2 )?(imm+s->pc):s->pc+4;);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc   = ((long long unsigned int)src1>=(long long unsigned int)src2 )?(imm+s->pc):s->pc+4;);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc   =  ((sword_t)src1>=(sword_t)src2 )?(imm+s->pc):s->pc+4;);

  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest)   = (unsigned int)Mr(src1 + imm, 4););
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest)   = (int)Mr(src1 + imm, 4););
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest)   = (short int)(Mr(src1 + imm, 2)););
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest)   = Mr(src1 + imm, 1)&0xff);
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest)   = (char)(Mr(src1 + imm, 1)));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest)   = Mr(src1 + imm, 2)&0xffff);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest)   = Mr(src1 + imm, 8));

  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = (long long int )src1 + (long long int )src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = (long long int )src1 - (long long int )src2);
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = (long long unsigned int )src1 >> src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = (long long unsigned int)src1 << src2);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2;);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = (long long int )src1 | (long long int )src2);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (long long unsigned int)src1 < (long long unsigned int)src2?1:0);
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = (long long int)src1 < (long long int )src2?1:0);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = (long long int)src1 & (long long int )src2);
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(dest) = (long long int )src1 >> (src2&0b111111));  //suan shu 


  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = (int)(sword_t)((int)src1 + (int)src2));
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = (int)((unsigned int)src1 << (int)src2));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = (int)(sword_t)((int)(src1) >> (int)(src2)));  //suan shu 
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = (int)(sword_t)((unsigned int)(src1)>> (int)(src2)));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = (int)(sword_t)((int)src1 - (int)src2));

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = (sword_t )src1 * (sword_t )src2);
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(dest) = (sword_t )src1 / (sword_t )src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = (word_t)src1 / (word_t)src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(dest) = (sword_t )src1 % abs((sword_t )src2));
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = (word_t )src1 % abs((word_t )src2));

  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw   , R, R(dest) = (unsigned int )src1 / (unsigned int )src2);
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = (int )src1 * (int )src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = (int )src1 % abs((int )src2));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = (int )src1 / (int )src2);
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , R, R(dest) = (unsigned int  )src1 % abs((unsigned int  )src2));

  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(dest) = (signed)src1 < (signed)imm);
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + imm);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (unsigned )src1 < (unsigned)imm?1:0);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = (src1|imm));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", ani    , I, R(dest) = (src1&imm));
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = (src1^imm));


  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = (word_t)src1 << (imm&0b111111));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = (word_t)src1 >> (imm&0b111111));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (sword_t)src1 >> (int)(imm&0b111111)); //suan shu 

  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = (int)((int)src1 + imm));
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = (int )((int)src1 << imm));
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = (int)((int )src1 >> (imm&0b11111))); //suan shu 
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = (int )((unsigned int)src1 >> (imm&0b11111)));

  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2));     ///


  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , Z, R(dest) = CSR_read(csr);    CSR_write(csr,src1); );
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , Z, R(dest) = CSR_read(csr);    CSR_write(csr,(~src1)&(CSR_read(csr))); );
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , Z, R(dest) = CSR_read(csr);    CSR_write(csr,src1|(CSR_read(csr))); );

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = cpu.mepc);
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(11,s->pc));
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  inst_info[0] = src1;
  inst_info[1] = src2;
  inst_info[2] = imm;
  inst_info[3] = s->pc;
  return 0;
}

int isa_exec_once(Decode *s,word_t inst_info[]) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s,inst_info);
}
