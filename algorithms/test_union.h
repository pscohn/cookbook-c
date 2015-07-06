#include <stdlib.h>
#include <stdio.h>
#include "union.h"
#include "util.h"

void test_quickfind()
{
    int numbers[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    union_join(&numbers[0], 8, 3, 5); // sets index 5 to index 3's value
    int correct[8] = {1, 2, 3, 4, 5, 4, 7, 8};
    assert(check_arr_equal(&numbers[0], &correct[0], 8));
    assert(union_find(&numbers[0], 3, 5));

    union_join(&numbers[0], 8, 6, 7);
    int correct2[8] = {1, 2, 3, 4, 5, 4, 7, 7};
    assert(check_arr_equal(&numbers[0], &correct2[0], 8));
    assert(union_find(&numbers[0], 3, 5));
    assert(union_find(&numbers[0], 6, 7));

    union_join(&numbers[0], 8, 3, 7);
    int correct3[8] = {1, 2, 3, 4, 5, 4, 4, 4};
    assert(check_arr_equal(&numbers[0], &correct3[0], 8));
    assert(union_find(&numbers[0], 3, 5));
    assert(union_find(&numbers[0], 3, 6));
    assert(union_find(&numbers[0], 3, 7));
    assert(union_find(&numbers[0], 5, 6));
    assert(union_find(&numbers[0], 5, 7));
    assert(union_find(&numbers[0], 6, 7));
}

void test_union()
{
    test_quickfind();
    printf(".");
}
