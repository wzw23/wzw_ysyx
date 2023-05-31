#include <stdint.h>
#include <stdio.h>
#include <assert.h>
/*#include <fixedptc.h>*/
#include "../../../navy-apps/libs/libfixedptc/include/fixedptc.h"
typedef fixedpt             FLOAT, *LPFLOAT;
/*#ifdef __ISA_NATIVE__*/
/*#error can not support ISA=native*/
/*#endif*/

/*#define SYS_yield 1*/
/*extern int _syscall_(int, uintptr_t, uintptr_t, uintptr_t);*/

int main() {
	/*float a_test=1.2;*/
	FLOAT a = fixedpt_rconst(1.2);
	/*printf("a=%d\n",fixedpt_rconst(1.2));*/
	/*printf("tfixedpt_mul(fixedpt_fromint(i),a)=%d\n",fixedpt_mul(a,5));*/
	/*FLOAT b = fixedpt_fromint(10);*/
	for(int i=0;i<100;i++){
		/*FLOAT b = fixedpt_fromint(10);*/
		if(i==5)
			continue;
		int x=1.2*i;
		/*printf("2^8=%d,teset=%d\n",FIXEDPT_ONE,2^8);*/
		printf("i=%d,x=%d,test=%d	fixedpt_mul(fixedpt_fromint(i),a)=%d\n ",i,x,fixedpt_toint(fixedpt_mul(fixedpt_fromint(i),a)),fixedpt_mul(fixedpt_fromint(i),a));
		assert(fixedpt_toint(fixedpt_muli(a,i))==fixedpt_toint(fixedpt_mul(fixedpt_fromint(i),a)));
		if(i==0)
			continue;
		assert(fixedpt_toint(fixedpt_divi(a,i))==fixedpt_toint(fixedpt_div(a,fixedpt_fromint(i))));
		/*printf("firstdiv=%d seconddiv=%d\n",fixedpt_toint(fixedpt_divi(a,i)),fixedpt_toint(fixedpt_div(a,fixedpt_fromint(i))));*/
		printf("i=%d floor=%d ,ceil=%d another_ceil=%d -floor=%d -ceil=%d\n",i,fixedpt_toint(fixedpt_floor(fixedpt_rconst(i+0.2))),fixedpt_toint(fixedpt_ceil(fixedpt_rconst(i+0.2))),fixedpt_toint(fixedpt_ceil(fixedpt_rconst(i))),fixedpt_toint(fixedpt_floor(fixedpt_rconst(-i-0.2))),fixedpt_toint(fixedpt_ceil(fixedpt_rconst(-i-0.2))));
		assert(fixedpt_toint(fixedpt_floor(fixedpt_rconst(i+0.2)))==i);
		assert(fixedpt_toint(fixedpt_ceil(fixedpt_rconst(i+0.2)))==i+1);
		assert(fixedpt_toint(fixedpt_floor(fixedpt_rconst(-i-0.2)))==-i-1);
		assert(fixedpt_toint(fixedpt_ceil(fixedpt_rconst(-i-0.2)))==-i);
		assert(fixedpt_toint(fixedpt_ceil(fixedpt_rconst(-i)))==-i);
		assert(fixedpt_toint(fixedpt_ceil(fixedpt_rconst(i)))==i);
		assert(fixedpt_toint(fixedpt_floor(fixedpt_rconst(i)))==i);
	}
	/*int c = 0;*/
	/*if (b > fixedpt_rconst(7.9)) {*/
	/*c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));*/
	/*}*/
	/*float a = 1.2;*/
	/*float b = 10;*/
	/*int c = 0;*/
	/*if (b > 7.9) {*/
		/*c = (a + 1) * b / 2.3;*/
	/*}*/

	/*printf("the c=%d\n",c);*/
	printf("get end\n");

	return 0;
}
