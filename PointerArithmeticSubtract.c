// We can also subtract one pointer from another 
// we can also compare 2 pointers
// only same datatype difference int-->int(true),int-->char(false)

#include <stdio.h>
//Example
int main(void) {
  int age = 22;
  int _age = 23;
  int *ptr = &age;
  int *_ptr = &_age;

  printf("%u ,%u ,Difference = %u\n",ptr,_ptr,ptr - _ptr); //Difference 1 integer=(4byte)
  _ptr = &age;
  printf("comparison = %u\n",ptr == _ptr);
  
  return 0;
}
