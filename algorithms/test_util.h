#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "util.h"


void test_min()
{
    int test_util_numbers[5] = {43, 2, 76, 954, 7};
    int min_index = min(test_util_numbers, 5);
    assert(min_index == 1);
}

void test_max()
{
    int test_util_numbers[5] = {43, 2, 76, 954, 7};
    int max_index = max(test_util_numbers, 5);
    assert(max_index == 3);
}

void test_swap()
{
    int test_util_numbers[5] = {43, 2, 76, 954, 7};
    swap(test_util_numbers, 0, 1);
    assert(test_util_numbers[0] == 2);
    assert(test_util_numbers[1] == 43);
}

int test_check_arr_equal()
{
    int test_util_numbers[5] = {43, 2, 76, 954, 7};
    int compare[5] = {43, 2, 76, 954, 7};
    assert(check_arr_equal(test_util_numbers, compare, 5));
}

void test_util()
{
    printf("test_util");
    test_min();    
    printf(".");
    test_max();
    printf(".");
    test_swap();
    printf(".");
    test_check_arr_equal();
    printf(".");
    printf("pass\n");
}
