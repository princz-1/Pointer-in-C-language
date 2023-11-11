//Pointer Basic Code 
#include <stdio.h>

int main(void) {
  int age =22;
  int *ptr = &age;
  int _age = *ptr;

  printf("%d", _age);
  return 0;
}