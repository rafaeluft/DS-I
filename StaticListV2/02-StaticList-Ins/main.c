#include "TStaticList.h"
#include <stdio.h>

int main(){
  TStaticList* lista1 = TStaticList_create();
  int V[] = {2, 3, 4, 5, 6, 7, 10, -1, -3, 8, 29};
  for(int i=0; i < 6; i++)
    if(!TStaticList_insert_begin(lista1, V[i]))
      printf("Nao consegui inserir o V[%d]=%d\n", i, V[i]);

  TStaticList_print(lista1);
  TStaticList_insert_at(lista1, -50, 2);
  TStaticList_print(lista1);

  return 0;
}