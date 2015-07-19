#include <stdlib.h>
#include <stdio.h>

#ifndef _DATASTRUCTURESH_
#define _DATASTRUCTURESH_ 

struct Node;

typedef struct Node {
    char *item;
    struct Node *next;
} Node;

#endif
