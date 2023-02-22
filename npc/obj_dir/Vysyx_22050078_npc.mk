# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_22050078_npc.mk

default: Vysyx_22050078_npc

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
VM_PREFIX = Vysyx_22050078_npc
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_22050078_npc
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	map \
	mmio \
	port-io \
	timer \
	difftest \
	dpic \
	hostcall \
	init \
	main \
	mem \
	paddr \
	vaddr \
	monitor \
	expr \
	sdb \
	watchpoint \
	reg \
	sim_init \
	disasm \
	ftrace \
	itrace \
	log \
	state \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/ran/ysyx/ysyx-workbench/npc/csrc \
	/home/ran/ysyx/ysyx-workbench/npc/csrc/device \
	/home/ran/ysyx/ysyx-workbench/npc/csrc/device/io \
	/home/ran/ysyx/ysyx-workbench/npc/csrc/memory \
	/home/ran/ysyx/ysyx-workbench/npc/csrc/monitor \
	/home/ran/ysyx/ysyx-workbench/npc/csrc/monitor/sdb \
	/home/ran/ysyx/ysyx-workbench/npc/csrc/trace \
	/home/ran/ysyx/ysyx-workbench/npc/csrc/utils \


### Default rules...
# Include list of all generated classes
include Vysyx_22050078_npc_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/cpu-exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/device/io/map.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/device/io/mmio.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
port-io.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/device/io/port-io.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/device/timer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dpic.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/dpic.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
hostcall.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/hostcall.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/init.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/memory/mem.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/memory/paddr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vaddr.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/memory/vaddr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/monitor/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/monitor/sdb/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/monitor/sdb/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/monitor/sdb/watchpoint.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/reg.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim_init.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/sim_init.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/trace/disasm.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/trace/ftrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
itrace.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/trace/itrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/utils/log.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/ran/ysyx/ysyx-workbench/npc/csrc/utils/state.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vysyx_22050078_npc: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
