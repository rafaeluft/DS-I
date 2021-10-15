#ifndef TDLINKED_LIST_H
#define TDLINKED_LIST_H
#include <stdbool.h>
//Double linked list
typedef struct dlinked_list TDLinkedList;
/**
 * Cria uma uma instância válida de TDLinkedList
 * @return TDLinkedList*
 * */
TDLinkedList* TDLinkedList_create();
/**
 * Deleta apropriadamente uma uma instância válida de TDLinkedList
 * @param TDLinkedList* ponteiro para uma lista válida
 *  */
void TDLinkedList_destroy(TDLinkedList*);
/**
 * Insere um inteiro no início da lista.
 * @param TDLinkedList* ponteiro da lista
 * @param int informação a ser inserida
 * @return _Bool (se deu certo ou não)
 * */
_Bool TDLinkedList_insert_begin(TDLinkedList*, int);
/**
 * Insere um inteiro no fim da lista.
 * @param TDLinkedList* ponteiro da lista
 * @param int informação a ser inserida
 * @return _Bool (se deu certo ou não)
 * */
_Bool TDLinkedList_insert_end(TDLinkedList*, int);
/**
 * Deleta um nó do início da lista.
 * @param TDLinkedList* ponteiro da lista
 * @param int* informação a ser resgatada antes da remoção
 * @return _Bool (se deu certo ou não)
 * */
_Bool TDLinkedList_delete_from_begin(TDLinkedList*, int*);
/**
 * Busca e Deleta o primeiro nó cujo valor é encontrado.
 * @param TDLinkedList* ponteiro da lista
 * @param int informação a ser pesquisada
 * @return _Bool (se deu certo ou não)
 * */
_Bool TDLinkedList_delete_info(TDLinkedList*, int);
/**
 * Imprime uma lista 
 * @param TDLinkedList* ponteiro para uma lista válida
 *  */
void TDLinkedList_print(TDLinkedList*);
/**
 * Imprime uma lista de maneira recursiva.
 * @param TDLinkedList* ponteiro para uma lista válida
 *  */
void TDLinkedList_print_r(TDLinkedList*);

#endif