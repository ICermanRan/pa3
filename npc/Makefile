######################################################################
# author:ran
# 学号：ysyx_220578
######################################################################


BUILD_DIR = /home/ran/ysyx/ysyx-workbench/npc/build
OBJ_DIR := ./obj_dir
DIFF_DIR = $(NPC_HOME)/diff-so

NPC_LOG ?= --log=$(BUILD_DIR)/npc-log.txt
 


# 1.files info:
CSRC +=  $(shell find $(abspath ./csrc) -name "*.cpp") 
VSRC +=  $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
TOP_MODULE := ysyx_22050078_npc


# 2.verilator flags:
#--trace:输出目标被构建的原因和执行的命令.
VERILATOR_FLAGS += -Wall --trace --cc --exe --build -MMD
VERILATOR_FLAGS += -Wno-UNUSED
VERILATOR_FLAGS += -Wno-UNDRIVEN
VERILATOR_FLAGS += -Wno-INCABSPATH
VERILATOR_FLAGS += --top ${TOP_MODULE}




#
CFLAGS += g
CFLAGS += -lasan
CFLAGS += $(shell llvm-config --cxxflags) -fPIE

LDFLAGS += -ldl
LDFLAGS += -lSDL2 -lSDL2_image
LDFLAGS += $(shell llvm-config --libs)
DIFFTEST := ${DIFF_DIR}/riscv64-nemu-interpreter-so


# 3.run info:

IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin #?= 是如果没有被赋值过就赋予等号后面的值,所以如果没有被赋予.bin文件，就会运行dummy.bin

RUN_FLAGS := --img=${IMG} 
RUN_FLAGS += --diff=${DIFFTEST}
RUN_FLAGS += ${NPC_LOG}

.PHONY:sim wave clean



sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator ${VERILATOR_FLAGS} \
	-I${CSRC} \
	-I${VSRC} \
	$(addprefix -CFLAGS , -O0 $(CFLAGS)) \
	$(addprefix -LDFLAGS , $(LDFLAGS)) \
	$(CSRC)	\
	$(VSRC)


run: sim
	${RUN_FLAGS}
	
	
wave:
# ./obj_dir/Vysyx_22050078_npc_onecycle
	gtkwave waveform.vcd

clean:
	rm -rf ${OBJ_DIR}
	rm waveform.vcd
	rm ${BUILD_DIR}/npc-log.txt

include ../Makefile