#ifndef __LIST_H_
#define __LIST_H_
#include <stdbool.h>
#include "node.h"

struct List{

    struct Node* _first;
    struct Node* _last;
    int _size;
}List;

void initList(struct List* _list);
bool isEmpty(struct List _list);
bool correctPos(struct List _list, int _index);
void addNode(struct List* _list, int _nValue);
void removeNode(struct List* _list, int _index);
void printList(struct List _list);

#endif //__LIST_H_