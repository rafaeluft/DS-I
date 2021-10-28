#include "Stack.h"
#include <stdlib.h>
#define MAX 10

struct stack{
  int index;
  int data[MAX];
};

Stack* Stack_create(){
  Stack* nova = malloc(sizeof(Stack));
  if(nova){
    nova->index = -1;
  } return nova;
}
int Stack_push(Stack* stack, int info){
  if (!Stack_full(stack)){
    stack->index++;
    stack->data[stack->index] = info;
    return 1;
  } return 0; //overflow
}

int Stack_pop(Stack* stack, int* info){
  if(!Stack_empty(stack)){
    *info = stack->data[stack->index];
    stack->index--;
    return 1;
  } return 0; //underflow
}
int Stack_head(Stack* stack, int* info){
  if(!Stack_empty(stack)){
    *info = stack->data[stack->index];
    return 1;
  } return 0;
}
void Stack_destroy(Stack* stack){
  free(stack);
}
int Stack_full(Stack* stack){
  return stack->index==MAX-1;
}

int Stack_empty(Stack* stack){
  return stack->index == -1;
}

int Stack_qty(Stack* stack){
  return stack->index+1;
}