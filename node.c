#include <stdio.h>
#include <stdlib.h>
#include "node.h"
//Node implementations 

void initNode(struct Node* _node){
    //starting values from a node

    _node->_value = 0;
    _node->_next  = NULL;

}

void alocAndInitNode(struct Node** _node){

    //allocating node
    *_node = malloc(sizeof(Node));
    //initializing node
    initNode(*_node);


}
void freeNode(struct Node** _node){
    //freeing up space in memory
    
    free(*_node);

}

void printNode(struct Node* _node){
    //printing value on the console
    
    printf("%d\n", _node->_value);

}