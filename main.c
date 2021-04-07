#include <stdio.h>
#include "node.h"
//main tests

int main(void){
    
    //simple node test
    struct Node* a;
    alocAndInitNode(&a);
    printNode(a);
    freeNode(&a);

    return 0;

}