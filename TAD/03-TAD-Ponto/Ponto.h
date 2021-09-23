#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;
/**
 * Cria instâncias de Ponto.
 * Params: x e y do tipo float
 * */
Ponto* Ponto_create(float, float);
/**
 * Imprime um ponto*. 
 * Params: Ponto*
 * */
void Ponto_print(Ponto*);
/**
 * Atribui os valores para as coordenadas do ponto. 
 * Params: Ponto*, x: float, y: float;
 * */
void Ponto_set(Ponto*, float, float);
/**
 * Faz a leitura das coordenadas do ponto para as variáveis
 * Params: Ponto*, x: float*, y: float*;
 * */
void Ponto_get(Ponto*, float*, float*);

#endif