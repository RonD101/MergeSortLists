//
// Created by Ron Dahan on 13/04/2020.
//

#include <stdio.h>
#include <stdbool.h>
#include "MergeList.h"
#include <stdlib.h>

ErrorCode mergeSortedLists(Node list1,Node list2,Node *merge_out) {
    *merge_out = malloc(sizeof(Node));/////
    Node merge_out_tmp = *merge_out;
    (*merge_out)->next = NULL;
    if(!list1||!list2)
        return EMPTY_LIST;
    if(!(*merge_out))
        return NULL_ARGUMENT;
    if(!(isListSorted(list1)) || !(isListSorted(list2)))
        return UNSORTED_LIST;
    //bool first_run = true;
    while (list1 != NULL && list2 != NULL) {
       // if(!first_run)
         //   (*merge_out)->next = malloc(sizeof(merge_out));
      //  first_run =false;
        if (list1->x < list2->x) {
            (*merge_out)->x = list1->x;
            (*merge_out)->next = malloc(sizeof(merge_out));
            if((*merge_out)->next == NULL){
                freeMemory(*merge_out);
                *merge_out = NULL;
                return MEMORY_ERROR;
            }
            *merge_out = (*merge_out)->next;
            //(*merge_out)->next = NULL;///////////
            list1 = list1->next;
        } else {
            (*merge_out)->x = list2->x;
            (*merge_out)->next = malloc(sizeof(merge_out));
            if((*merge_out)->next == NULL){
                freeMemory(*merge_out);
                *merge_out = NULL;
                return MEMORY_ERROR;
            }
            *merge_out = (*merge_out)->next;
            //(*merge_out)->next = NULL;///////////
            list2 = list2->next;
        }
    }
    while (list1) {
        (*merge_out)->x = list1->x;
        (*merge_out)->next = malloc(sizeof(merge_out));
        if((*merge_out)->next == NULL){
            freeMemory(*merge_out);
            *merge_out = NULL;
            return MEMORY_ERROR;
        }
        *merge_out = (*merge_out)->next;
        //(*merge_out)->next = NULL;///////////
        list1 = list1->next;
    }
    while (list2) {
        (*merge_out)->x = list2->x;
        (*merge_out)->next = malloc(sizeof(merge_out));
        if((*merge_out)->next == NULL){
            freeMemory(*merge_out);
            *merge_out = NULL;
            return MEMORY_ERROR;
        }
        *merge_out = (*merge_out)->next;
        //(*merge_out)->next = NULL;///////////
        list2 = list2->next;
    }
    *merge_out = merge_out_tmp;

    return SUCCESS;
}

int getListLength(Node list)
{
    int counter = 0;
    while(list != NULL)
    {
        counter++;
        list = list->next;
    }
    return counter;
}



bool isListSorted(Node list)
{
    while(list->next != NULL)
    {
        if(list->x >= list->next->x) {
            return false;
        }
        list = list->next;
    }
    return true;
}

static void freeMemory(Node list){
    while (!list){
        Node tmp = list->next;
        free(list);
        list = tmp;
    }
}