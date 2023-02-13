#include <NDL.h>
#include <SDL.h>
//wzw add		
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
	char buf[64];
	if (NDL_PollEvent(buf, sizeof(buf))) {
		  char str[64];
			char *first,*second;
			strcpy(str,buf);
      /*printf("%s", str);*/
			first=strtok(str," ");
			/*printf("first=%s\n",first);*/
			second=strtok(NULL,"\n");
			/*printf("second=%s\n",second);*/
			if(strcmp(first,"kd")==0)
				event->type=SDL_KEYDOWN;
			else if(strcmp(first,"ku")==0)
				event->type=SDL_KEYUP;
			else
				event->type=NULL;
			if(strcmp(second,"J")==0)
				event->key.keysym.sym=SDLK_J;
			else  if(strcmp(second,"K")==0)
				event->key.keysym.sym=SDLK_K;
			else 
				event->key.keysym.sym=NULL;

    }
	else{
		event->type=NULL;
		event->key.keysym.sym=NULL;
	}
	return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
