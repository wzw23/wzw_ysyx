#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
# define EXPECT_TYPE EM_X86_64 
#elif defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV 
#else
# error Unsupported ISA
#endif


extern size_t get_ramdisk_size();
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern uint8_t ramdisk_start;
static uintptr_t loader(PCB *pcb, const char *filename) {
	Elf64_Ehdr elf_head;
	ramdisk_read(&elf_head,0,sizeof(Elf64_Ehdr));
	/*printf("length=%d e_ident=%lx",elf_head.e_phnum,*(elf_head.e_ident));*/
	assert((elf_head.e_ident[0]==0x7f)&&(elf_head.e_ident[1]==0x45)&&(elf_head.e_ident[2]==0x4c)&&(elf_head.e_ident[3]==0x46));
	/*printf("e_machine=%ld\n",elf_head.e_machine);*/
	/*printf("am=%d, none=%d, vp=%d\n",EM_ARM,EM_NONE,EM_SPARCV9);*/
	assert(elf_head.e_machine==EXPECT_TYPE);
	Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr) * elf_head.e_phnum);
	ramdisk_read(phdr,elf_head.e_phoff,sizeof(Elf64_Phdr) * elf_head.e_phnum);
	for(int i=0;i<elf_head.e_phnum;i++){
		/*printf("type=%d, offset=%lx, viraddr=%lx, memsiz=%lx, filesiz=%lx\n",phdr[i].p_type,phdr[i].p_offset,phdr[i].p_vaddr,phdr[i].p_memsz,phdr[i].p_filesz);*/
		if(phdr[i].p_type==1){
		memcpy((char *)phdr[i].p_vaddr,&ramdisk_start+phdr[i].p_offset,phdr[i].p_filesz);
		memset((char *)phdr[i].p_vaddr+phdr[i].p_filesz,0,phdr[i].p_memsz-phdr[i].p_filesz);
	}
	}
	return elf_head.e_entry;
	printf("begin is 0x%lx\n",elf_head.e_entry);
	printf("size=%ld",get_ramdisk_size());
  TODO();
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %lx", entry);
  ((void(*)())entry) ();
}

