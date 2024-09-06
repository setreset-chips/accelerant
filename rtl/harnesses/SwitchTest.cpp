#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "FPHelpers.h"
#include "tb.hpp"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_types.h"
#include "VSwitch.h"


using namespace std;


// void set128(VlWide<4>& signal, uint64_t high, uint64_t low){
//   signal[0] = low & 0xFFFFFFFF;
//   signal[1] = (low >> 32) & 0xFFFFFFFF;
//   signal[2] = high & 0xFFFFFFFF;
//   signal[3] = (high >> 32) & 0xFFFFFFFF;
// }
int main() { 
  uint64_t MAX_TIME = 100;
  TB<VSwitch> *tb = new TB<VSwitch>(MAX_TIME);
  float foo = 6.969;
  float bar = 3.031;
  int arrives =2;

  tb->to->load = 1;
  tb->to->configuration_mux = arrives - 2;
  
  tb->to->i_north_config = 0x80000C2A42c76666;
  tb->start_trace("waveform.vcd");
  while (tb->should_tick()) {
    //    if(cnt >10) {
    //      to->load = 0;
    //      // take it from the north and west, and give it to the east
    //      to->north = *((uint32_t*)(&foo));
    //      to->west = *((uint32_t*)(&bar));
    //    }
    tb->tick();
  }
  tb->close_trace();
  exit(0);
}
