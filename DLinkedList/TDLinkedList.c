#include "TDLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no* prox;
    struct no* ant;
}TNo;
//Headers auxiliares
TNo* TNo_createNFill(int);
TNo* TDLinkedList_search(TDLinkedList*, int);

struct dlinked_list{
    TNo *inicio, *fim;
};

TDLinkedList* TDLinkedList_create(){
    TDLinkedList* nova = malloc(sizeof(TDLinkedList));
    if(nova!=NULL){
        nova->inicio = NULL;
        nova->fim = NULL;
    } return nova;
}

void TDLinkedList_destroy(TDLinkedList* lista){
    //TODO
}

_Bool TDLinkedList_insert_begin(TDLinkedList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo==NULL) return false;
    
    if(lista->inicio == NULL)
        lista->fim = novo;
    else
        lista->inicio->ant = novo;
    
    novo->prox = lista->inicio;
    lista->inicio = novo;
    return true;
}

_Bool TDLinkedList_insert_end(TDLinkedList* lista, int info){
    //TODO:
    return false;
}
_Bool TDLinkedList_delete_from_begin(TDLinkedList* lista, int* info){
    //TODO:
    return false;
}

_Bool TDLinkedList_delete_info(TDLinkedList* lista, int info){
    //TODO
    return false;
}

void TDLinkedList_print_r(TDLinkedList* lista){
    TNo* aux = lista->fim;
    while(aux!=NULL){
        printf("<-[%d]-> ", aux->info);
        aux = aux->ant;
    }
    putchar('\n');
}

void TDLinkedList_print(TDLinkedList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("<-[%d]-> ", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}

//Auxiliares

TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo!=NULL){
        novo->info = info;
        novo->prox = NULL;
        novo->ant = NULL;
    } return novo;
}

TNo* TDLinkedList_search(TDLinkedList* lista, int info){
    //TODO: Implemente esta função como exercício
    return NULL;
}
