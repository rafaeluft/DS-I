#include "TSortedStaticList.h"
#include <stdio.h>

int main(){
  TSStaticList* lista1 = TSStaticList_create();
  int V[] = {2, 3, 4, 5, 6, 7, 10, -1, -3, 8, 29};
  for(int i=0; i < 11; i++)
    if(!TSStaticList_insert_opt(lista1, V[i]))
      printf("Nao consegui inserir o V[%d]=%d\n", i, V[i]);

  TSStaticList_print(lista1);
  return 0;
}