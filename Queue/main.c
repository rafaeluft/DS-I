#include<stdio.h>
#include "Queue.h"

int main(){
  Queue* f1 = Queue_create();
  int V[] = {1,2,3,4,5,6};
  for(int i=0; i<6; i++){
    printf("Inserindo o V[%i]=%i\n", i, V[i]);
    if(!Queue_enqueue(f1, V[i]))
      printf("Nao pude inserir o V[%i]=%i\n", i, V[i]);
  }
    
  int temp;
  while(Queue_dequeue(f1, &temp))
    printf("%d,", temp);
  return 0;
}