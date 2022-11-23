#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
//static inline uint64_t ind(uintptr_t addr) { return *(volatile uint64_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }



void __am_timer_init();

//void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
//void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
void __am_timer_rtc(AM_TIMER_RTC_T *);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
void __am_gpu_init() {
  int i;
  int w = inl(0xa0000100);  // TODO: get the correct width
  int h = inl(0xa0000100)&0xffff;  // TODO: get the correct height

  printf("am gpu init w is : %d h is :%d\n",inl(0xa0000100)>>16,h);
  uint32_t *fb = (uint32_t *)(uintptr_t)0xa1000000;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(0xa0000104, 1);
}
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = inl(0xa0000100)>>16, .height = inl(0xa0000100)&0xffff,
    .vmemsz = 0
  };
}
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  AM_GPU_CONFIG_T _config = io_read(AM_GPU_CONFIG);
  int w = _config.width;  
  int h = _config.height;  
  //printf("gpu fd %d %d\n",ctl->h,ctl->w);
  for(int i = 0; i < ctl->h; i++){
    for(int j = 0; j < ctl->w; j++){
      if((i + ctl->y < h) && (j + ctl->x < w)){
        outl(0xa1000000+(w*(ctl->y+i)+ctl->x+j)*4,*((uint32_t*)ctl->pixels+i*ctl->w+j));
      }
    }
  }
  if (ctl->sync) {
    outl(0xa0000104, 1);
  }
}
void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}


void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  kbd->keydown = 0;
  kbd->keycode = inl(0xa0000060);
  if((kbd->keycode&0x8000)){
    kbd->keydown = 1;
     kbd->keycode &= 0xfff; 
  }
  else{ 
    kbd->keydown = 0;
  }
}


typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,  
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,
};

static void fail(void *buf) { 
  //panic("access nonexist register"); 
  }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++){
    if (!lut[i]) lut[i] = fail;
  }

  __am_timer_init();
  __am_gpu_init();

  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
