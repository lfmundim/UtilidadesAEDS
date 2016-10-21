#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include "map.h"

void makeEmptyList(listT *list){
    list->head = (pNodeT)malloc(sizeof(nodeT));
    list->head->next = NULL;
    list->tail = list->head;
};

void insertNode(cellT cell, listT *list){
    list->tail->next = (pNodeT)malloc(sizeof(nodeT));
    list->tail = list->tail->next;
    list->tail->data = data;
    list->tail->next = NULL;
};

//remove o node apontado por pointer
void removeNextNode(pNodeT pointer, listT *list, dataT *data){
    if(pointer == NULL || pointer->next == NULL) {
        printf("Posicao nao existe\n");
        return;
    }
    pNodeT pointerAux;
    pointerAux = pointer->next;
    *data = pointerAux->data;
    if(pointer->next == NULL){
        list->tail = pointer;
    }
    free(pointerAux);
};

void printList(listT list){
    pNodeT aux;
    aux = list.head->next;
    while(aux!=NULL){
        printf("%d\n", aux->data.value);
        aux = aux->next;
    }
};
