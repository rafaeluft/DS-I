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
bool Stack_push(Stack* stack, int info){
  if (!Stack_full(stack)){
    stack->index++;
    stack->data[stack->index] = info;
    return true;
  } return false; //overflow
}

bool Stack_pop(Stack* stack, int* info){
  if(!Stack_empty(stack)){
    *info = stack->data[stack->index];
    stack->index--;
    return true;
  } return false; //underflow
}
bool Stack_head(Stack* stack, int* info){
  if(!Stack_empty(stack)){
    *info = stack->data[stack->index];
    return true;
  } return false;
}
void Stack_destroy(Stack* stack){
  free(stack);
}
bool Stack_full(Stack* stack){
  return stack->index==MAX-1;
}

bool Stack_empty(Stack* stack){
  return stack->index == -1;
}

int Stack_qty(Stack* stack){
  return stack->index+1;
}