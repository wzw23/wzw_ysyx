# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
  $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# # package install, and verilator is in your path. Otherwise find the
# # binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -Os -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt
VRCS = $(shell find $(NPC_HOME)/vsrc -name "*.v") #所有的verilog文件
CSRCS = $(shell find $(NPC_HOME)/csrc -name "*.c" -or -name "*.cpp" -or -name "*.cc") #所有的c类文件
pri:
	echo $(CSRCS)
LIBS ="$(shell llvm-config --libs) "  
export LD_PRELOAD=/home/wzw/ysyx-workbench/npc/riscv64-nemu-interpreter-so
#LDFLAGS=-rdynamic -shared -fPIC
LDFLAGS=-rdynamic -ldl 
#LDFLAGS=-L. /home/wzw/ysyx-workbench/npc/riscv64-nemu-interpreter-so
#CFLAGS+=-L. -lriscv64-nemu-interpreter-so

#CSRCS+=$(NPC_HOME)/csrc/utils/disasm.cc
CFLAGS=$(shell llvm-config --cxxflags) -fPIE #-fPIC
#CFLAGS +=  -ffreestanding -fno-rtti -fno-exceptions
#CXX       = g++
$(NPC_HOME)/csrc/utils/disasm.o:$(CXXSRCS)
	#@mkdir -p $(dir $@) && echo + CXX $<
	#@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<) 
	# Input files for Verilator
#VERILATOR_INPUT = -f  input.vc vsrc/top.v vsrc/pc.v  vsrc/Reg.v vsrc/MuxKeyInternal.v  vsrc/RegisterFile.v vsrc/decode_exec.v vsrc/MuxKey.v vsrc/MuxKeyWithDefault.v vsrc/Alu.v --top-module top csrc/sim_main.cpp
#VERILATOR_INPUT = -f  input.vc $(VRCS) --top-module top $(CSRCS) $(NPC_HOME)/csrc/utils/disasm.o
VERILATOR_INPUT = -f  input.vc $(VRCS) --top-module top $(CSRCS)  
#VERILATOR_INPUT+=/home/wzw/ysyx-workbench/npc/riscv64-nemu-interpreter-so

IMG?=
################################

default:sim
all:
	@echo "Write this Makefile by your self."

sim:
	@echo "Verilator sim"
	@echo "verilator---------------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT) $(addprefix -CFLAGS ,$(CFLAGS)) $(addprefix -LDFLAGS ,$(LDFLAGS)) $(addprefix -LDFLAGS ,$(LIBS)) 

	@echo "------------------------------"
	@echo "build-------------------------"
# To compile, we can either
# 1. Pass --build to Verilator by editing VERILATOR_FLAGS above.
# 2. Or, run the make rules Verilator does:
#	$(MAKE) -j -C obj_dir -f Vtop.mk
# 3. Or, call a submakefile where we can override the rules ourselves:
	$(MAKE) -j -C obj_dir -f ../Makefile_obj
	@echo "------------------------------"
	@echo "run--------------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace $(ARGS) --diff="/home/wzw/ysyx-workbench/npc/riscv64-nemu-interpreter-so" -m $(IMG)
	#@echo "converage--------------------"
	#@rm -rf logs/annotated
	#$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat
	#@echo
	#@echo "-----------------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "------------------------------"
	@echo $(IMG)
	@gtkwave $(NPC_HOME)/logs/vlt_dump.vcd
maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core
include ../Makefile
