#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "data_structures.h"

void test_node()
{
    Node n = {"Hello", NULL};
    assert(n.item == "Hello");
    n.item = "Goodbye";
    assert(n.item == "Goodbye");
    
    Node m = {"Hello", &n};
    assert(m.item == "Hello");
    assert(m.next->item == "Goodbye");
}


void test_ds()
{
    printf("test_ds");
    test_node();
    printf(".");
    printf("pass\n");
}
