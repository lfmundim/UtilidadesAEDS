#ifndef _LISTS_H_
#define _LISTS_H_

#include "map.h"

typedef int keyT; //define um tipo chave
typedef int valueT; //define um tipo valor

typedef struct dataT{ //define um tipo dados
    keyT key;
    valueT value;
}dataT;

typedef struct node* pNodeT; //define um ponteiro de node

typedef struct node{ //define um tipo node
    dataT data;
    pNodeT next;
}nodeT;

typedef struct listT{ //define um tipo lista
    pNodeT head;
    pNodeT tail;
}listT;

void makeEmptyList(listT *list);

void insertNode(cellT cell, listT *list);

void removeNextNode(pNodeT pointer, listT *list, dataT *data);

void printList(listT list);


#endif
