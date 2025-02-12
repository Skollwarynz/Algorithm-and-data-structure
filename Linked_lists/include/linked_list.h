#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct List {
    void* n;
    list* next;
};

typedef struct List* list;


#endif