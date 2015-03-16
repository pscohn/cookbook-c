#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "sort.h"


void test_selection_sort()
{
    int test_sort_numbers[8] = {5, 3, 92, 3, 205, 4, 5, 983};
    int correct[8] = {3, 3, 4, 5, 5, 92, 205, 983};
    selection_sort(test_sort_numbers, 8);
    assert(check_arr_equal(test_sort_numbers, correct, 8));
}

void test_insertion_sort()
{
    int test_sort_numbers[8] = {5, 3, 92, 3, 205, 4, 5, 983};
    int correct[8] = {3, 3, 4, 5, 5, 92, 205, 983};
    insertion_sort(test_sort_numbers, 8);
    assert(check_arr_equal(test_sort_numbers, correct, 8));
}

void test_sort()
{
    test_selection_sort();
    printf(".");
    test_insertion_sort();
    printf(".");
}
