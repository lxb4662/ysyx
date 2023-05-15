#include "mem.h"
#include <stdio.h>
#include "time.h"

#include "vga.h"
static uint8_t pmem[0x8000000] = {};

long long mem_read(long long a, int len){
    long long unsigned int addr = a;
    //printf("mem read\n");

    if( addr >= 0x80000000 && addr<=(0x80000000+0x8000000)){
        addr = addr - 0x80000000;

        switch(len){
            case 1: return pmem[addr];
            case 2: return *((short *)(pmem+addr));
            case 4: {return *((int *)(pmem+addr));}
            case 8: return *((long  *)(pmem+addr));
        }
        return 0;
    }
    if(addr==0xa0000048){
        struct timeval tv;
        gettimeofday(&tv, NULL);
        
        //printf("second: %ld\n", tv.tv_sec); // 秒
        //printf("millisecond: %ld\n", tv.tv_sec * 1000 + tv.tv_usec / 1000); // 毫秒

        uint64_t us = (tv.tv_sec) * 1000000 + tv.tv_usec ;
        //printf("sec: %lld\n",us/1000000);
        return us;
    }
/*
    if((addr>=0xa1000000)&&(addr<=(0xa1000000+400*300))){
      return gmem[addr-0xa1000000];
    }  */
    if((addr==0xa0000100)){
      //printf("get the vgactr[0]\n");
      return (300+(400<<16));
    }  
    if((addr==0xa0000104)){

      return vgtctl[1];
    }
    if(addr == 0xa0000060){
      kbd_update();
      //printf("get kby\b");
      return key_dequeue();
    }
    //printf("mem error\n");
    return 0;
}


int mem_skip (long long int a){
    if((a >= 0x80000000)&&(a<((long long int )0x88000000))){
      return 0;
    }
    else {
      return 1;
    }
}


long long mem_read_inst(long long a, int len){
    if(a < 0x80000000 ){
        return 0;
    }
    a = a - 0x80000000;
    //printf("mem_read addr %x %d\n",a,len);
    switch(len){
        case 1: return pmem[a];
        case 2: return *((short *)(pmem+a));
        case 4: {return *((int *)(pmem+a));}
        case 8: return *((long  *)(pmem+a));
    }
    printf("mem error\n");
    return 0;
}
int mem_write(long long a, int len, long long data){
  unsigned long long int d = data;
  unsigned long long int addr = a;
  //printf("mem write\n");
  if(addr>=0x80000000&& addr<=(0x80000000+0x8000000)){
    for (int i = 0;i<len;i++){
        pmem[a+i-0x80000000] = d;
        d = d>>8;
    }
    return 0;
  }

  if(addr==0xa00003f8){
    printf("%c",(char)data);
  }
  if((addr>=0xa1000000)&&(addr<=(0xa1000000+400*300*4))){
    for (int i = 0;i<len;i++){
        gmem[addr+i-0xa1000000] = d;
        d = d>>8;
    }
    return 0;
  }  
  if((addr==0xa0000104)){
      vgtctl[1] = data;
      if(data==1){
        update_screen();
        //printf("update screen\n");
      }
  }
  //printf("mem write %llx %d %llx \n",a,len,data);

  return 1;
}

long load_img(char img_file[]) {
  if (img_file == NULL) {
    
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  //Assert(fp, "Can not open '%s'", img_file);
  printf("loading image %s\n",img_file);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);

  fclose(fp);
  
  difftest_memcpy(0x80000000, pmem, size, 1);
  /*
for(int i = 0 ;i<=100;i++){
    printf("inst %d\tis %2x %2x %2x %2x\n",i,pmem[i*4+3],pmem[i*4+2],pmem[i*4+1],pmem[i*4+0]);
}*/
  init_screen() ;
  return size;
}

uint64_t npc_reg [32];
uint32_t npc_write;
uint32_t npc_pc;
uint32_t npc_valid;

void reg_cpy(int adder, int  a,int b){
  //printf("npc reg %d : %lx\n",1,a);
  npc_reg [adder] = (long long int )((unsigned int)b )+((long long int )(a)<<32) ;
  //printf("npc sync reg %d : %x%x\n",adder,a,b);
}
extern riscv npc;
void status_cpy(int addr, int a1, int a0, int write, int pc, int incache,int valid)
{

  
  npc.valid = valid;
  if(valid){
    if(write){
      npc.reg [addr] = (long long int )((unsigned int)a1 )+((long long int )(a0)<<32) ; 
    }
    npc.pc = (unsigned int)pc;
    npc.incache = incache;
    //printf("pc:%8x,addr:%2d,data:%16llx,write:%1d,incache:%d\n",npc.pc,addr,npc.reg [addr],write,incache);
  }
  
}



void mtrace(int pc,int addr, int a0, int a1, int len){
		/*fstream f;
	//追加写入,在原来基础上加了ios::app 
	  f.open("data.txt",ios::out|ios::app);
	//输入你想写入的内容 
	  f<<"pc:"<<hex<<pc<<"\taddr"<<hex<<addr<<"\tdata:"<<hex<<a1<<hex<<a0<<"\tlen:"<<len<<endl;
    f.close();*/
    
}