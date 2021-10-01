#ifndef SORTED_STATIC_LIST_H
#define SORTED_STATIC_LIST_H

typedef struct static_list TSStaticList;

TSStaticList* TSStaticList_create();

void TSStaticList_destroy(TSStaticList*);
/**
 * Insere um elemento do tipo inteiro de maneira ordenada ascendente. 
 * @param TSStaticList* ponteiro para a lista;
 * @param int : dado a ser inserido na lista;
 * @return int: 1 em caso de sucesso e 0 em caso de falha
 * */
int TSStaticList_insert(TSStaticList*, int);
int TSStaticList_insert_opt(TSStaticList*, int);
/**
 * Imprimir os elementos inteiros de uma lista 
 * @param TSStaticList* ponteiro para a lista;
 * */
void TSStaticList_print(TSStaticList*);

#endif