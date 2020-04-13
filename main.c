#include <stdio.h>
#include <stdlib.h>
#include "MergeList.h"

int main() {
    Node list = malloc(sizeof(Node));
    list->x = 1;
    list->next = malloc(sizeof(Node));
    list->next->x = 2;
    list->next->next = NULL;
    printf("%d %d", list->x, list->next->x);

    printf("\ntest");

    free(list->next);

    printf("\ntest2");

    free(list);
    return 0;
}