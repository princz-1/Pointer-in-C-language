#include <stdio.h>

int main(void) {
/*Pointer to Pointer 
  syntex
  int **pptr;
  char**pptr;
  float**pptr;
  */

  float price =100.0;
  float *ptr = &price;
  float **pptr = &ptr;
  
  return 0;
}
