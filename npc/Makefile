######################################################################
# author:ran
# 学号：ysyx_220578
######################################################################


BUILD_DIR = /home/ran/ysyx/ysyx-workbench/npc/build
OBJ_DIR := ./obj_dir
DIFF_DIR = $(NPC_HOME)/diff-so
NPC_LOG ?= $(BUILD_DIR)/npc-log.txt
NPC_ELF ?=

 
# 1.src:
CSRC +=  $(shell find $(abspath ./csrc) -name "*.cpp") 
VSRC +=  $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
TOP_MODULE := ysyx_22050078_npc
VERILATOR_INC_PATH := ./vsrc


# 2.verilator flags:
#--trace:输出目标被构建的原因和执行的命令.
VERILATOR_FLAGS += -Wall --trace --cc --exe --build -MMD
VERILATOR_FLAGS += -Wno-UNUSED
VERILATOR_FLAGS += -Wno-UNDRIVEN
VERILATOR_FLAGS += -Wno-INCABSPATH
VERILATOR_FLAGS += -I${VERILATOR_INC_PATH}
VERILATOR_FLAGS += --top ${TOP_MODULE}

# 3.gcc flags:
GCC_INCLUDE_PATH := -I$(NPC_HOME)/csrc/include/ \
										-I/usr/include/SDL2 \
										-I${OBJ_DIR}

CFLAGS += g
CFLAGS += -lasan
CFLAGS += $(filter-out -D__STDC_FORMAT_MACROS, $(shell llvm-config --cxxflags))
LDFLAGS += -ldl
LDFLAGS += -lSDL2 -lSDL2_image
LDFLAGS += $(shell llvm-config --libs)


# 3.run info:
BIN := ${OBJ_DIR}/V${TOP_MODULE}
IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin #?= 是如果没有被赋值过就赋予等号后面的值,所以如果没有被赋予.bin文件，就会运行dummy.bin
DIFFTEST := ${DIFF_DIR}/riscv64-nemu-interpreter-so

RUN_FLAGS := --img=${IMG} 
RUN_FLAGS += --diff=${DIFFTEST}
RUN_FLAGS += --log=${NPC_LOG}
RUN_FLAGS += --elf=${NPC_ELF}

.PHONY:sim wave clean



sim:${CSRC} ${VSRC}
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@verilator ${VERILATOR_FLAGS} \
	${CSRC} \
	${VSRC} \
	$(addprefix -CFLAGS , -O0 $(CFLAGS)) \
	$(addprefix -LDFLAGS , $(LDFLAGS)) 


run: sim
	@${BIN} ${RUN_FLAGS}
	
	
wave:
	gtkwave waveform.vcd

clean:
	rm -rf ${OBJ_DIR}
	rm waveform.vcd
	rm ${BUILD_DIR}/npc-log.txt

include ../Makefile