#include "Ponto.h"
#include <stdio.h>
#include <stdlib.h>

struct ponto{
  float x, y;
};
Ponto* Ponto_create(float x, float y){
  Ponto* novo = malloc(sizeof(Ponto));
  if(novo){
    novo->x = x;
    novo->y = y;
  }
  return novo;
}
void Ponto_print(Ponto* ponto){
  if(ponto!=NULL){
    printf("(%0.2f, %0.2f)", ponto->x, ponto->y);
  }
}

void Ponto_set(Ponto* ponto, float x, float y){
  if(ponto != NULL){
    ponto->x = x;
    ponto->y = y;
  }
}
/**
 * Faz a leitura das coordenadas do ponto para as variáveis
 * Params: Ponto*, x: float*, y: float*;
 * */
void Ponto_get(Ponto* ponto, float* x, float* y){
    if(ponto != NULL){
     *x = ponto->x;
     *y = ponto->y;
  }
}

