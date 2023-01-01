#define CONFIG_BASE 0x80000000
typedef unsigned char         uint8_t;
typedef unsigned short   int uint16_t;
typedef unsigned int         uint32_t;
typedef unsigned long    int uint64_t;
typedef long             int int64_t;

void printh();
int parse_args(int argc, char *argv[]);
extern char *img_file;
extern char *elf_file;
extern char *log_file;
uint8_t* guest_to_host(uint32_t paddr);
//extern void put_state(svLogic prior_state);  
//文件二进制编码
#define file_maxsize 4000 //此处代表能记录含有4000个调用的文件
void load_img(int argc,char**argv);
typedef struct Sy_table{
	int length;
	uint64_t begin[file_maxsize];
	int64_t  size[file_maxsize];
	char     name[file_maxsize][200];
}Sy_table;
typedef struct Decode {
	  uint32_t pc;
		uint32_t snpc; // static next pc
		uint32_t dnpc; // dynamic next pc
		int state;
		//ISADecodeInfo isa;
		//IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;
void parse_elf(const char *elf_file);
void init_log(const char *log_file);
#define log_write(...) 		do { \
		extern FILE* log_fp; \
		{ \
		fprintf(log_fp, __VA_ARGS__); \
		fflush(log_fp); \
		} \
		} while (0) \
		
