#export ASAN_OPTIONS=verify_asan_link_order=0
#export LD_PRELOAD=/lib/x86_64-linux-gnu/libasan.so.6
TOPNAME = top
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert --trace
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

#VSRCS =$(shell find $(NPC_HOME)/vsrc -name "*.v" -or -name "*.vh") #所有的verilog文件
VSRCS =$(shell find $(NPC_HOME)/vsrc -name "ysyx_22050533.v") #所有的verilog文件
CSRCS = $(shell find $(NPC_HOME)/csrc -name "*.c" -or -name "*.cpp" -or -name "*.cc") #所有的c类文件

CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CFLAGS +=$(shell llvm-config --cxxflags) -fPIE #-fPIC

#LDFLAGS += -lSDL2 -lSDL2_image
LDFLAGS+=-lSDL2main -lSDL2
#-fsanitize=address 解决链接问题的第二个方法
LDFLAGS +=-rdynamic -ldl -fsanitize=address
LIBS ="$(shell llvm-config --libs) "
$(NPC_HOME)/csrc/utils/disasm.o:$(CXXSRCS)

$(BIN): $(VSRCS) $(CSRCS) 
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) $(addprefix -LDFLAGS ,$(LIBS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all:default


sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$^ +trace $(ARGS) --diff="/home/wzw/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so" -m $(IMG)
clean:
	rm -rf $(BUILD_DIR)
#cleanall:
	#-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core


.PHONY: default all clean run


