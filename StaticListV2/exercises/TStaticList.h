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
 * Deleta um elemento do tipo inteiro do fim da 
 * lista e copia o elemento deletado para uma variável.
 * @param TStaticList* ponteiro para a lista;
 * @param int* : ponteiro para o dado a ser copiado antes de ser deletado.
 * @return _Bool: true em caso de sucesso e false em caso de falha
 * */
_Bool TStaticList_delete_end(TStaticList*, int*);
/**
 * Deleta um elemento do tipo inteiro do início da 
 * lista e copia o elemento deletado para uma variável.
 * @param TStaticList* ponteiro para a lista;
 * @param int* : ponteiro para o dado a ser copiado antes de ser deletado.
 * @return _Bool: true em caso de sucesso e false em caso de falha
 * */
_Bool TStaticList_delete_begin(TStaticList*, int*);
/**
  Deleta um elemento do tipo inteiro de uma posição qualquer da 
 * lista e copia o elemento deletado para uma variável.
 * @param TStaticList* ponteiro para a lista;
 * @param int* : dado a ser resgatado da lista;
 * @param int : posição desejada.
 * @return _Bool: true em caso de sucesso e false em caso de falha
 * */
_Bool TStaticList_delete_at(TStaticList*, int*, int);
/**
 * Imprimir os elementos inteiros de uma lista 
 * @param TStaticList* ponteiro para a lista;
 * */
void TStaticList_print(TStaticList*);
//Exercícios
/**
 * Concatena duas listas.
 * @param TStaticList* ponteiro para a lista 1;
 * @param TStaticList* ponteiro para a lista 2;
 * @return TStaticList* ponteiro para a lista criada com o resultado
 * */
TStaticList* TStaticList_concatenate(TStaticList*, TStaticList*);


#endif