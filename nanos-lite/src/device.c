#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for(int i = 0;i<len;i--){
    putch(*(char *)(buf+i));
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T keyboard = io_read(AM_INPUT_KEYBRD);
  if(keyboard.keycode == AM_KEY_NONE) {
    sprintf(buf, "\n");
    return 1;
  }
  if(keyboard.keydown) {
    sprintf(buf, "kd %s\n", keyname[keyboard.keycode]);
  }
  else sprintf(buf, "ku %s\n", keyname[keyboard.keycode]);
  return strlen(buf);
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int w,h;
  AM_GPU_CONFIG_T gpu_cfg = io_read(AM_GPU_CONFIG);
  w = gpu_cfg.width;
  h = gpu_cfg.height;
  sprintf(buf, "WIDTH: %d\nHEIGHT: %d", w, h);
  return len;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  // yield();
  AM_GPU_CONFIG_T _config = io_read(AM_GPU_CONFIG);
  
  int x = (offset) % _config.width;
  int y = (offset) / _config.width;

  assert(offset + len <= _config.width * _config.height);
  io_write(AM_GPU_FBDRAW, x, y, (void*)buf, len, 1, true);

  return len;
}
 long long gettimeofday(){
  return io_read(AM_TIMER_UPTIME).us;
 }

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
