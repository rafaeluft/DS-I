#include "mySort.h"
#include <stdlib.h>
#include <stdio.h>
int comp(const void *pp1, const void *pp2){
  const int *p1= (int*) pp1;
  const int *p2= (int*) pp2;
  return *p1 - *p2;
}

void sort(int *V, int size){
  puts("Usando a sort do quicksort.c");
  qsort(V, size, sizeof(int), comp);
}
