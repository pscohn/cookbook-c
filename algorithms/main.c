#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "data_structures.h"
#include "test_sort.h"
#include "test_util.h"

int main(int argc, char **argv)
{
    struct Node a;
    a.data = "Hello There"; 

    struct Node n;
    n.data = "There";
    n.next = &a;

    test_util();
    test_sort();
    printf("pass\n");
    return 0;
}
