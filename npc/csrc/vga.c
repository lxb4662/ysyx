#include <SDL2/SDL.h>
//#include "vga.h"
#define SCREEN_W 400
#define SCREEN_H 300
extern int vgtctl[2];
extern char gmem[300*400*4];
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;
static void init_keymap() ;
void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-Npc", "riscv64");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(400,300,0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STATIC, 400, 300);

   init_keymap() ;
}

 void update_screen() {
  SDL_UpdateTexture(texture, NULL, gmem, 400 * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {

  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register

  if(vgtctl[1]){
    //printf("update screen\n");
    update_screen();
    vgtctl[1]=0;
  }
}


#define MAP(c, f) c(f)

#define _KEYS(f) \
  f(ESCAPE) f(F1) f(F2) f(F3) f(F4) f(F5) f(F6) f(F7) f(F8) f(F9) f(F10) f(F11) f(F12) \
f(GRAVE) f(1) f(2) f(3) f(4) f(5) f(6) f(7) f(8) f(9) f(0) f(MINUS) f(EQUALS) f(BACKSPACE) \
f(TAB) f(Q) f(W) f(E) f(R) f(T) f(Y) f(U) f(I) f(O) f(P) f(LEFTBRACKET) f(RIGHTBRACKET) f(BACKSLASH) \
f(CAPSLOCK) f(A) f(S) f(D) f(F) f(G) f(H) f(J) f(K) f(L) f(SEMICOLON) f(APOSTROPHE) f(RETURN) \
f(LSHIFT) f(Z) f(X) f(C) f(V) f(B) f(N) f(M) f(COMMA) f(PERIOD) f(SLASH) f(RSHIFT) \
f(LCTRL) f(APPLICATION) f(LALT) f(SPACE) f(RALT) f(RCTRL) \
f(UP) f(DOWN) f(LEFT) f(RIGHT) f(INSERT) f(DELETE) f(HOME) f(END) f(PAGEUP) f(PAGEDOWN)

#define _KEY_NAME(k) _KEY_##k,

enum {
  _KEY_NONE = 0,
  MAP(_KEYS, _KEY_NAME)
};

#define concat(x, y) concat_temp(x, y)
#define concat_temp(x, y) x ## y


#define SDL_KEYMAP(k) keymap[concat(SDL_SCANCODE_, k)] = concat(_KEY_, k);
static uint32_t keymap[256] = {};

static void init_keymap() {
  MAP(_KEYS, SDL_KEYMAP)
}

#define KEY_QUEUE_LEN 1024
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_f = 0, key_r = 0;

#define KEYDOWN_MASK 0x8000

static void key_enqueue(uint32_t am_scancode) {
  key_queue[key_r] = am_scancode;
  key_r = (key_r + 1) % KEY_QUEUE_LEN;
  //Assert(key_r != key_f, "key queue overflow!");
}

uint32_t key_dequeue() {
  uint32_t key = _KEY_NONE;
  if (key_f != key_r) {
    key = key_queue[key_f];
    key_f = (key_f + 1) % KEY_QUEUE_LEN;
  }
  return key;
}

void send_key(uint8_t scancode, bool is_keydown) {
  //key_enqueue(scancode);
  if (keymap[scancode] != _KEY_NONE) {
    uint32_t am_scancode = keymap[scancode] | (is_keydown ? KEYDOWN_MASK : 0);
    //printf("am scancode %x\n",am_scancode);
    key_enqueue(am_scancode);
  }
  else {
    printf("KEY NONE %d\n",scancode );
  }
}

void kbd_update() {

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        //printf("scan key code %d\n",k);
        send_key(k, is_keydown);
        break;
      }

      default: break;
    }
  }
}
