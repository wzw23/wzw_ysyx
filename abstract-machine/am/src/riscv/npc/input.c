#include <am.h>

#include "npc.h"
/*void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {*/
  /*kbd->keydown = 0;*/
  /*kbd->keycode = AM_KEY_NONE;*/
/*}*/
#define KEYDOWN_MASK 0x8000
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	int scancode=inl(KBD_ADDR);
	int mask=scancode&(0x8000);
	kbd->keydown = (mask==0x8000);
	kbd->keycode = (scancode)&0xff;
}
