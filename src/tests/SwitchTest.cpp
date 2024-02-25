#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "FPHelpers.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VSwitch.h"

#define MAX_TIME 100
uint8_t cnt = 0;

using namespace std;

int main() { 
  VSwitch *to = new VSwitch;
  Verilated::traceEverOn(true);
  VerilatedVcdC *trace = new VerilatedVcdC;
  to->trace(trace, 5);
  trace->open("waveform.vcd");

  to->load = 1;
  to->in_flag = 2;
  to->in_config[0] = 0;
  to->in_config[1] = 0;
  //to->in_config[2] = 0x809040800000;
  to->in_config[2] = 0xC09040800000;
  to->in_config[3] = 0;
  float a = 6.9;
  float b = 4;//8.912;
  float c = 9.0;

  while (cnt != MAX_TIME) {
    if(cnt > 10) {
      to->load = 0;
      to->in_data[2][0] = *((uint32_t*)(&a));
      to->in_data[2][1] = *((uint32_t*)(&b));
      to->in_data[2][2] = *((uint32_t*)(&c));
    }
    to->eval();
    trace->dump(cnt);
    cnt++;
    to->clk ^= 1; 
  }
  printf("Expected: %f, Got: %f\n", (a + b)/* + c*/, *((float*)(&to->out_data[1])));
  trace->close();
  exit(0);
}
