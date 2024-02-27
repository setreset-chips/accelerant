# Instruction Generator


# Instruction Encoding:
# 24 bit routing information
# 2 bit port sampler
# 2 bit output designation
# 4 bit instruction opcode
# 32 bit A
# 32 bit B
# 32 bit C/internal register

import struct

example_route = 0b101000000000000000000000
erb1 = (example_route >> 16) & 0xFF
erb2 = (example_route >> 8) & 0xFF
erb3 = (example_route >> 0) & 0xFF
poi = 0b11010011 # take it from the west, give to FMA val to east
A = 68.312
B = 22.1231
C = 31.123184
internal_weight = 99.7
if((poi & 0xF) == 0b0011):
    val = internal_weight
else:
    val = C
out = struct.pack('!BBBBfff', erb1, erb2, erb3, poi, A, B, val)
out = out.hex()
lower = int(out,16) & 0xFFFFFFFFFFFFFFFF
upper = (int(out, 16)>>64) & 0xFFFFFFFFFFFFFFFF


print(f"{hex(upper)}")
print(f"{hex(lower)}")
