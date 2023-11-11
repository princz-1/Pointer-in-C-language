//Pointer can be incremented & decremented 
//CASE.2
#include <stdio.h>

int main(void) {
  //Increment
float price = 20.0;
  float *ptr = &price;
  printf("ptr = %u\n",ptr);
  ptr++;
  printf("ptr = %u\n",ptr);
  //Decrement
  ptr--;
  printf("ptr = %u\n",ptr);

  return 0;
}
