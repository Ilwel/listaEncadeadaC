#ifndef __LIST_
#define __LIST_
#include <stdbool.h>
#include "node.h"

struct List{

    struct Node* _first;
    struct Node* _last;
    int _size;
}List;

void initList(struct List* _list);
bool isEmpty(struct List _list);
void addNode(struct List* _list, int _nValue);
void printList(struct List _list);

#endif //__LIST_