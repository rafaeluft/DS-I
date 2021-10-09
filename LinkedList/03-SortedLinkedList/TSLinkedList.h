#ifndef TSLINKED_LIST_H
#define TSLINKED_LIST_H
#include <stdbool.h>

typedef struct s_linked_list TSLinkedList;
/**
 * Cria uma uma instância válida de TSLinkedList
 * @return TSLinkedList*
 * */
TSLinkedList* TSLinkedList_create();
/**
 * Deleta apropriadamente uma uma instância válida de TSLinkedList
 * @param TSLinkedList* ponteiro para uma lista válida
 *  */
void TSLinkedList_destroy(TSLinkedList*);
/**
 * Insere um inteiro no início da lista.
 * @param TSLinkedList* ponteiro da lista
 * @param int informação a ser inserida
 * @return _Bool (se deu certo ou não)
 * */
_Bool TSLinkedList_insert(TSLinkedList*, int);
/**
 * Imprime uma lista 
 * @param TSLinkedList* ponteiro para uma lista válida
 *  */
void TSLinkedList_print(TSLinkedList*);

#endif