#ifndef STATIC_LIST_H
#define STATIC_LIST_H

typedef struct static_list TStaticList;

TStaticList* TStaticList_create();

void TStaticList_destroy(TStaticList*);
/**
 * Insere um elemento do tipo inteiro no fim da lista. 
 * @param TStaticList* ponteiro para a lista;
 * @param int : dado a ser inserido na lista;
 * @return int: 1 em caso de sucesso e 0 em caso de falha
 * */
int TStaticList_insert_end(TStaticList*, int);
/**
 * Insere um elemento do tipo inteiro no início da lista. 
 * @param TStaticList* ponteiro para a lista;
 * @param int : dado a ser inserido na lista;
 * @return int: 1 em caso de sucesso e 0 em caso de falha
 * */
int TStaticList_insert_begin(TStaticList*, int);
/**
 * Remove o elemento do tipo inteiro do fim da lista copiando-o para o parâmetro. 
 * @param TStaticList* ponteiro para a lista;
 * @param int* : endereço do dado a ser copiado antes de ser removido da lista;
 * @return int: 1 em caso de sucesso e 0 em caso de falha
 * */
int TStaticList_delete_end(TStaticList*, int* dado);

/**
 * Remove o elemento do tipo inteiro do inicio da lista copiando-o para o parâmetro. 
 * @param TStaticList* ponteiro para a lista;
 * @param int* : endereço do dado a ser copiado antes de ser removido da lista;
 * @return int: 1 em caso de sucesso e 0 em caso de falha
 * */
int TStaticList_delete_begin(TStaticList*, int*);
/**
 * Remove o elemento do tipo inteiro do inicio da lista copiando-o para o parâmetro. 
 * @param TStaticList* ponteiro para a lista;
 * @param int* : endereço do dado a ser copiado antes de ser removido da lista;
 * @param int : indice do valor a ser deletado
 * @return int: 1 em caso de sucesso e 0 em caso de falha
 * */
int TStaticList_delete_at(TStaticList*, int*, int);
/**
 * Imprimir os elementos inteiros de uma lista 
 * @param TStaticList* ponteiro para a lista;
 * */
void TStaticList_print(TStaticList*);

#endif