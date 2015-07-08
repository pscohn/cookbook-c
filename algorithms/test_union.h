#include <stdlib.h>
#include <stdio.h>
#include "union.h"
#include "util.h"

void test_quickfind()
{
    int numbers[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    quickfind_union(&numbers[0], 9, 4, 6); // sets index 5 to index 3's value
    int correct[9] = {0, 1, 2, 3, 4, 5, 4, 7, 8};
    assert(check_arr_equal(&numbers[0], &correct[0], 9));
    assert(quickfind_find(&numbers[0], 4, 6));

    quickfind_union(&numbers[0], 9, 7, 8);
    int correct2[9] = {0, 1, 2, 3, 4, 5, 4, 7, 7};
    assert(check_arr_equal(&numbers[0], &correct2[0], 9));
    assert(quickfind_find(&numbers[0], 4, 6));
    assert(quickfind_find(&numbers[0], 7, 8));

    quickfind_union(&numbers[0], 9, 4, 8);
    int correct3[9] = {0, 1, 2, 3, 4, 5, 4, 4, 4};
    assert(check_arr_equal(&numbers[0], &correct3[0], 9));
    assert(quickfind_find(&numbers[0], 4, 6));
    assert(quickfind_find(&numbers[0], 4, 7));
    assert(quickfind_find(&numbers[0], 4, 8));
    assert(quickfind_find(&numbers[0], 6, 7));
    assert(quickfind_find(&numbers[0], 6, 8));
    assert(quickfind_find(&numbers[0], 7, 8));
}

void test_quickunion()
{
    int numbers[] = {0, 1, 2, 8, 3, 5, 6, 7, 8, 9};
    assert(qu_find(numbers, 3, 4));
    qu_union(numbers, 1, 3);
    assert(qu_find(numbers, 1, 4));
}

void test_weightedunion()
{
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int height[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    weighted_union(numbers, height, 3, 5);
    assert(qu_find(numbers, 3, 5));
    weighted_union(numbers, height, 3, 7);
    assert(qu_find(numbers, 3, 7));
    weighted_union(numbers, height, 7, 8);
    assert(!qu_find(numbers, 2, 3));
    
}

void test_union()
{
    printf("test_union");
    test_quickfind();
    printf(".");
    test_quickunion();
    printf(".");
    test_weightedunion();
    printf(".");
    printf("pass\n");
}
