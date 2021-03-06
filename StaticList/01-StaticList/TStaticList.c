#include "TStaticList.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX 10

struct static_list{
  int qty;
  int data[MAX];
};
//Headers for auxiliary functions
int TStaticList_is_full(TStaticList*);

TStaticList* TStaticList_create(){
  TStaticList* novo = malloc(sizeof(TStaticList));
  if(novo!=NULL){
    novo->qty = 0;
  }
  return novo;
}

int TStaticList_insert(TStaticList* lista, int dado){
  if (TStaticList_is_full(lista))
    return 0;
  lista->data[lista->qty] = dado;
  lista->qty++;
  return 1;
}

void TStaticList_print(TStaticList* lista){
  for(int i=0; i<lista->qty; i++)
    printf("[%d], ", lista->data[i]);
  putchar('\n');
}

int TStaticList_is_full(TStaticList* lista){
  return (lista->qty == MAX);
}