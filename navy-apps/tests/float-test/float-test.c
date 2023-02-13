#include <stdint.h>
#include <stdio.h>
/*#include <fixedptc.h>*/

#ifdef __ISA_NATIVE__
#error can not support ISA=native
#endif

#define SYS_yield 1
extern int _syscall_(int, uintptr_t, uintptr_t, uintptr_t);

int main() {
	/*fixedpt a = fixedpt_rconst(1.2);*/
	/*fixedpt b = fixedpt_fromint(10);*/
	/*int c = 0;*/
	/*if (b > fixedpt_rconst(7.9)) {*/
	/*c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));*/
	/*}*/
	float a = 1.2;
	float b = 10;
	int c = 0;
	if (b > 7.9) {
		c = (a + 1) * b / 2.3;
	}

	printf("the c=%d\n",c);
	return _syscall_(SYS_yield, 0, 0, 0);
}
