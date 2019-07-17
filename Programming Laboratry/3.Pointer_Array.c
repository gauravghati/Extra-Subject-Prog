#include<stdio.h>

int main(){

  /* Dynamic Memory allocation */

  /* CONTINOUS MEMORY ALLOCATION  */

  int i=0;
  float var[3] = {1,10,101};
  float *ptr;
  ptr = var;

  for(i=0; i<3; i++){
    printf("%d\n",ptr+i);
    printf("%f\n", *(ptr+i));
  }
  return 0;
}
