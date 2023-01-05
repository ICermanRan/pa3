######################################################################
# author:ran
# 学号：ysyx_220578
######################################################################

# Set up variables
VERILATOR =verilator
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
#VERILATOR_FLAGS += --assert
# Generate coverage analysis
# Run Verilator in debug mode
# VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdb
VERILATOR_FLAGS += --build
# 关闭 警告 unused INCABSPATH
VERILATOR_FLAGS += -Wno-UNUSED 
VERILATOR_FLAGS += -Wno-PINCONNECTEMPTY
VERILATOR_FLAGS += -Wno-UNDRIVEN
VERILATOR_FLAGS += -Wno-INCABSPATH
#包含的头文件
VERILATOR_FLAGS += -I./vsrc  -y ./vsrc 
VERILATOR_FLAGS += --top-module ysyx_220578_npc_onecycle

# Input files for Verilator    包括 c 与  v
VERILATOR_INPUT +=  ./vsrc/ysyx_220578_npc_onecycle
VERILATOR_INPUT +=	./vsrc/ysyx_220578_register.v  ./vsrc/ysyx_220578_pc_reg.v ./vsrc/ysyx_220578_IFU.v ./vsrc/ysyx_220578_IDU.v ./vsrc/ysyx_220578_EXU.v ./vsrc/defines.v
VERILATOR_INPUT +=  ./csrc/npc.cpp 

all:
	@echo "Write this Makefile by your self."
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo
	@echo "-- BUILD -------------------"	
###################################################
	./obj_dir/Vysyx_220578_npc_onecycle
	gtkwave waveform.vcd

clean:
	rm -rf obj_dir
	rm waveform.vcd