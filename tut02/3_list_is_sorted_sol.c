/**
 * Run:
 * $ clang 3_list_is_sorted_sol.c linked_list.c && ./a.out
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

/**
 * Recursive function to determine whether the linked list is in sorted
 * ascending order.
 */
bool listIsSorted(struct node *l) {
    if (l == NULL || l->next == NULL) {
        return true;
    }
    if (l->value <= l->next->value) {
        return listIsSorted(l->next);
    } else {
        return false;
    }
}

/**
 * Takes in a container struct to a linked list and returns whether the
 * contained linked list is in sorted ascending order.
 */
bool listIsSortedContainer(struct list *l) { return listIsSorted(l->head); }

int main() {
    struct node *list = listIntro();

    int res = listIsSorted(list);
    printf("Linked list sorted order:  %s\n", res ? "true" : "false");

    return 0;
}