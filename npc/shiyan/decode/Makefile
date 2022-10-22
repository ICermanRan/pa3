sim:
		verilator -Wall --trace --cc --exe --build ./csrc/main.cpp ./vsrc/decode24.v

		./obj_dir/Vdecode24
		gtkwave wave.vcd

clean:
		rm -rf obj_dir
		rm dump.vcd
