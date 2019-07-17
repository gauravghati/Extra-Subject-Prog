#include<stdio.h>
#include<stdlib.h>
using namespace std

int main(){

  /* Dynamic Memory Allocation by malloc
  funtion for 2D Array by Double pointers */

  /* CONTINOUS MEMORY ALLOCATION  */

  int i,j;
  int r=3;
  int c=3;
  int **ptr = (int**) malloc(r*c* sizeof(int));

  for(i=0;i<r;i++)
    for(j=0; j<c; j++){
      scanf("%d", (ptr + i*c + j));
    }

    for(i=0;i<r;i++){
      for(j=0; j<c; j++){
        printf("%d ", *(ptr++));
      }
      printf("\n");
    }

  return 0;
}
