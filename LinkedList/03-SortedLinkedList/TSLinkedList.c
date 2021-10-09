#include "TSLinkedList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no* prox;
}TNo;

TNo* TNo_createNFill(int);

struct s_linked_list{
    TNo* inicio;
};
TSLinkedList* TSLinkedList_create(){
    TSLinkedList* nova = malloc(sizeof(TSLinkedList));
    if(nova!=NULL){
        nova->inicio = NULL;
    } return nova;
}
/**
 * Insere um inteiro no início da lista.
 * @param TSLinkedList* ponteiro da lista
 * @param int informação a ser inserida
 * @return _Bool (se deu certo ou não)
 * */
_Bool TSLinkedList_insert(TSLinkedList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo==NULL) return false;
    
    if(lista->inicio == NULL){
        lista->inicio = novo;
    }else{
        //Caso 2.i
        if(novo->info < lista->inicio->info)
        {
            novo->prox = lista->inicio;
            lista->inicio = novo;
        } //Caso 2.ii
        else{
            TNo* y = lista->inicio;
            while(y->prox != NULL){
                if(y->prox->info >novo->info)
                    break;
                y = y->prox;
            }
            novo->prox = y->prox;
            y->prox = novo;
        }
    }
    return true;
}

void TSLinkedList_print(TSLinkedList* lista){
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