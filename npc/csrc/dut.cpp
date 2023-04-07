//#include "iostream"
#include "iostream"
#include "common.h"
#include <dlfcn.h>
#include <assert.h>
extern uint64_t upc;
extern uint64_t *cpu_gpr; 
extern uint64_t *cpu_csr; 
extern long img_size;
extern int skip_test;
//void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
//void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
/*bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {*/
	/*for(int i=0;i<32;i++){	*/
		/*if(ref_r->gpr[i]!=cpu.gpr[i])	*/
			/*return false;*/
	/*}*/
	/*return true;*/
/*}*/
bool checkregs(uint64_t *ref_r, uint64_t *cpu_gpr) {
 /* for(int i=0;i<32;i++)*/
		/*printf("ref[%d]=%lx\n",i,ref_r[i]);*/
	for(int i=0;i<32;i++){	
		if(ref_r[i]!=cpu_gpr[i])	
			return false;
	}
	if(ref_r[32]!=upc){
		printf("ref_r->pc=%lx\n",ref_r[32]);
		printf("upc=%lx\n",upc);
		return false;}
	return true;
}
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
	assert(ref_so_file != NULL);

	void *handle;
	printf("achieve here and ref_so_file=%s\n",ref_so_file);
	printf("achieve here and img_size=%ld\n",img_size);
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);

	ref_difftest_memcpy =(ref_difftest_memcpy_func) dlsym(handle, "difftest_memcpy");
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (ref_difftest_regcpy_func)dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (ref_difftest_exec_func)dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);
	

	/*ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");*/
	/*assert(ref_difftest_raise_intr);*/

 /* void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");*/
	/*assert(ref_difftest_init);*/

	//printf("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
	printf("The result of every instruction will be compared with %s. "
			"This will help you a lot for debugging, but also significantly reduce the performance. "
			"If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

	//ref_difftest_init(port);
	ref_difftest_memcpy(CONFIG_BASE, guest_to_host(CONFIG_BASE), img_size, DIFFTEST_TO_REF);
///////
	uint64_t cpu_gpr_c[37];
	for(int i=0;i<32;i++)
	{
		cpu_gpr_c[i]=cpu_gpr[i];
	}
	cpu_gpr_c[32]=upc;
	cpu_gpr_c[33]=cpu_csr[0];
	cpu_gpr_c[34]=cpu_csr[1];
	cpu_gpr_c[35]=cpu_csr[2];
	cpu_gpr_c[36]=cpu_csr[3];
/////
	ref_difftest_regcpy(cpu_gpr_c, DIFFTEST_TO_REF);
	
}
int difftest_step() {
		printf("test here and skip_test=%d and pc=%lx\n",skip_test,upc);
		uint64_t ref_r[33];
		//////为了便于向ref复制pc而设置
		uint64_t cpu_gpr_c[33];
		for(int i=0;i<32;i++)
		{
			cpu_gpr_c[i]=cpu_gpr[i];
		}
		cpu_gpr_c[32]=upc;
		//////
		if(skip_test==1){
		ref_difftest_regcpy(cpu_gpr_c, DIFFTEST_TO_REF);
		skip_test=0;	
		return 1;
		}
		else{
		ref_difftest_exec(1);
		ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
		int check=checkregs(ref_r, cpu_gpr);
	
		if(check==0){
			for(int i=0;i<32;i++){
			  printf("refreg[%d]=%lx\n",i,ref_r[i]);	
				printf("cpureg[%d]=%lx\n",i,cpu_gpr[i]);	

		}
		}
		return check;
		}
}
