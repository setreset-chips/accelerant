#include <stdlib.h>
#include <verilated.h>
#include <iostream>
#include <verilated_vcd_c.h>
#include "VFMA.h"
#include <bitset>
#include <math.h>

#define MAX_TIME 20
uint8_t cnt = 0;

float int32_to_float_32(uint32_t val) {
  float *f = (float*)&val;
  return *f;
}


 int main () {
   VFMA *to = new VFMA;
   float f_a = 69.76;
   float f_b = 23.22;
   float f_c = 420.69;
 	
   to->var1 = *((uint32_t*)(&f_a));
   to->var2 = *((uint32_t*)(&f_b));
   to->var3 = *((uint32_t*)(&f_c));
   
   while (cnt < MAX_TIME) {
     to->eval();
     cnt++;
   }
   
   uint32_t output = to->res;

   printf("Calculated: %f\n", int32_to_float_32(output));
   printf("Actual: %f\n", (f_a*f_b)+f_c);
   exit(0);
 }
