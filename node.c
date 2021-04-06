#include <stdio.h>
#include <stdlib.h>
//primeiro passo é implementar um nó para a estrutura
struct Node{

    int _value;
    struct Node* _next;

}Node;

void initNode(struct Node* _node){

    _node->_value = 0;
    _node->_next  = NULL;

}

void alocAndInitNode(struct Node** _node){

    //alocando o nó
    *_node = malloc(sizeof(Node));
    //iniciando o nó    
    initNode(*_node);


}

void printNode(struct Node* _node){

    printf("%d", _node->_value);

}



int main(void){
    //main para testes da estrutura
    struct Node* a;
    alocAndInitNode(&a);
    printNode(a);

    return 0;

}