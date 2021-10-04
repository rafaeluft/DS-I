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

_Bool TStaticList_insert_end(TStaticList* lista, int dado){
  return TStaticList_insert_at(lista, dado, lista->qty);
/*  if (TStaticList_is_full(lista))
    return false;
  lista->data[lista->qty] = dado;
  lista->qty++;
  return true;
  */
}

_Bool TStaticList_insert_begin(TStaticList* lista, int dado){
  return TStaticList_insert_at(lista, dado, 0);
/*  if (TStaticList_is_full(lista))
    return false;
  //Copiar os dados para abrir espaço
  for(int i=lista->qty; i>0; i--)
    lista->data[i] = lista->data[i-1];

  lista->data[0] = dado;
  lista->qty++;
  return true;
  */
}

_Bool TStaticList_insert_at(TStaticList* lista, int dado, int pos){
  if (TStaticList_is_full(lista) || pos<0 || pos>lista->qty)
    return false;
  //Copiar os dados para abrir espaço
  for(int i=lista->qty; i>pos; i--)
    lista->data[i] = lista->data[i-1];

  lista->data[pos] = dado;
  lista->qty++;
  return true;
}

void TStaticList_print(TStaticList* lista){
  for(int i=0; i<lista->qty; i++)
    printf("[%d], ", lista->data[i]);
  putchar('\n');
}

int TStaticList_is_full(TStaticList* lista){
  return (lista->qty == MAX);
}