#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->ps2_clk, BIND_RATE_RT , BIND_DIR_IN , 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, BIND_RATE_RT , BIND_DIR_IN , 1, PS2_DAT);
	nvboard_bind_pin( &top->seg_0, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC0P, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->seg_1, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC1P, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->seg_2, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC2P, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G);
	nvboard_bind_pin( &top->seg_3, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC3P, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G);
	nvboard_bind_pin( &top->seg_4, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC4P, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G);
	nvboard_bind_pin( &top->seg_5, BIND_RATE_SCR, BIND_DIR_OUT, 8, DEC5P, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G);
	nvboard_bind_pin( &top->overflow, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD0);
}
