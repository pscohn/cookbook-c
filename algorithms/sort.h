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

void insertion_sort(int* numbers, int n)
{
    int i = 1;
    int j = 0;
    while (i < n) {
        j = i;
        while (j >= 0 && numbers[j] < numbers[j-1]) {
            swap(numbers, j, j-1);
            j--;
        }
        i++;
    }
}
