//
// Created by Ron Dahan on 13/04/2020.
//

#include <stdio.h>
#include <stdbool.h>
#include "MergeList.h"
#include <stdlib.h>

ErrorCode mergeSortedLists(Node list1,Node list2,Node *merge_out) {


    while (list1 != NULL && list2 != NULL) {

        if (list1->x < list2->x) {
            (*merge_out)->x = list1->x;
            (*merge_out)->next = malloc(sizeof(merge_out);
            /////null
            *merge_out = (*merge_out)->next;
            list1 = list1->next;
        } else {
            (*merge_out)->x = list2->x;
            (*merge_out)->next = malloc(sizeof(merge_out);
            /////null
            *merge_out = (*merge_out)->next;
            list2 = list2->next;
        }
    }
    while (list1) {
        (*merge_out)->x = list1->x;
        (*merge_out)->next = malloc(sizeof(merge_out));
        /////null
        *merge_out = (*merge_out)->next;
        list1 = list1->next;
    }
    while (list2) {
        (*merge_out)->x = list2->x;
        (*merge_out)->next = malloc(sizeof(merge_out));
        /////null
        *merge_out = (*merge_out)->next;
        list2 = list2->next;
    }
    return MEMORY_ERROR;
}

int getListLength(Node list)
{
    int counter = 0;
    while(list->next != NULL)
    {
        counter++;
        list = list->next;
    }
    if(counter == 0)
        return counter;
}



bool isListSorted(Node list)
{
    while(list->next != NULL)
    {
        if(list->x >= list->next->x)
            return false;
    }
    return true;
}

