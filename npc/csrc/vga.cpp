#include<stdio.h>
#include<stdlib.h>
#include <SDL2/SDL.h>
//#include <SDL.h>
#define SCREEN_W 400
#define SCREEN_H 300
#define str_temp(x) #x
#define str(x) str_temp(x)
//static void *vmem = NULL;
static int update=0;
extern void host_write(void *addr, int len, uint64_t data);
static void *vmem = NULL;
//static uint8_t *vmem = NULL;
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;
void init_screen(){
	SDL_Window *window = NULL;
	char title[128];
	sprintf(title, "%s-NEMU", str(__GUEST_ISA__));
	SDL_Init(SDL_INIT_VIDEO);
	SDL_CreateWindowAndRenderer(
			SCREEN_W*2,
			SCREEN_H*2,
			0, &window, &renderer);
	SDL_SetWindowTitle(window, title);
	texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
	//wzw add
	printf("初始化\n");
	vmem=malloc(SCREEN_W*SCREEN_H*sizeof(uint32_t));
}
void update_screen() {
	static int first=0;
	if(update==1||(first==0)){
		if(first==0)
			first=1;
		//printf("update_screen\n");
		SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
		//printf("update_screen1\n");
		SDL_RenderClear(renderer);
		//printf("update_screen2\n");
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		//printf("update_screen3\n");
		SDL_RenderPresent(renderer);
		//printf("finish use update_screen\n");
	}
	//update=0;
	}
uint32_t width_height(){
	//printf("use width_height\n");
	return (SCREEN_W<<16)|SCREEN_H;
}
void update_vmem(long long waddr, long long wdata,int len){
	//printf("the change addr=%lx wdata=%ld\n",(waddr-0xa1000000),wdata);
	//*((uint8_t *)vmem+waddr-0xa1000000)=wdata;
	host_write((uint8_t *)vmem+(waddr-0xa1000000),len,wdata);
	//printf("not change vmem test\n");
}
void c_update(){
	update=1;
	return;
}
