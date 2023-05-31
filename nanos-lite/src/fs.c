#include <fs.h>
#include "../../nemu/include/generated/autoconf.h"


typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
extern size_t serial_write(const void *buf, size_t offset, size_t len);
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t events_read(void *buf, size_t offset, size_t len);
extern size_t dispinfo_read(void *buf, size_t offset, size_t len);
extern size_t fb_write(const void *buf, size_t offset, size_t len);
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
	{"/dev/events", 0, 0, events_read, invalid_write},
	{"/dev/fb",0,0,invalid_read,fb_write},
	{"/proc/dispinfo",0,0,dispinfo_read,invalid_write},

#include "files.h"
};

static int length=sizeof(file_table)/sizeof(Finfo);
static size_t open_offset[sizeof(file_table)/sizeof(Finfo)];
void init_fs() {
  // TODO: initialize the size of /dev/fb
	file_table[4].size=400*300*4;
	for(int i=0;i<length;i++)	
	{
			open_offset[i]=file_table[i].disk_offset;
	}
}
//wzw add
int fs_open(const char *pathname, int flags, int mode){
#ifdef CONFIG_STRACE_COND
	Log("open file %s\n",pathname);
#endif
	for(int i=0;i<length;i++)	
	{
		if(strcmp(pathname,file_table[i].name)==0){
			/*open_offset[i]=file_table[i].disk_offset;*/
			open_offset[i]=file_table[i].disk_offset;
			return i;	
		}	
	}
	assert(0);
};
size_t fs_read(int fd, void *buf, size_t len){
#ifdef CONFIG_STRACE_COND
	Log("read file %s\n",file_table[fd].name);
#endif
 /* for(int i=0;i<length;i++)*/
		/*printf("openoffset[%d]=%d file_table=%d\n",i,open_offset[i],file_table[i].disk_offset);*/
	/*printf("open_offset=%ld file_table[fd].disk_offset=%d len=%d size=%d\n",open_offset[fd],file_table[fd].disk_offset,len,file_table[fd].size);*/
	/*assert(open_offset[fd]-file_table[fd].disk_offset+len<=file_table[fd].size);*/

	/*printf("here\n");*/
	/*size_t fh=ramdisk_read(buf,open_offset[fd],len);*/
	size_t fh;
	if(file_table[fd].read){
		fh=file_table[fd].read(buf,open_offset[fd],len);
		return fh;
	}
	else
		fh=ramdisk_read(buf,open_offset[fd],len);
	if(open_offset[fd]-file_table[fd].disk_offset+len>file_table[fd].size){
		//此处不能对fh赋值 原因是如果是流动字符串长度也不应是0
		fh=file_table[fd].size+file_table[fd].disk_offset-open_offset[fd];
		open_offset[fd]=file_table[fd].disk_offset+file_table[fd].size;
		return fh;
	};
	open_offset[fd]+=len;
	return fh;
	/*printf("here\n");*/
};
size_t fs_write(int fd, const void *buf, size_t len){
#ifdef CONFIG_STRACE_COND
	Log("write file %s\n",file_table[fd].name);
#endif
	size_t fh;
	if(file_table[fd].write){
		fh=file_table[fd].write(buf,open_offset[fd],len);
		return fh;
	}
	else
		fh=ramdisk_write(buf,open_offset[fd],len);
	if(open_offset[fd]-file_table[fd].disk_offset+len>file_table[fd].size){
		//此处不能对fh赋值 原因是如果是流动字符串长度也不应是0
		fh=file_table[fd].size+file_table[fd].disk_offset-open_offset[fd];
		open_offset[fd]=file_table[fd].disk_offset+file_table[fd].size;
		return fh;
	};
	open_offset[fd]+=len;
	return fh;
};
size_t fs_lseek(int fd, size_t offset, int whence){
	switch(whence)
	{
		case SEEK_SET:
			open_offset[fd]=file_table[fd].disk_offset+offset;
			/*assert((open_offset[fd]-file_table[fd].disk_offset)>=0&&(open_offset[fd]-file_table[fd].disk_offset<=file_table[fd].size));*/
			break;
		case SEEK_CUR:
			open_offset[fd]+=open_offset[fd];
			/*assert((open_offset[fd]-file_table[fd].disk_offset)>=0&&(open_offset[fd]-file_table[fd].disk_offset<=file_table[fd].size));*/
			/*assert(open_offset[fd]-file_table[fd].disk_offset+len<=file_table[fd].size);*/
			break;
		case SEEK_END:
			open_offset[fd]=file_table[fd].disk_offset+file_table[fd].size+offset;
			/*assert((open_offset[fd]-file_table[fd].disk_offset)>=0&&(open_offset[fd]-file_table[fd].disk_offset<=file_table[fd].size));*/
			/*assert(open_offset[fd]-file_table[fd].disk_offset+len<=file_table[fd].size);*/
			break;
		default:
			assert(0);
			break;

	/*return 1;*/
	}
	return open_offset[fd]-file_table[fd].disk_offset; 
};
int fs_close(int fd){
	return 0;
};

