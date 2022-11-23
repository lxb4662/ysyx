#include "svdpi.h"
#include "Vtop__Dpi.h"

extern char *img_file;
long load_img();


extern "C"
void difftest_memcpy(uint64_t addr, void *buf, unsigned long n, bool direction);
