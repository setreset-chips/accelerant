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


def main(route):
    internal_weight = 6.96969
    bits = (struct.unpack('!i',struct.pack('!f',internal_weight))[0])
    # take it from the west+north, and give it to the south
    # 1100 port sampler
    # 0001 output
    # wnes
    data_inout_designation = 0b11000011
    instruction = 0b1010
    print(f"{example_route:x}{data_inout_designation:x}{instruction:x}{bits:x}")


if __name__ == '__main__':
    # temp = long(temp << 1) & (0xffffffff)
    example_route = 0b1111_0000_0000_0000_0000
    for i in range(4):
        main(example_route)
        example_route = (example_route << 1) & 0xFFFFF
#        print(bin(example_route & 0xFFFFF))
