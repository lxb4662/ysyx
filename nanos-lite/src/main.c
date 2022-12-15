#include <common.h>

void init_mm(void);
void init_device(void);
void init_ramdisk(void);
void init_irq(void);
void init_fs(void);
void init_proc(void);
#define HAS_CTE
int main() {
  extern const char logo[];
  printf("%s", logo);
  Log("'Hello World!' from Nanos-lite");
  Log("Build time: %s, %s", __TIME__, __DATE__);

  init_mm();
  printf("init mm is done\n");
  init_device();
  printf("init ramdisk is done\n");
  init_ramdisk();
  printf("init ramdisk is done\n");
  init_irq();

  printf("init irq is done\n");
  init_fs();

  printf("init fs is done\n");
  init_proc();
  
  Log("Finish initialization");

#ifdef HAS_CTE
  yield();
#endif

  panic("Should not reach here");
}
