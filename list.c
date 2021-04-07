#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "node.h"

void initList(struct List* _list){

    _list->_first = NULL;
    _list->_last  = NULL;
    _list->_size  = 0;

}

bool isEmpty(struct List _list){

    if(_list._size == 0) return true;
    else return false;

}

void addNode(struct List* _list, int _nValue){

    struct Node* _newNode;
    alocAndInitNode(&_newNode);
    _newNode->_value = _nValue;
    
    if(isEmpty(*_list)){

        _list->_first = _newNode;
        _list->_last  = _newNode;

    }else{

        _newNode->_next = _list->_first;
        _list->_first    = _newNode;    

    }
    _list->_size++;

}

void printList(struct List _list){

    int i = 0;
    struct Node* _aux;
    for(i = 0, _aux = _list._first; i < _list._size; i++, _aux = _aux->_next){
        
        printNode(_aux);

    }

}