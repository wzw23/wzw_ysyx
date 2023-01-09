#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	int scancode=inl(KBD_ADDR);
	int mask=scancode&(0x8000);
	/*int code=scancode&(0xffffefff);*/
	kbd->keydown = (mask==0x8000);
  /*kbd->keycode = code;*/
  /*kbd->keycode = code;*/
  /*kbd->keydown = 0;*/
	kbd->keycode = (scancode)&0xff;
}
