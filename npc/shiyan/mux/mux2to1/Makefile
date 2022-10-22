sim:
		verilator -Wall --trace --cc --exe --build ./csrc/main.cpp ./vsrc/mux21.v

		./obj_dir/Vmux21
		gtkwave dump.vcd

clean:
		rm -rf obj_dir
		rm dump.vcd
