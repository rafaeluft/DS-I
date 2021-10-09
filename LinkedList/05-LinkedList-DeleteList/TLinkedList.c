#include "TLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no* prox;
}TNo;
//Headers auxiliares
TNo* TNo_createNFill(int);
TNo* TLinkedList_search(TLinkedList*, int);
void TNo_print_r(TNo*);

struct linked_list{
    TNo* inicio;
};
TLinkedList* TLinkedList_create(){
    TLinkedList* nova = malloc(sizeof(TLinkedList));
    if(nova!=NULL){
        nova->inicio = NULL;
    } return nova;
}

void TLinkedList_destroy(TLinkedList* lista){
    int temp;
    while(lista->inicio!=NULL)
        TLinkedList_delete_from_begin(lista, &temp);
    free(lista);
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
_Bool TLinkedList_delete_from_begin(TLinkedList* lista, int* info){
    if(lista->inicio == NULL) return false;

    *info = lista->inicio->info;
    TNo* temp = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(temp);
    return true;
}

_Bool TLinkedList_delete_info(TLinkedList* lista, int info){
    if(lista->inicio == NULL) return false;
    TNo* search = TLinkedList_search(lista, info);
    if(search==NULL) return false;
    if(search == lista->inicio){
        lista->inicio = lista->inicio->prox;
    }else{
        TNo* y = lista->inicio;
        while(y->prox != search){
            y = y->prox;
        }
        y->prox = search->prox;
    }
    free(search);
    return true;
}

void TLinkedList_print_r(TLinkedList* lista){
    //puts("print_r");
    TNo_print_r(lista->inicio);
    putchar('\n');
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

TNo* TLinkedList_search(TLinkedList* lista, int info){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        if(aux->info == info)
            break;
        aux=aux->prox;
    }
    return aux;
}

void TNo_print_r(TNo* aux){
    if(aux!=NULL){
        TNo_print_r(aux->prox);
        printf("[%d]-> ", aux->info);
    }
}