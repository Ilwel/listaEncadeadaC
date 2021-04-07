#include <stdio.h>
#include "node.h"
#include "list.h"
//main tests

int main(void){
    
    //tests
    struct List L;
    initList(&L);
    addNode(&L, 1);
    addNode(&L, 2);
    addNode(&L, 3);
    printList(L);
    removeNode(&L, 3);
    removeNode(&L, 3);
    printList(L);
    
    return 0;

}