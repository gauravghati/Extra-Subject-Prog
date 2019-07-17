#include<stdio.h>
#include<stdlib.h>

int main(){

  /* Dynamic Memory Allocation by malloc funtion for Single Array */

  /* CONTINOUS MEMORY ALLOCATION  */

  int i;
  int *ptr;
  ptr = (int*)malloc(4 * sizeof(int));

  for(i=0; i<4; i++){
    scanf("%d", ptr+i);
  }

  for(i=0; i<4; i++){
    printf("%d  ", *(ptr++));
  }

  return 0;
}
