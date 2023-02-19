######################################################################
# author:ran
# 学号：ysyx_220578
######################################################################

#BUILD_DIR = $(NPC_HOME)/build
BUILD_DIR = /home/ran/ysyx/ysyx-workbench/npc/build
OBJ_DIR := ./obj_dir
ARGS ?= --log=$(BUILD_DIR)/npc-log.txt
#gcc flags
GCC_INCLUDE_PATH := -I$(NPC_HOME)/csrc/include/	\
										-I/usr/include/SDL2 \
										-I${OBJ_DIR}


#llvm
LLVM_LIB = $(shell llvm-config --libs)
LLVM_FLAGS = $(filter-out -D__STDC_FORMAT_MACROS, $(shell llvm-config --cxxflags)) -fPIE
LLVM_FLAGS += -Ofast  -fexceptions
#-lasan(内存检查)



# 1.files info:
CSRC +=  $(shell find $(abspath ./csrc/memory) -name "*.cpp")  
CSRC +=  $(shell find $(abspath ./csrc) -name "*.cpp") 
CSRC +=  $(shell find $(abspath ./csrc/monitor) -name "*.cpp")
CSRC +=  $(shell find $(abspath ./csrc/monitor/sdb) -name "*.cpp")
#CSRC +=  $(shell find $(abspath ./csrc/utils) -name "*.cpp")
CSRC +=  $(shell find $(abspath ./csrc/trace) -name "*.cpp")

VSRC +=  $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
TOP_MODULE := ysyx_22050078_npc
SEARCHPATH := ./vsrc


# 2.verilator flags:
#--trace:输出目标被构建的原因和执行的命令.
VERILATOR_FLAGS += -Wall --trace --cc --exe --build -MMD
VERILATOR_FLAGS += -I${SEARCHPATH}
VERILATOR_FLAGS += --top ${TOP_MODULE}
VERILATOR_FLAGS += -Wno-UNUSED
VERILATOR_FLAGS += -Wno-UNDRIVEN
VERILATOR_FLAGS += -Wno-INCABSPATH

GCC_LIB = -lSDL2	-lreadline -ldl #-lSDL2_image
GCC_LIB += ${LLVM_LIB} 		   



GCC_LDFLAGS := $(addprefix -LDFLAGS ,${GCC_LIB})
GCC_CFLAGS :=  $(addprefix -CFLAGS ,${GCC_INCLUDE_PATH})
GCC_CFLAGS += $(addprefix -CFLAGS ,${LLVM_FLAGS})
GCC_FLAGS := ${GCC_CFLAGS} ${GCC_LDFLAGS} 

# 3.run info:

BIN := ${OBJ_DIR}/V${TOP_MODULE}
IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin #?= 是如果没有被赋值过就赋予等号后面的值,所以如果没有被赋予.bin文件，就会运行dummy.bin
# DIFFTEST := ${NEMU_HOME}/build/riscv64-nemu-interpreter-so
RUN_FLAGS := --img=${IMG} 
RUN_FLAGS += ${ARGS}

.PHONY:sim wave clean


# Set up variables
# VERILATOR =verilator
# # Generate C++ in executable form
# VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
# Warn abount lint issues; may not want this on less solid designs
# VERILATOR_FLAGS += -Wall
# # Make waveforms
# VERILATOR_FLAGS += --trace
# # Check SystemVerilog assertions
# #VERILATOR_FLAGS += --assert
# # Generate coverage analysis
# # Run Verilator in debug mode
# # VERILATOR_FLAGS += --debug
# # Add this trace to get a backtrace in gdb
# #VERILATOR_FLAGS += --gdb
# VERILATOR_FLAGS += --build
# # 关闭 警告 unused INCABSPATH
# VERILATOR_FLAGS += -Wno-UNUSED 
# VERILATOR_FLAGS += -Wno-PINCONNECTEMPTY
# VERILATOR_FLAGS += -Wno-UNDRIVEN
# VERILATOR_FLAGS += -Wno-INCABSPATH



com:$(CSRC) $(VSRC)
	@verilator ${VERILATOR_FLAGS} ${CSRC} ${VSRC} ${GCC_FLAGS} 

run: com
	@${BIN} ${RUN_FLAGS}
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!	
###################################################
	
wave:
# ./obj_dir/Vysyx_22050078_npc_onecycle
	gtkwave waveform.vcd

clean:
	rm -rf ${OBJ_DIR}
	rm waveform.vcd
	rm ${BUILD_DIR}/npc-log.txt

include ../Makefile