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
int TStaticList_is_empty(TStaticList*);

TStaticList* TStaticList_create(){
  TStaticList* novo = malloc(sizeof(TStaticList));
  if(novo!=NULL){
    novo->qty = 0;
  }
  return novo;
}

int TStaticList_insert_end(TStaticList* lista, int dado){
  if (TStaticList_is_full(lista))
    return 0;
  lista->data[lista->qty] = dado;
  lista->qty++;
  return 1;
}

int TStaticList_insert_begin(TStaticList* lista, int dado){
  if (TStaticList_is_full(lista))
    return 0;
  for(int i=lista->qty; i>0; i--)
    lista->data[i] = lista->data[i-1];
  lista->data[0] = dado;
  lista->qty++;
  return 1;
}
void TStaticList_print(TStaticList* lista){
  for(int i=0; i<lista->qty; i++)
    printf("[%d], ", lista->data[i]);
  putchar('\n');
}

int TStaticList_delete_end(TStaticList* lista, int* dado){
  if(TStaticList_is_empty(lista))
    return 0;
  *dado = lista->data[lista->qty-1];
  lista->qty--;
  return 1;
}


int TStaticList_delete_begin(TStaticList* lista, int* dado){
  if(TStaticList_is_empty(lista))
    return 0;
  *dado = lista->data[0];
  for(int i=0; i<lista->qty-1; i++)
    lista->data[i] = lista->data[i+1];
  lista->qty--;
  return 1;
}

int TStaticList_delete_at(TStaticList* lista, int* dado, int index){
  if(TStaticList_is_empty(lista) && index <0 || index >= lista->qty)
    return 0;
  *dado = lista->data[index];
  for(int i=index; i<lista->qty-1; i++)
    lista->data[i] = lista->data[i+1];
  lista->qty--;
  return 1;
}

int TStaticList_is_full(TStaticList* lista){
  return (lista->qty == MAX);
}
int TStaticList_is_empty(TStaticList* lista){
  return (lista->qty == 0);
}