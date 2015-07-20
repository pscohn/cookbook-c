#include <stdlib.h>
#include <stdio.h>

#ifndef _DATASTRUCTURESH_
#define _DATASTRUCTURESH_ 

struct Node;

struct Node {
    char *item;
    struct Node *next;
};

typedef struct Stack {
    struct Node *head;
} Stack;

Stack *StringStackLinkedCreate()
{
    Stack *s = malloc(sizeof(Stack));
    s->head = NULL;
    return s;
}

void StringStackLinkedPush(char *string, Stack *s)
{
    struct Node *n = malloc(sizeof(struct Node));
    n->item = string;
    n->next = s->head;
    s->head = n;
};

char *StringStackLinkedPop();

void StringStackLinkedDestroy(Stack *s)
{
    struct Node *ptr = s->head;
    while (ptr != NULL) {
        struct Node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    free(s);
};

#endif
