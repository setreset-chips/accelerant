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

int main() { 
  VMesh *to = new VMesh;
  Verilated::traceEverOn(true);
  VerilatedVcdC *trace = new VerilatedVcdC;
  to->trace(trace, 5);
  trace->open("waveform.vcd");


  to->load = 1;
  float a = 4.8f;
  float b = 7.3f;
  float c = 100.63f;
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++){
      if(j == 0) to->in_data[i][j] = *((uint32_t*)(&a));
      if(j == 1) to->in_data[i][j] = *((uint32_t*)(&b));
      if(j == 2) to->in_data[i][j] = *((uint32_t*)(&c));
    }
  }

  

  to->configuration_program[1] = 0xF0D100000000;
  //to->clk ^= 1;
  //to->clk ^= 1;
  while (cnt != MAX_TIME) {
    if(cnt >= 10) {
      to->configuration_program[1] = 0xE0D000000000;
    }
    if(cnt >= 18) {
      to->configuration_program[1] = 0xC0D300000000;
    }
    if(cnt >= 26) {
      to->configuration_program[1] = 0x80D300000000;
    }
    if(cnt >= 100) {
      to->load = 0;
    }
    to->eval();
    trace->dump(cnt);
    cnt++;
    to->clk ^= 1; 
  }
  printf("%f\n", *((float*)(&to->out)));
  trace->close();
  exit(0);
}
