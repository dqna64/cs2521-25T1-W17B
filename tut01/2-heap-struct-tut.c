#include <stdlib.h>

struct node {
    int value; // 4
    struct node *next; // 8
};

void stack_struct() {
    struct node n;
    n.value = 42;
    n.next = NULL;

    // do smthn with the node
}

void heap_struct() {
    struct node* ptr = malloc(sizeof(struct node));
    (*ptr).value = 43;
    (*ptr).next = NULL;
}

int main(void) {
    stack_struct();
    heap_struct();

    return 0;
}