#include "svdpi.h"
#include "Vtop_soc__Dpi.h"
#include<fstream>
#include<iostream>
extern char *img_file;
long load_img(char img_file[]);
using namespace std;

extern "C"
void difftest_memcpy(uint64_t addr, void *buf, unsigned long n, bool direction);


class riscv{
  public:
    uint64_t      reg [32] ;
    uint64_t      pc;
    uint32_t      valid;
    uint32_t      incache;
    void set_reg (int addr,uint64_t data){
      this->reg[addr] = data;
    }
    void set_pc(uint32_t pc){
      this->pc = pc;
    }
    riscv(void){
    
    }
    void copy(riscv *obj){
      for(int i = 1 ;i<=32;i++){
        this->reg[i] = obj->reg[i];
      }
      this->pc = obj->pc;
      this->valid = obj->valid;
      this->incache = obj->incache;

    }
};