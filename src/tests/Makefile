pe_fp:
	verilator -I../ -Wall -Wno-fatal --trace --cc --exe --build PETest.cpp ../PE.sv
	./obj_dir/VPE

fp:
	verilator -I../ -Wall -Wno-fatal --trace --cc --exe --build FPTest.cpp ../FMA.sv 
	./obj_dir/VFMA

