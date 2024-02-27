#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "FPHelpers.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VPE.h"

#define MAX_TIME 100
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
  float a = 9831.21212;
  float b = 3812.9412;
  float c = 32.2112;
  to->internal_data_in = *((uint32_t*)(&internal));
  to->instruction = 10;
  float val;
  if (to->instruction == 10) val = internal;
  else val = b;
  while (cnt != MAX_TIME) {
    if(cnt > 10) {
      if (cnt == 20){
        a = 6.5;
        b = 3.2;
        c = 10.2;
      }
      if (cnt > 40 && cnt < 50) {
        to->load = 1;
        to->instruction = 1;
        val = b;
      }
      else to->load = 0;
      to->a = *((uint32_t*)(&a));
      to->b = *((uint32_t*)(&b));
      to->c = *((uint32_t*)(&c));
    }
    to->eval();
    trace->dump(cnt);
    cnt++;
    to->clk ^= 1; 
  }
  printf("a -> %f, b/internal -> %f, c-> %f\n", a, val, c);
  printf("Got: %f\n", *((float*)(&to->out_to_switch)));
  if (to-> instruction == 0) 
    printf("ADD: Expected: %f\n", (a + val));
  else if (to->instruction == 1)
    printf("MUL: Expected: %f\n", (a * val));
  else
    printf("MULACC: Expected: %f\n", (a * val) + c);
  trace->close();
  exit(0);
}
