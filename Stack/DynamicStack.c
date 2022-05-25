#include "Stack.h"
#include <stdlib.h>
#include<stdio.h>

typedef struct no{
  int info;
  struct no* prox;
}TNo;

struct stack{
  TNo* inicio;
  int qty;
};

TNo* TNo_create_n_fill(int info){
  TNo* novo = malloc(sizeof(TNo));
  if(novo){
    novo->info = info;
    novo->prox = NULL;
  } return novo;
}

Stack* Stack_create(){
  Stack* nova = malloc(sizeof(Stack));
  if(nova){
    nova->inicio = NULL;
    nova->qty = 0;
  }return nova;
}
bool Stack_push(Stack* stack, int info){
  TNo* novo = TNo_create_n_fill(info);
  if(novo==NULL) return false; //overflow
  novo->prox = stack->inicio;
  stack->inicio = novo;
  stack->qty++;
  return true;
}
bool  Stack_pop(Stack* stack, int *info){
  if(!Stack_empty(stack)){
    //printf("Stack_pop info: %d\n", stack->inicio->info);
    (*info) = stack->inicio->info;
    TNo* aux = stack->inicio;
    stack->inicio = stack->inicio->prox;
    free(aux);
    stack->qty--;
    return true;
  } return false;
}
bool Stack_head(Stack* stack, int* info){
  if(!Stack_empty(stack)){
    *info = stack->inicio->info;
    return true;
  } 
  return false;
}
void Stack_destroy(Stack* stack){
  int temp;
  while(Stack_pop(stack, &temp));
  free(stack);
}

bool Stack_full(Stack* stack){
  return false;
}
bool Stack_empty(Stack* stack){
  return (stack->qty == 0);
}
int Stack_qty(Stack* stack){
  return stack->qty;
}