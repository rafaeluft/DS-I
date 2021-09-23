#include "mySort.h"

void swap(int* v1, int *v2){
  int temp = *v1; 
  *v1 = *v2;
  *v2 = temp;
}

void sort(int *V, int size){
  int i,j;
  for(i=0; i<size; i++)
    for(j=i+1; j<size; j++)
      if(V[i]>V[j])
        swap(&V[i], &V[j]);
}
