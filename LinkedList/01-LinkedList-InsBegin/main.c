#include "TLinkedList.h"
#include <stdio.h>
int main(){
    TLinkedList* L1 = TLinkedList_create();
    int V[] = {1, 4 , 5, 7};
    for(int i=0; i<4; i++){
        if(!TLinkedList_insert(L1, V[i]))
            printf("Não consegui inserir o V[%d]=%d\n", i, V[i]);
    }
    TLinkedList_print(L1);
    return 0;
}