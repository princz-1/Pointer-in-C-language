//Print the value of 'i' from its pointer to pointer ?
#include <stdio.h>

int main(void) {
int i =5;
  int *ptr = &i;
  int **pptr = &ptr;
  printf("The value of i is : %d\n", **pptr);
  return 0;
}
