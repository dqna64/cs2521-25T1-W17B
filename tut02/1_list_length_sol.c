/**
 * Run:
 * $ clang 1_list_length_sol.c linked_list.c && ./a.out
 */

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

/**
 * Recursive function to find the length of a linked list.
 */
int listLength(struct node *l) {
    if (l == NULL) {
        return 0;
    }
    return 1 + listLength(l->next);
}

/**
 * Takes in a container struct to a linked list and returns the length of the
 * contained linked list.
 */
int listLengthContainer(struct list *l) { return listLength(l->head); }

int main() {
    struct node *list = listIntro();

    int listLengthRes = listLength(list);
    printf("Length of linked list: %d\n", listLengthRes);

    return 0;
}