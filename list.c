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

bool correctPos(struct List _list, int _index){

    if(_index <= _list._size && _index > 0) return true;
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
        _list->_first   = _newNode;    

    }
    _list->_size++;

}

void removeNode(struct List* _list, int _index){

    if(correctPos(*_list, _index)){

        int i = 0;
        struct Node* _aux;
        for(i = 0, _aux = _list->_first; i < _index - 2; i++, _aux = _aux->_next);

        struct Node* _aux2 = _aux->_next;
        _aux->_next = _aux2->_next;
        
        freeNode(&_aux2);
        _list->_size--;

    }else{

        printf("this position is not valid\n");

    }
    

}

void printList(struct List _list){

    int i = 0;
    struct Node* _aux;
    for(i = 0, _aux = _list._first; i < _list._size; i++, _aux = _aux->_next){
        
        printNode(_aux);

    }

}