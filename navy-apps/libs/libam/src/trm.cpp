#include <am.h>
#include<klib-macros.h>
#include<stdio.h>
#include<stdlib.h>

//extern char _heap_start;
extern char _end;
int main(const char *args);

//Area heap = RANGE(&_heap_start, PMEM_END);
//Area heap = RANGE(&_end, &_end+1024*1024);
Area heap;
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

//Area heap=RANGE(&(_end), (void *)(malloc(220)+220));

void putch(char ch) {
	putchar(ch);
}

void halt(int code) {
	 const char *fmt = "Exit code = 40h\n";
  for (const char *p = fmt; *p; p++) {
    char ch = *p;
    if (ch == '0' || ch == '4') {
      ch = "0123456789abcdef"[(code >> (ch - '0')) & 0xf];
    }
    putch(ch);
  }
	exit(code);
}
/*//wzw add*/
/*void trm_init() {*/
	/*printf("get init\n");*/
  /*int ret = main(mainargs);*/
  /*halt(ret);*/
/*}*/
