#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "mySort.h"

int* createNFill(int size, int max){
  int *V = malloc(sizeof(int)*size);
  if(V!=NULL){
    srand(time(NULL));
    for(int i=0; i<size; i++)
      V[i] = rand()%(max+1);
  }
  return V;
}

void printV(int V[], int size){
  for(int i=0; i< size; i++)
    printf("%d, ", V[i]);
  putchar('\n');
}

int main(){
  const int size = 10;
  int *V1 = createNFill(size, 100);
  if(V1==NULL) return 1;
  printV(V1, size);
  sort(V1, size);
  printV(V1, size);
  return 0;
}