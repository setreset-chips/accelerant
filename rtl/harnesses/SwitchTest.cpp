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


void set128(VlWide<4>& signal, uint64_t high, uint64_t low){
  signal[0] = low & 0xFFFFFFFF;
  signal[1] = (low >> 32) & 0xFFFFFFFF;
  signal[2] = high & 0xFFFFFFFF;
  signal[3] = (high >> 32) & 0xFFFFFFFF;
}
int main() { 
  VSwitch *to = new VSwitch;
  Verilated::traceEverOn(true);
  VerilatedVcdC *trace = new VerilatedVcdC;
  to->trace(trace, 5);
  trace->open("waveform.vcd");
  int arrives =2;

  to->load = 1;
  to->configuration_mux = arrives - 2;
  uint64_t top    = 0xA00000d342889fbe;
  uint64_t bottom = 0x41b0fc1c42c76666;
  set128(to->i_north_config, top, bottom);

  while (cnt != MAX_TIME) {
    if(cnt > 10) {
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
