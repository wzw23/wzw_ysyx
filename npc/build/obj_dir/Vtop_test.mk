# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop_test.mk

default: /home/wzw/ysyx-workbench/npc/build/top_test

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtop_test
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop_test
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-DTOP_NAME="Vtop_test" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 \
	-lSDL2_image \
	-rdynamic \
	-ldl \
	-fsanitize=address \
	-lLLVM-14 -LDFLAGS  \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	device \
	dut \
	elf \
	expr \
	keyboard \
	log \
	main \
	parsearg \
	trace \
	disasm \
	vga \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/wzw/ysyx-workbench/npc/csrc \
	/home/wzw/ysyx-workbench/npc/csrc/utils \


### Default rules...
# Include list of all generated classes
include Vtop_test_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

device.o: /home/wzw/ysyx-workbench/npc/csrc/device.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/wzw/ysyx-workbench/npc/csrc/dut.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
elf.o: /home/wzw/ysyx-workbench/npc/csrc/elf.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/wzw/ysyx-workbench/npc/csrc/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/wzw/ysyx-workbench/npc/csrc/keyboard.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/wzw/ysyx-workbench/npc/csrc/log.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/wzw/ysyx-workbench/npc/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
parsearg.o: /home/wzw/ysyx-workbench/npc/csrc/parsearg.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
trace.o: /home/wzw/ysyx-workbench/npc/csrc/trace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/wzw/ysyx-workbench/npc/csrc/utils/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/wzw/ysyx-workbench/npc/csrc/vga.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/wzw/ysyx-workbench/npc/build/top_test: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
