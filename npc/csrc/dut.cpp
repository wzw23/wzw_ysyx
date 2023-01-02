//#include "iostream"
#include "iostream"
#include "common.h"
#include <dlfcn.h>
#include <assert.h>

//void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
//void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
typedef void (*ref_difftest_memcpy_func)(uint64_t addr, void *buf, size_t n, bool direction) ;
ref_difftest_memcpy_func ref_difftest_memcpy=NULL;

//void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
typedef void (*ref_difftest_regcpy_func)(void *dut, bool direction);
ref_difftest_regcpy_func ref_difftest_regcpy=NULL;
//void (*ref_difftest_exec)(uint64_t n) = NULL;
typedef void (*ref_difftest_exec_func)(uint64_t n);
ref_difftest_exec_func ref_difftest_exec=NULL;
//void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size) {
	printf("achieve here and ref_so_file=%s\n",ref_so_file);
	assert(ref_so_file != NULL);

	void *handle;
	printf("achieve here and ref_so_file=%s\n",ref_so_file);
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);

	ref_difftest_memcpy =(ref_difftest_memcpy_func) dlsym(handle, "difftest_memcpy");
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (ref_difftest_regcpy_func)dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (ref_difftest_exec_func)dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);
	dlclose(handle);

	/*ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");*/
	/*assert(ref_difftest_raise_intr);*/

 /* void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");*/
	/*assert(ref_difftest_init);*/

	//printf("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
	printf("The result of every instruction will be compared with %s. "
			"This will help you a lot for debugging, but also significantly reduce the performance. "
			"If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

	//ref_difftest_init(port);
	//ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	//ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	
}
