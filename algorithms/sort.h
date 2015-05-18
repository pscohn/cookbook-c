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

void insertion_sort(int* numbers, int n, int h)
{
    int i, j;
    for (i=0; i<n; i++) {
        j = i;
        while (j >= 0 && numbers[j] < numbers[j-h]) {
            swap(numbers, j, j-h);
            j -= h;
        }
    }
}

void shell_sort(int* numbers, int n)
{

    int distance = 0;
    while ((3 * distance + 1) <= n) {
        distance = 3 * distance + 1;
    }

    int i;
    while (distance > 0) {
        insertion_sort(numbers, n, distance);
        distance = (distance - 1) / 3;
    }
}
