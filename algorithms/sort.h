#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "util.h"

void selection_sort(int* numbers, int n)
{
    int i;
    for (i=0; i<n; i++) {
        int min_index;
        min_index = i + min(&numbers[i], n - i);
        swap(numbers, i, min_index);
    }
}
