#ifndef __NODE_H_
#define __NODE_H_
//Node signatures

struct Node{

    int _value;
    struct Node* _next;

}Node;//node structure 

void initNode(struct Node* _node); //node initiation function 
void alocAndInitNode(struct Node** _node); //node allocation and initiation function 
void freeNode(struct Node** _node); //node desallocation function
void printNode(struct Node* _node); //function to print nodes

#endif //__NODE