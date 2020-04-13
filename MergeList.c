//
// Created by Ron Dahan on 13/04/2020.
//

#include <stdio.h>
#include <stdbool.h>
#include "MergeList.h"
#include <stdlib.h>

ErrorCode mergeSortedLists(Node list1,Node list2,Node *merge_out) {
    if (!(merge_out) || !list1 || !list2)
        return NULL_ARGUMENT;
    if (!getListLength(list1) || !getListLength(list2))
        return EMPTY_LIST;
    if (!(isListSorted(list1)) || !(isListSorted(list2)))
        return UNSORTED_LIST;

    *merge_out = malloc(sizeof(Node));
    if (*merge_out == NULL) {
        free(*merge_out);
        return MEMORY_ERROR;
    }
    Node merge_out_tmp = *merge_out;
    (*merge_out)->next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->x < list2->x) {
            (*merge_out)->x = list1->x;
            (*merge_out)->next = malloc(sizeof(merge_out));
            if ((*merge_out)->next == NULL) {
                freeMemory(*merge_out);
                *merge_out = NULL;
                return MEMORY_ERROR;
            }
            *merge_out = (*merge_out)->next;
            list1 = list1->next;
        } else {
            (*merge_out)->x = list2->x;
            (*merge_out)->next = malloc(sizeof(merge_out));
            if ((*merge_out)->next == NULL) {
                freeMemory(*merge_out);
                *merge_out = NULL;
                return MEMORY_ERROR;
            }
            *merge_out = (*merge_out)->next;
            list2 = list2->next;
        }
    }
    Node remaining_list;
    if (list1) {
        remaining_list = list1;
    } else {
        remaining_list = list2;
    }
    while (remaining_list) {
        (*merge_out)->x = remaining_list->x;
        if(remaining_list->next !=NULL) {//making sure we don't make an extra node
            (*merge_out)->next = malloc(sizeof(merge_out));
            if ((*merge_out)->next == NULL) {
                freeMemory(*merge_out);
                *merge_out = NULL;
                return MEMORY_ERROR;
            }
        }
        *merge_out = (*merge_out)->next;
        remaining_list = remaining_list->next;
    }/*
    while (list2) {
        (*merge_out)->x = list2->x;
        if(list2->next != NULL) {//making sure we don't make an extra node
            (*merge_out)->next = malloc(sizeof(merge_out));
            if ((*merge_out)->next == NULL) {
                freeMemory(*merge_out);
                *merge_out = NULL;
                return MEMORY_ERROR;
            }
        }
        *merge_out = (*merge_out)->next;
        list2 = list2->next;
    }*/
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

void freeMemory(Node list){
    while (!list){
        Node tmp = list->next;
        free(list);
        list = tmp;
    }
}