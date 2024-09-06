
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "FPHelpers.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VMesh.h"

#define MAX_TIME 200
uint8_t cnt = 0;

using namespace std;
/*f0000c3a40df07b3
e0000c3a40df07b3
c0000c3a40df07b3
80000c3a40df07b3*/
uint64_t PROGRAM[4][4] = {
  {0xf0000c3a40df07b3, 0xe0000c3a40df07b3, 0xc0000c3a40df07b3, 0x80000c3a40df07b3},
  {0xf0000c3a40df07b3, 0xe0000c3a40df07b3, 0xc0000c3a40df07b3, 0x80000c3a40df07b3},
  {0xf0000c3a40df07b3, 0xe0000c3a40df07b3, 0xc0000c3a40df07b3, 0x80000c3a40df07b3},
  {0xf0000c3a40df07b3, 0xe0000c3a40df07b3, 0xc0000c3a40df07b3, 0x80000c3a40df07b3}};

int main() { 
  VMesh *to = new VMesh;
  Verilated::traceEverOn(true);
  VerilatedVcdC *trace = new VerilatedVcdC;
  to->trace(trace, 5);
  trace->open("waveform.vcd");
  to->known_instruction = 1;
  to->loads[0][0] = ftoi(1.2);
  to->loads[0][1] = ftoi(2.3);
  to->loads[1][0] = ftoi(3.4);
  to->loads[1][1] = ftoi(4.5);
  to->loads[2][0] = ftoi(5.6);
  to->loads[2][1] = ftoi(6.7);
  to->loads[3][0] = ftoi(7.8);
  to->loads[3][1] = ftoi(8.9);
  to->load = 1;
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      to->sys_loads[i][j] = ftoi(float((float(i+1)+float(j+1))/2));
      to->map_instructions[i][j] = PROGRAM[i][j];
      printf("%f ",(float((float(i+1)+float(j+1))/2)));
    }
    printf("\n");
  }
  uint8_t buffer = 10;
  uint8_t count = 0;
  while(cnt != MAX_TIME) {
    if(cnt > 50) to->load = 0;
    to->eval();
    trace->dump(cnt);
    cnt++;
    to->clk ^= 1; 
  }
  trace->close();
  exit(0);
}
