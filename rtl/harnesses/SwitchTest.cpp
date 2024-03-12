#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "FPHelpers.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_types.h"
#include "VSwitch.h"

#define MAX_TIME 100
uint8_t cnt = 0;

using namespace std;


// void set128(VlWide<4>& signal, uint64_t high, uint64_t low){
//   signal[0] = low & 0xFFFFFFFF;
//   signal[1] = (low >> 32) & 0xFFFFFFFF;
//   signal[2] = high & 0xFFFFFFFF;
//   signal[3] = (high >> 32) & 0xFFFFFFFF;
// }
int main() { 
  VSwitch *to = new VSwitch;
  Verilated::traceEverOn(true);
  VerilatedVcdC *trace = new VerilatedVcdC;
  to->trace(trace, 5);
  trace->open("waveform.vcd");
  float foo = 6.969;
  float bar = 3.031;
  int arrives =2;

  to->load = 1;
  to->configuration_mux = arrives - 2;
  
  to->i_north_config = 0x80000C2A42c76666;
  while (cnt != MAX_TIME) {
    if(cnt > 10) {
      to->load = 0;
      // take it from the north and west, and give it to the east
      to->north = *((uint32_t*)(&foo));
      to->west = *((uint32_t*)(&bar));
    }
    to->eval();
    trace->dump(cnt);
    cnt++;
    to->clk ^= 1; 
  }
  printf("%f\n", *(float*)(&to->east));
  trace->close();
  exit(0);
}
