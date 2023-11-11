//Pointer can be incremented & decremented 
//CASE.3
#include <stdio.h>

int main(void) {
  //Increment
  char star = '*';
  char *ptr = &star;
  printf("ptr = %u\n",ptr);
  ptr++;
  printf("ptr = %u\n",ptr);
  //Decrement
  ptr--;
  printf("ptr = %u\n",ptr);

  return 0;
}
