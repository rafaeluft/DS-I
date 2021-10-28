#include "Stack.h"
#include <stdio.h>
#define MAX 12
int main(){
  Stack *S1 = Stack_create();
  int V[] = {1,2,3,4,5,6,7,8,9,10,11,12};
  for(int i=0; i<MAX; i++){
    if(!Stack_push(S1, V[i])){
      printf("Nao consegui inserir o elemento V[%d]=%d\n",i, V[i]);
      puts("Overflow!!");
    }
  }
  int temp;
  while(Stack_pop(S1, &temp))
    printf("%d,", temp);
  return 0;
}