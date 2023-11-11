//Pointer Basic Code 
#include <stdio.h>

int main(void) {
  int age =22;
  int *ptr = &age;
  int _age = *ptr;


  
  //value print
  printf("%d\n", age);
  printf("%d\n",*ptr);
  printf("%d\n",*(&age));


  
  //Address print (Hexadecimal number print)
  printf("%p\n",&age);
  //unsigned number print (integer number print)
  printf("%u\n",&age);
  //print ptr
  printf("%u\n",ptr);
  //print address of ptr
  printf("%u\n",&ptr);
  
  return 0;
}