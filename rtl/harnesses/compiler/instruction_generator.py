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


if __name__ == '__main__':
    example_route = 0b10000000000000000000
    internal_weight = 6.96969
    bits = (struct.unpack('!i',struct.pack('!f',internal_weight))[0])
    # take it from the west+north, and give it to the south
    # 1100 port sampler
    # 0001 output
    # wnes
    data_inout_designation = 0b11111111
    instruction = 0b1010
    print(f"{example_route:x}{data_inout_designation:x}{instruction:x}{bits:x}")



'''
  * * * *
* a-b . .
    |
* . c-d . 
      |
* . . o .
* . . . .
'''
'''
  * * * *
* a-b . .
  | |
* --c-d . 
    | |
* . e-f=o
* . . . .
'''
# b = b + a
# c = (b * c) + a
# e = e * c
# d = d + c
# f = d * e
# out = f

# configuration:
# c.in = west
# a.out = east
# b.in = west
# b.out = south
# c.in = west
# c.in = north
# c.out = east
# c.out = south
# d.in = west, e.in = north
# d.out = south, e.out = east
# f.in = 

