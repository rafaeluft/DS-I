#include "Ponto.h"
#include<stdio.h>

int main(){
  Ponto* p1;
  p1 = Ponto_create(2.5, 6);
  Ponto_print(p1);
  float x, y;
  Ponto_get(p1, &x, &y);
  printf("\nx=%f, y=%f\n", x, y);
  Ponto_set(p1, 10, 20);
  Ponto_print(p1);
  return 0;
}