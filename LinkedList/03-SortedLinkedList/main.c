#include "TSLinkedList.h"
#include <stdio.h>
int main(){
    TSLinkedList* L1 = TSLinkedList_create();
    int V[] = {4, 5 , 1, -7, 3};
    for(int i=0; i<5; i++){
        if(!TSLinkedList_insert(L1, V[i]))
            printf("Não consegui inserir o V[%d]=%d\n", i, V[i]);
        TSLinkedList_print(L1);
    }

    return 0;
}