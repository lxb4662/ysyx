#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;


//  return ms
uint32_t NDL_GetTicks() {
  struct timeval tv;      //timeval yong lai fan hui miao he wei miao ,di er ge can shu bu yong guan 
  gettimeofday(&tv, NULL);
  //printf("NDL_get ticks down\n");
  return tv.tv_usec / 1000;
}

int NDL_PollEvent(char *buf, int len) {
  FILE* fp = fopen("/dev/events", "r");
  memset(buf, 0, len);
  fgets(buf, len, fp);      //fgets cong wen jian zong get len ge zi jie 
  buf[strlen(buf) - 1] = '\0';     
  fclose(fp);
  return strlen(buf);
}

void NDL_OpenCanvas(int *w, int *h) {
  FILE* fp = fopen("/proc/dispinfo", "r");

  fscanf(fp, "WIDTH: %d\nHEIGHT: %d", &screen_w, &screen_h);
  // printf("%d %d\n", screen_w, screen_h);
  fclose(fp);
  //ru guo da kai de hua bu da xiao wei 0 ,0  ze jiang hua bu da xiao she zhi wei ping mu da xiao 
  if(*w == 0 && *h == 0){
    *w = screen_w; *h = screen_h;
  }
  //printf("w%d h%d\n",screen_w,screen_h);
  /*
  if (getenv("NWM_APP")) {
    printf("NWM_APP\n");
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }*/
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  //wei shen me bu yong fopen fseek fwrite ? yin wei GPU de di zhi ying she you dian qi guai 
  int fd = open("/dev/fb",0,0);
  //for(int i = 0; i < h; i++){
  int a[2];
  a[0] = w;
  a[1] = h;
  lseek(fd, (y*screen_w+x), SEEK_SET);
  write(fd, pixels, a);
  //}
  close(fd);
}
/*
static uint32_t screen[800][800];

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  FILE* fp = fopen("/dev/fb", "w");
  int fd = fileno(fp);
  for(int i = 0; i < h; i++){
    // printf("line %d %d %x\n", i, (y+i)*screen_w+x, *pixels+ i*w);
    lseek(fd, ((y+i)*screen_w+x), SEEK_SET);
    // printf("seek done\n");
    write(fd, pixels + i * w, w);
    for(int j = 0; j < w; j++) screen[y+i][x+j] = *(pixels+(i*w+j));
  }

  // printf("\033[0;0H");
  // for (int y = 0; y < screen_h; y += 4) {
  //   lseek(fd, y * screen_w, SEEK_SET);
  //   for (int x = 0; x < screen_w; x += 2) {
  //     uint32_t color = screen[y][x];
  //     const char *list = "o. *O0@#&+=cxua$";
  //     char c = list[color / 0x111111u];
  //     putchar(c);
  //   }
  //   putchar('\n');
  // }

  fclose(fp);
}
*/
void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
