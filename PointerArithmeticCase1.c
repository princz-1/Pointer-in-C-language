//Pointer can be incremented & decremented 
//CASE.1
#include <stdio.h>

int main(void) {
  //Increment
int age = 22;
  int *ptr = &age;
  printf("ptr = %u\n",ptr);
  ptr++;
  printf("ptr = %u\n",ptr);
  //Decrement
  ptr--;
  printf("ptr = %u\n",ptr);
  
  return 0;
}
