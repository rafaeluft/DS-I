#include "TSortedStaticList.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX 10

struct static_list{
  int qty;
  int data[MAX];
};
//Headers for auxiliary functions
int TSStaticList_is_full(TSStaticList*);
int TSStaticList_is_empty(TSStaticList*);

TSStaticList* TSStaticList_create(){
  TSStaticList* novo = malloc(sizeof(TSStaticList));
  if(novo!=NULL){
    novo->qty = 0;
  }
  return novo;
}
/**
 * Primeira versão
 * */
int TSStaticList_insert(TSStaticList* lista, int dado){
  if (TSStaticList_is_full(lista))
    return 0;
  if(TSStaticList_is_empty(lista))
    lista->data[0] = dado;
  else{
    int pos;
    if(dado < lista->data[0]){
      pos = 0;
    }else{
      //Procurar a posição correta de inserção do nosso elemento
      for(pos=0; pos < lista->qty; pos++)
        if(lista->data[pos]>dado)
            break;
    }
    //pos tem a posição que eu quero mover os dados para ser colocado
    for(int i=lista->qty; i>pos; i--)
      lista->data[i] = lista->data[i-1];
    lista->data[pos] = dado;
  }
  lista->qty++;
  return 1;
}

int TSStaticList_insert_opt(TSStaticList* lista, int dado){
  if (TSStaticList_is_full(lista))
    return 0;
  if(TSStaticList_is_empty(lista))
    lista->data[0] = dado;
  else{
    int pos=0;
    //Procurar a posição correta de inserção do nosso elemento
    for(; pos < lista->qty && lista->data[pos]<dado; pos++)
      ;
    //pos tem a posição que eu quero mover os dados para ser colocado
    for(int i=lista->qty; i>pos; i--)
      lista->data[i] = lista->data[i-1];
    lista->data[pos] = dado;
  }
  lista->qty++;
  return 1;
}

void TSStaticList_print(TSStaticList* lista){
  for(int i=0; i<lista->qty; i++)
    printf("[%d], ", lista->data[i]);
  putchar('\n');
}

int TSStaticList_is_full(TSStaticList* lista){
  return (lista->qty == MAX);
}
int TSStaticList_is_empty(TSStaticList* lista){
  return (lista->qty == 0);
}