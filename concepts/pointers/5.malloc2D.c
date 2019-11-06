#include<stdio.h>
#include<stdlib.h>

int main(){

  /* Dynamic Memory allocation by melloc
  funtion for 2D Array by Single pointer
      (2D Array as a Single Array)       */

  /* CONTINOUS MEMORY ALLOCATION  */

  int i,j;
  int r,c;

  scanf("%d %d",&r, &c);
  int *arr = malloc(r*c*sizeof(int));

  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      scanf("%d", (arr+i*c+j));
    }
  }

  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      printf("%d ", *(arr+i*c+j));
    }
    printf("\n");
  }

  return 0;
}
