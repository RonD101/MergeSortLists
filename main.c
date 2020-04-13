#include <stdio.h>
#include <stdlib.h>
#include "MergeList.h"

int main() {
    Node list = malloc(sizeof(Node));
    list->x = 1;
    list->next = malloc(sizeof(Node));
    list->next->x = 13;
    list->next->next = NULL;
    Node list2 = malloc(sizeof(Node));
    list2->x = 2;
    list2->next = malloc(sizeof(Node));
    list2->next->x = 15;
    list2->next->next = NULL;
    Node list3 = NULL;//malloc(sizeof(Node));
    int x = mergeSortedLists(list,list2,&list3);
    Node temp;
    printf("%d\n",x);
    while ((list3)){
        printf("%d ",list3->x);
        temp = list3;
        list3 = list3->next;
        free(temp);
    }
   // printf("\n%d-%d-%d-%d",list3->x,list3->next->x,list3->next->next->x,list3->next->next->next->x);
    /*printf("%d %d", list->x, list->next->x);
    printf("\n%d",getListLength(list));
    int i = isListSorted(list);
    printf("\n%d",i);
    printf("\ntest");*/



    //printf("\ntest2");
    free(list->next);
    free(list);
    free(list2->next);
    free(list2);
    return 0;
}