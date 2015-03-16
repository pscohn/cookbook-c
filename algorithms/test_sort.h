#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "sort.h"


void test_selection_sort()
{
    int test_sort_numbers[8] = {5, 3, 92, 3, 205, 4, 5, 983};
    selection_sort(test_sort_numbers, 8);
    assert(test_sort_numbers[0] == 3);
    assert(test_sort_numbers[1] == 3);
    assert(test_sort_numbers[2] == 4);
    assert(test_sort_numbers[3] == 5);
    assert(test_sort_numbers[4] == 5);
    assert(test_sort_numbers[5] == 92);
    assert(test_sort_numbers[6] == 205);
    assert(test_sort_numbers[7] == 983);
}

void test_insertion_sort()
{
    int test_sort_numbers[8] = {5, 3, 92, 3, 205, 4, 5, 983};
    insertion_sort(test_sort_numbers, 8);
    assert(test_sort_numbers[0] == 3);
    assert(test_sort_numbers[1] == 3);
    assert(test_sort_numbers[2] == 4);
    assert(test_sort_numbers[3] == 5);
    assert(test_sort_numbers[4] == 5);
    assert(test_sort_numbers[5] == 92);
    assert(test_sort_numbers[6] == 205);
    assert(test_sort_numbers[7] == 983);
}

void test_sort()
{
    test_selection_sort();
    printf(".");
    test_insertion_sort();
    printf(".");
}
