mesh:
	verilator -I../ -Wall -Wno-fatal --trace --cc --exe --build MeshTest.cpp ../Mesh.sv
	./obj_dir/VMesh
switch:
	verilator -I../ -Wall -Wno-fatal --trace --cc --exe --build SwitchTest.cpp ../Switch.sv
	./obj_dir/VSwitch

gen_inst:
	python3 compiler/instruction_generator.py


pe_fp:
	verilator -I../ -Wall -Wno-fatal --trace --cc --exe --build PETest.cpp ../PE.sv
	./obj_dir/VPE

fp:
	verilator -I../ -Wall -Wno-fatal --trace --cc --exe --build FPTest.cpp ../FMA.sv 
	./obj_dir/VFMA

