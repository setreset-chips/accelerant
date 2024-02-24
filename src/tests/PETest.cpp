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

  //  float weight = 1;
  //  float north_val = 0;
  //  float west_val = 2;
  //  uint16_t af = float32_to_bfloat16(west_val);
  //  uint16_t bf = float32_to_bfloat16(weight);
  //  float should_be = (bfloat16_to_float32(extract_bfloat16_components(af)) * bfloat16_to_float32(extract_bfloat16_components(bf)))+ north_val;
  //  printf("%f\n", should_be);

  
  //  uint16_t weight_bits = float32_to_bfloat16(weight);
  //  uint16_t west_bits = float32_to_bfloat16(west_val);
  to->load = 1;
  float internal = 36.553f;
  float a = 6.812;
  float b = 18.123;
  float c = 32.2112;
  to->internal_data_in = *((uint32_t*)(&internal));
  to->instruction = 2;

  //  uint32_t north_bits = *((uint32_t*)(&north_val));
  //  to->i_west = west_bits;
  //  to->i_weight = weight_bits;
  //  to->i_north = north_bits;


  // bfloat16 o_east;
  // ihnt32_t o_south;

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
    trace->close();
    exit(0);
}
