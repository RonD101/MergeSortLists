//
// Created by Ron Dahan on 13/04/2020.
//
#include <stdbool.h>

#ifndef MERGESORTEDLIST_MERGELIST_H
#define MERGESORTEDLIST_MERGELIST_H

typedef struct node_t {
    int x;
    struct node_t *next;
} *Node;

typedef enum { SUCCESS=0,MEMORY_ERROR, EMPTY_LIST , UNSORTED_LIST, NULL_ARGUMENT ,
} ErrorCode;
int getListLength(Node list);
bool isListSorted(Node list);
ErrorCode mergeSortedLists(Node list1, Node list2, Node *merged_out);
static void freeMemory(Node list);
#endif //MERGESORTEDLIST_MERGELIST_H
