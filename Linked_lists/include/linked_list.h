#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct List {
    int n;
    struct List* next;
}List;

typedef  List* list;


#endif