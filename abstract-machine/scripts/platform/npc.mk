AM_SRCS:=  platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
			 --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

NPCFLAGS  += -l $(shell dirname $(IMAGE).elf)/npc-log.txt -e $(IMAGE).elf
#NPCFLAGS  += -l $(shell dirname $(IMAGE).elf)/npc-log.txt
#NPCFLAGS  += -e $(IMAGE).elf 

CFLAGS += -DMAINARGS=\"$(mainargs)\"

.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c 

#@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt 的意义
#objdump -d <file(s)>: 将代码段反汇编；将代码段对应ARCH的程序的elf文件反汇编为.txt文件

#@$(OBJCOPY) -S的意义： --strip-all
 #Do not copy relocation and symbol information from the source file.
 #Also deletes debug sections.

#--set-section-flags：
#Set the flags for any sections matching sectionpattern
image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

#$(MAKE) -C $(NPC_HOME) run IMG=$(IMAGE).bin 的意义：切换到$(NPC_HOME)目录下执行makefile
#以dummy为例：make -C /home/ran/ysyx/ysyx-workbench/npc run IMG=/home/ran/ysyx/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin
run: image
	@echo run npc $(IMAGE).elf
	@echo $(MAKE) -C $(NPC_HOME) run IMG=$(IMAGE).bin 
	@echo $(MAKE) -C $(NPC_HOME) run ARGS=$(NPCFLAGS)
	@$(MAKE) -C $(NPC_HOME) run IMG=$(IMAGE).bin run ARGS="$(NPCFLAGS)"



