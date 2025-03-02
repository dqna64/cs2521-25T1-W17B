/**
 * Run:
 * $ clang 1_list_length_tut.c linked_list.c && ./a.out
 */

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int listLength(struct node *l) {
    // TODO
}

int listLengthContainer(struct list *l) {
    // TODO
}

int main() {
    struct node *list = listIntro();

    int listLengthRes = listLength(list);
    printf("Length of linked list: %d\n", listLengthRes);

    return 0;
}
