#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

#define keyname(k) #k,

#define ARRLEN(arr) (int)((sizeof(arr)) / sizeof(arr[0]))
static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

uint8_t keystate[133];
int SDL_PollEvent(SDL_Event *ev) {
  char buf[100];
  // printf("进入SDL_PollEvent\n");
  if(NDL_PollEvent((buf), ARRLEN(buf)) == 0) {
    return 0;
  }
  char keybuf[10];
  char keydown;

  sscanf(buf, "k%c %s\n",&keydown,keybuf);
  switch(keydown){
    case 'd': ev->type = SDL_KEYDOWN; ev->key.type = SDL_KEYDOWN; break;
    case 'u': ev->type = SDL_KEYUP; ev->key.type = SDL_KEYUP; break;
    default : assert(0);
  }
  for(int i = 0; i < ARRLEN(keyname); i++) {
    if(strcmp(keybuf, keyname[i]) == 0){
      ev->key.keysym.sym = i;
      // printf("SDL_PollEvent get: %s\n",keybuf);
      // update keystate
      if(ev->type == SDL_KEYDOWN) {
        keystate[i] = 1;
      }
      else if(ev->type == SDL_KEYUP) {
        keystate[i] = 0;
      }
        break;//结束循环
    }
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {

  char buf[30];
  while(NDL_PollEvent(buf, 30) == 0);
  char keybuf[10];
  char keydown;
  sscanf(buf, "k%c %s\n",&keydown,keybuf);
  switch(keydown){
    case 'd': event->type = SDL_KEYDOWN; event->key.type = SDL_KEYDOWN; break;
    case 'u': event->type = SDL_KEYUP; event->key.type = SDL_KEYUP; break;
    default : assert(0);
  }
    for(int i=0; i < 82; i++){
      if(strcmp(keybuf, keyname[i]) == 0){
        event->key.keysym.sym = i;
        // update keystate
        if(event->type == SDL_KEYDOWN) keystate[i] = 1;
        else if(event->type == SDL_KEYUP) keystate[i] = 0;
        break;
      }
    }
  // printf("---%d\n",event->key.keysym.sym);
  // printf("---%d\n", event->key.type);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
