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
int Stack_push(Stack* stack, int info){
  TNo* novo = TNo_create_n_fill(info);
  if(!novo) return 0; //overflow
  novo->prox = stack->inicio;
  stack->inicio = novo;
  stack->qty++;
  return 1;
}
int Stack_pop(Stack* stack, int* info){
  if( Stack_empty(stack) == 1 ){
    //printf("Stack_pop info: %d\n", stack->inicio->info);
    (*info) = stack->inicio->info;
    TNo* aux = stack->inicio;
    stack->inicio = stack->inicio->prox;
    free(aux);
    stack->qty--;
    return 1;
  } return 0;
}
int Stack_head(Stack* stack, int* info){
    if(!Stack_empty(stack)){
    *info = stack->inicio->info;
    return 1;
  } return 0;

}
void Stack_destroy(Stack*);

int Stack_full(Stack* stack){
  return 0;
}
int Stack_empty(Stack* stack){
  return (stack->qty == 0) ? 1 : 0;
}
int Stack_qty(Stack* stack){
  return stack->qty;
}