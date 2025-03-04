#include <common.h>
#include "syscall.h"

size_t fs_lseek(int fd, size_t offset, int whence);
int fs_open(const char *pathname, int flags, int mode);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_read(int fd, void *buf, size_t len);
long int gettimeofday();
int fs_close(int fd);


/*
int sys_write(int fd, void *buf, size_t count) {
  //printf("write\n");
  if(fd==1){
    for(int i = 0;i<count;i++){
      putch(*(char *)(buf+i));
    }
  }
  return count;
}*/

int sys_brk(int  addr){
  //sys_write(1,"sys brk",6);
  return 0;
}

void do_syscall(Context *c) {
  //printf("do system\n");
  uintptr_t a[4];
  a[0] = c->gpr[17];
  a[1] = c->gpr[10];
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //Log("sys call %d",a[0]);
  //Log("sys call %d",a[1]);
  switch (a[0]) {
    case SYS_yield:{ printf(" SYS_yield = %d\n", a[0]); break;}       //GPRX= gpr[10] yong lai fan hun shui jv
    case SYS_exit:{ halt(a[1]); break;}
    case SYS_open:{ c->GPRx = fs_open((char *)a[1],a[2],a[3]); break;}
    case SYS_read:{ c->GPRx = fs_read(a[1],(char *)a[2],a[3]);break;}
    case SYS_write:{ c->GPRx = fs_write(a[1],(void *)a[2],a[3]); break;}
    case SYS_lseek:{ c->GPRx = fs_lseek(a[1],a[2],a[3]);break;}
    case SYS_close:{ c->GPRx = fs_close(a[1]);break;}
    case SYS_brk:{ c->GPRx = 0;break;}
    case SYS_gettimeofday:{c->GPRx = gettimeofday();break;}
    default: panic("Unhandle default syscall ID = %d", a[0]);
  }
}
