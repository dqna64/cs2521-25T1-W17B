/**
 * Run:
 * $ clang 2_list_count_odds_tut.c linked_list.c && ./a.out
 */

#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int listCountOdds(struct node *l) {
    // TODO
}

int listCountOddsContainer(struct list *l) {
    // TODO
}

int main() {
    struct node *list = listIntro();

    int listNumOdds = listCountOdds(list);
    printf("Number of odd nums in linked list: %d\n", listNumOdds);

    return 0;
}
