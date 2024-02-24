#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "FPHelpers.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VPE.h"

#define MAX_TIME 50
uint8_t cnt = 0;

using namespace std;

int main() { 
  VPE *to = new VPE;
  Verilated::traceEverOn(true);
  VerilatedVcdC *trace = new VerilatedVcdC;
  to->trace(trace, 5);
  trace->open("waveform.vcd");

  to->load = 1;
  float internal = 36.553f;
  float a = 6.812;
  float b = 18.123;
  float c = 32.2112;
  to->internal_data_in = *((uint32_t*)(&internal));
  to->instruction = 10;
  float val;
  if (to->instruction == 10) val = internal;
  else val = b;
  while (cnt != MAX_TIME) {
    if(cnt > 10) {
      to->load = 0;
      to->a = *((uint32_t*)(&a));
      to->b = *((uint32_t*)(&b));
      to->c = *((uint32_t*)(&c));
    }
    to->eval();
    trace->dump(cnt);
    cnt++;
    to->clk ^= 1; 
  }
  printf("val is %f, internal is %f, b is %f\n", val, internal, b);
  printf("Got: %f\n", *((float*)(&to->out_to_switch)));
  printf("Expected: %f\n", (a * val) + c);
  trace->close();
  exit(0);
}
