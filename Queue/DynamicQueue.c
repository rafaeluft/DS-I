#include "Queue.h"
#include <stdlib.h>

typedef struct no{
  int info;
  struct no* prox;
}TNo;
TNo* TNo_createNFill(int info){
  TNo* novo = malloc(sizeof(TNo));
  if(novo){
    novo->info = info;
    novo->prox = novo;
  }return novo;
}

struct queue{
  TNo* end;
  int qty;
};

Queue* Queue_create(){
  Queue* nova = malloc(sizeof(Queue));
  if(nova){
    nova->end = NULL;
    nova->qty = 0;
  }
  return nova;
}
void Queue_destroy(Queue*);

int Queue_enqueue(Queue* fila, int info){
  TNo* novo = TNo_createNFill(info);
  if(!novo) return 0;
  if(fila->end == NULL)
    fila->end = novo;
  else{
      novo->prox = fila->end->prox;
      fila->end->prox = novo;
      fila->end = novo;
  } 
  fila->qty++;
  return 1;
}
int Queue_dequeue(Queue* fila, int* info){
  if(Queue_empty(fila)) return 0;
  TNo* oldBegin = fila->end->prox;
  *info = oldBegin->info;
  fila->end->prox = oldBegin->prox;
  free(oldBegin);
  fila->qty--;
  if(fila->qty==0)
    fila->end = NULL;
  return 1;
}

int Queue_head(Queue* fila, int* info){
  if(Queue_empty(fila)) return 0;
  TNo* oldBegin = fila->end->prox;
  *info = oldBegin->info;
  return 1;
}

int Queue_full(Queue* fila){
  return 0;
}
int Queue_empty(Queue* fila){
  return fila->end == NULL;
}
int Queue_qty(Queue* fila){
  return fila->qty;
}