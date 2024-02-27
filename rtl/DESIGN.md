## Configure Time
The mesh is programmed from top-left to bottom-right

Given the instruction, it eather passes through, or it sets itself. Each PE has a internal `A`, `B`, and `C` register, which is given at compile time. It also has a `S` register, which is used for storing internal systolic dataflow data.

If the instruction states that the PE has to do a systolic FMA (instruction encoding `1010`, then 



## Opcode Set Architecture (OSA)

0000 - FAdd
0001 - FMul
0010 - Systolic FMA
0011 - FMA 

## Pipelined Mesh
We can pipeline the entire mesh such that each process element writes to a pipeline register once it is done, so that it can be re-used by the mesh

## Instruction Designation



24 bit configuration (max of 12x12 mesh)
4 bit designation (2 for port sampler + 2 for output designator)
4 bit for instruction opcode
32 bit A (bfloat16)
32 bit B (bfloat16)
32 bit C/Internal Register

128 bits (16 bytes)
  - 14 bytes is BIG!!!
  
  
With a 24 bit configuration, you could in theory do a maximum size of a 12x12 mesh (really massive tbh)
  
