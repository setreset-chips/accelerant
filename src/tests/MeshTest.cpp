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
  float ved = 2.0f;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++)
      to->in_data[i][j] = *((uint32_t*)(&ved));
  }

  to->configuration_program[0][1] = 0xE0D100000000;
  //to->clk ^= 1;
  //to->clk ^= 1;
  while (cnt != MAX_TIME) {
    if(cnt >= 30) {
      to->configuration_program[0][1] = 0xC0D300000000;
    }
    if(cnt >= 60) {
      to->configuration_program[0][1] = 0x80D100000000;
    }
    if(cnt >= 100) {
      to->load = 0;
    }
    to->eval();
    trace->dump(cnt);
    cnt++;
    to->clk ^= 1; 
  }
  trace->close();
  exit(0);
}
