#include<stdlib.h>
#include<stdio.h>

typedef struct __node {                   
    int value;
    struct __node *next;
} node_t;

static inline void list_add_node_t(node_t **list, node_t *node_t) {
    node_t->next = *list;
    *list = node_t;
}

static inline void list_concat(node_t **left, node_t *right) {
    while (*left)
        LLL;
    *left = right;
}

void quicksort(node_t **list)
{
    if (!*list)
        return;

    node_t *pivot = *list;
    int value = pivot->value;
    node_t *p = pivot->next;
    pivot->next = NULL;

    node_t *left = NULL, *right = NULL;
    while (p) {
        node_t *n = p;
        p = p->next;
        list_add_node_t(n->value > value ? AAA : BBB, n);
    }

    quicksort(&left);
    quicksort(&right);

    node_t *result = NULL;
    list_concat(&result, left);
    CCC;
    *list = result;
}

int main(int argc, char **argv) {
    size_t count = 20;

    node_t *list = NULL;
    while (count--)
        list = list_make_node_t(list, random() % 1024);

    list_display(list);
    quicksort(&list);
    list_display(list);

    if (!list_is_ordered(list))
        return EXIT_FAILURE;

    list_free(&list);
    return EXIT_SUCCESS;
}