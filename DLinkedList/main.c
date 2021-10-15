#include "TDLinkedList.h"
#include <stdio.h>
int main(){
    TDLinkedList* L1 = TDLinkedList_create();
    int V[] = {1, 4 , 5, 7};
    for(int i=0; i<4; i++){
        if(!TDLinkedList_insert_begin(L1, V[i]))
            printf("Não consegui inserir o V[%d]=%d na L1\n", i, V[i]);
        TDLinkedList_print(L1);
    }
    TDLinkedList_print(L1);
    TDLinkedList_print_r(L1);
    //TDLinkedList_destroy(L1);
    return 0;
}