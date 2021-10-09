#include "TLinkedList.h"
#include <stdio.h>
int main(){
    TLinkedList* L1 = TLinkedList_create();
    TLinkedList* L2 = TLinkedList_create();
    int V[] = {1, 4 , 5, 7};
    for(int i=0; i<4; i++){
        if(!TLinkedList_insert_end(L1, V[i]))
            printf("Não consegui inserir o V[%d]=%d na L1\n", i, V[i]);
    }
    TLinkedList_print(L1);
    int temp=10;
    if(TLinkedList_delete_info(L1, temp)){
        printf("Deletei o valor %d da lista!\n", temp);
    }
    TLinkedList_print_r(L1);
    TLinkedList_destroy(L1);
    TLinkedList_destroy(L2);
    return 0;
}