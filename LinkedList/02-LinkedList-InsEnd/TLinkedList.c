#include "TLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no* prox;
}TNo;

TNo* TNo_createNFill(int);

struct linked_list{
    TNo* inicio;
};
TLinkedList* TLinkedList_create(){
    TLinkedList* nova = malloc(sizeof(TLinkedList));
    if(nova!=NULL){
        nova->inicio = NULL;
    } return nova;
}
_Bool TLinkedList_insert_begin(TLinkedList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo==NULL) return false;
    
    if(lista->inicio != NULL)
        novo->prox = lista->inicio;
    lista->inicio = novo;
    return true;
}

_Bool TLinkedList_insert_end(TLinkedList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo==NULL) return false;
    
    if(lista->inicio == NULL)
        lista->inicio = novo;
    else{
        //Procurar o elemento do fim
        TNo* aux = lista->inicio;
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo;
    }
    return true;
}
void TLinkedList_print(TLinkedList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("[%d]-> ", aux->info);
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
    } return novo;
}