#ifndef STATIC_LIST_H
#define STATIC_LIST_H
#include <stdbool.h>

typedef struct static_list TStaticList;

TStaticList* TStaticList_create();

void TStaticList_destroy(TStaticList*);
/**
 * Insere um elemento do tipo inteiro no fim da lista. 
 * @param TStaticList* ponteiro para a lista;
 * @param int : dado a ser inserido na lista;
 * @return _Bool: true em caso de sucesso e false em caso de falha
 * */
_Bool TStaticList_insert_end(TStaticList*, int);
/**
 * Insere um elemento do tipo inteiro no início da lista. 
 * @param TStaticList* ponteiro para a lista;
 * @param int : dado a ser inserido na lista;
 * @return _Bool: true em caso de sucesso e false em caso de falha
 * */
_Bool TStaticList_insert_begin(TStaticList*, int);
/**
 * Insere um elemento do tipo inteiro na posição desejada da lista. 
 * Os dados são movimentados para receber o novo item.
 * @param TStaticList* ponteiro para a lista;
 * @param int : dado a ser inserido na lista;
 * @param int : posição desejada.
 * @return _Bool: true em caso de sucesso e false em caso de falha
 * */
_Bool TStaticList_insert_at(TStaticList*, int, int);
/**
 * Imprimir os elementos inteiros de uma lista 
 * @param TStaticList* ponteiro para a lista;
 * */
void TStaticList_print(TStaticList*);

#endif