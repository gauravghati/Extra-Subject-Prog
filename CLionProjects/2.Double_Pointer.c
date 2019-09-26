#include<stdio.h>

int main(){

  /* Pointer to Pointer */

  int var = 45;
  int *ptr = &var;
  int **ptr2 = &ptr;
  printf("**ptr2 = %d\n",**ptr2);
  printf("ptr2 = %d\n", ptr2);
  printf("ptr = %d\n", ptr);
  printf("*ptr = %d\n",*ptr);
  printf("var = %d\n", var);
  return 0;
}
