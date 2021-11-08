#include "TCircularList.h"
#include <stdio.h>
int main(){
    TCircularList* L1 = TCircularList_create();
    int V[] = {1, 4 , 5, 7};
    for(int i=0; i<4; i++){
        if(!TCircularList_insert_end(L1, V[i]))
            printf("Não consegui inserir o V[%d]=%d na L1\n", i, V[i]);
    }
    TCircularList_print(L1);
    TCircularList_remove_after_n_steps(L1, 4);
    TCircularList_print(L1);
    return 0;
}