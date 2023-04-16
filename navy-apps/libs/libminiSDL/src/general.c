#include <NDL.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
uint8_t* keystate = NULL;
int screen_width = 0, screen_height = 0;
int SDL_Init(uint32_t flags) { 
  printf("sdl init begin\n");
  keystate = (uint8_t*)malloc(256*sizeof(uint8_t));
  printf("sdl init malloc\n");
  // printf("before memset key_addr: %lx\n", (uintptr_t)keystate);
  memset(keystate, 0, sizeof(keystate));

  printf("sdl init memset\n");
  // printf("after memset\n");
  FILE* fp = fopen("/proc/dispinfo", "r");
  printf("sdl init /proc/dispinfo\n");
  fscanf(fp, "WIDTH: %d\nHEIGHT: %d", &screen_width, &screen_height);
  printf("sdl init /fscanf\n");
  fclose(fp);
  printf("close fp\n");
  return NDL_Init(flags);
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  return -1;
}

int SDL_ShowCursor(int toggle) {
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
}
