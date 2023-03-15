#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
	printf("open file %s\n",filename);
	FILE *fp = fopen(filename, "r");
	/*if (!fp) return NULL;*/
	assert(fp);
	fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
	printf("size=%d\n",size);
	char *buf = malloc(size * sizeof(char));
	fseek(fp, 0, SEEK_SET);
	assert(1==fread(buf,size,1,fp));
	SDL_Surface* fh;
	fh=STBIMG_LoadFromMemory(buf,size);
	fclose(fp);
	printf("finish file open\n");
	return fh;
  /*return NULL;*/
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
