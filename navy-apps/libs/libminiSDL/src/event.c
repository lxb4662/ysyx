#include <NDL.h>
#include <SDL.h>

int strcmp(const char *s1, const char *s2);
#define keyname(k) #k,
extern uint8_t* keystate;
static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {  
  char buf [128];
  NDL_PollEvent(buf, sizeof(buf)-1);
  //printf("sdl poll event %s\n",buf);
  if(buf[0]=='k'){
    if(buf[1]=='d'){
      //printf("SDL key down %c \n",buf[3]);
      ev->type = SDL_KEYDOWN;
      for(int i = 0;i < sizeof(keyname)/sizeof(char *);i++){
        if(strcmp(keyname[i],buf+3)==0){
          ev->key.keysym.sym = i;
          keystate[i] = 1;
      }
    }
      }
    if(buf[1]=='u'){
      //printf("SDL key up %c \n",buf[3]);
      ev->type = SDL_KEYUP;   
      for(int i = 0;i < sizeof(keyname)/sizeof(char *);i++){
        if(0==strcmp(keyname[i],&buf[3])){
          ev->key.keysym.sym = i;    
          keystate[i] = 0;     
        }
      }
    }

  return 1;
  } 
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf [128];


  while(!NDL_PollEvent(buf, sizeof(buf)-1)) ;

  if(buf[0]=='k'){
    if(buf[1]=='d'){
      event->type = SDL_KEYDOWN;
      //event->key.type = SDL_KEYDOWN;
      for(int i = 0;i < sizeof(keyname)/sizeof(char *);i++){
        //printf("%d",strcmp(keyname[i],buf+3));
        if(strcmp(keyname[i],&buf[3])==0){
          event->key.keysym.sym = i;
      }
    }
    if(buf[1]=='u'){
      
      event->type = SDL_KEYUP;
      //event->key.type = SDL_KEYUP;      
      for(int i = 0;i < sizeof(keyname)/sizeof(char *);i++){
        if(0==strcmp(keyname[i],&buf[3])){
          event->key.keysym.sym = i;         // printf("00***********\n");
        }
      }
    }

  }
  return 1;
}
    return 0;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return keystate;
}
