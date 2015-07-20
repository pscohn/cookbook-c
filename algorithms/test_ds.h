#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "data_structures.h"

void test_node()
{
    struct Node n = {"Hello", NULL};
    assert(n.item == "Hello");
    n.item = "Goodbye";
    assert(n.item == "Goodbye");
    
    struct Node m = {"Hello", &n};
    assert(m.item == "Hello");
    assert(m.next->item == "Goodbye");
}

void test_string_stack_linked()
{
    Stack *stack = StringStackLinkedCreate();

    StringStackLinkedPush("Hello", stack);
    assert(stack->head->item == "Hello");
    assert(stack->head->next == NULL);

    StringStackLinkedPush("Goodbye", stack);
    assert(stack->head->item == "Goodbye");
    assert(stack->head->next->item == "Hello");
    assert(stack->head->next->next == NULL);
    StringStackLinkedDestroy(stack);

}


void test_ds()
{
    printf("test_ds");
    test_node();
    printf(".");
    test_string_stack_linked();
    printf(".");
    printf("pass\n");
}
