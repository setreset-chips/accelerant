/* <tensor.c>
 * A fake framework
 * */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
// BEGIN TUPLE DEFN
typedef struct TupleNode {
  uint8_t data;
  struct TupleNode* next;
} TupleNode;

typedef struct Tuple {
  uint8_t size;
  TupleNode* head;
} Tuple;

void tuple_add(TupleNode* head, uint8_t next_data) {
  while(head->next != NULL) {
    head = head->next;
  }
  head->next = malloc(sizeof(TupleNode));
  head->next->data = next_data;
}
void kill_tuple(TupleNode* head) {
  while(head != NULL) {
    TupleNode* curr = head;
    head = head->next;
    free(curr);
  }
}

int tuple_prod(TupleNode* head) {
  int prod = 1;
  while(head != NULL) {
    prod *= head->data;
    head = head->next;
  }
  return prod;
}

// Empty Tuple
Tuple* new_tuple(int size) {
  Tuple* tuple = malloc(sizeof(Tuple));
  tuple->size = size;
  tuple->head = malloc(sizeof(TupleNode));
  return tuple;

}
// Create tuple from variadic arguments
// Tuples are immutable, use add to concatenate, but technically should only be created
Tuple* create_tuple(int num, ...) {
  va_list ptr;
  va_start(ptr, num);
  Tuple* tuple = new_tuple(num);
  tuple->head->data = (uint8_t) va_arg(ptr, int);
  for(int i = 1; i < num; i++) {
    int arg = va_arg(ptr, int);
    tuple_add(tuple->head, arg);
  }
  va_end(ptr);
  return tuple;
}

// Tuple from array
Tuple* from_array(int num, uint8_t* array) {
  Tuple* tuple = malloc(sizeof(Tuple));
  tuple->size = (uint8_t) num;
  for(int i = 0; i < num; i++){
    tuple_add(tuple->head, array[i]);
  }
  return tuple;
}


#define shape(...) create_tuple(sizeof((int[]){__VA_ARGS__})/sizeof(int), __VA_ARGS__)
// END TUPLE DEFN


// BEGIN TENSOR DEFN
typedef enum {
  UInt32,
  Int32,
  Float32,
  BFloat16,
} DataType;

typedef struct {
  Tuple* strides;
  Tuple* shape;
  // Data is stored contiguously in byte chunks, and accessed using strides
  unsigned char* data;
  DataType dtype;
} Tensor;

// based on <https://martinlwx.github.io/en/how-to-reprensent-a-tensor-or-ndarray/>
/*
Tensor is stored contiguously
*/

Tuple* calc_strides(Tuple* shape, int nbytes) {
  int ndims = shape->size;
  Tuple* strides = new_tuple(ndims);
  for(int k = 0; k < shape->size-1; k++){
    TupleNode* view = shape->head;
    int prod = 1;
    for(int i = k; i < shape->size-1; i++) {
      prod *= view->data;
      view = view->next;
    }
    tuple_add(strides->head, (uint8_t) prod*nbytes);
  }
  tuple_add(strides->head, nbytes);
  // jank
  TupleNode* jank = strides->head;
  strides->head = strides->head->next;
  free(jank);
  return strides;
}

// Used to fill a tensor with whole numbers. Can be used to create zeros, ones, twos, etc.
Tensor* create_tensor(Tuple* shape, DataType dtype) {
  uint8_t nbytes;
  switch(dtype) {
    case UInt32: {
      nbytes = 4;
      break;
    }
    case Int32: {
      nbytes = 4;
      break;
    }
    case Float32: {
      nbytes = 4;
      break;
    }
    case BFloat16: {
      nbytes = 2;
      break;
    }
    default:
      fprintf(stderr, "ERROR: DType Not supporrted\n");
      break;
  }
  Tuple* strides = calc_strides(shape, nbytes);
  Tensor* ret = malloc(sizeof(Tensor));
  ret->shape = shape;
  ret->strides = strides;
  int total_size = tuple_prod(shape->head) * nbytes;
  ret->data = malloc(total_size);
  return ret;
}

Tensor* fill(Tuple* shape, DataType dtype, uint8_t fill) {
  Tensor* ret = create_tensor(shape, dtype);
  printf("%d\n", 10 & 0xFF);
  printf("%d\n", 10>>8 & 0xFF);
  return ret;
}


void kill_tensor(Tensor* tensor) {
  kill_tuple(tensor->shape->head);
  kill_tuple(tensor->strides->head);
  free(tensor->shape);
  free(tensor->strides);
  free(tensor->data);
  free(tensor);
}

// END TENSOR DEFN


int main() {
  Tuple* shape = shape(4,2,1);
  Tensor* tensor = fill(shape, Float32, 0);
  kill_tensor(tensor);
}
