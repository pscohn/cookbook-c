#include <stdlib.h>

/*
 * Quickfind Implementation
 */

void quickfind_union(int* numbers, int len, int p, int q)
{
    int old_val = numbers[q];
    int new_val = numbers[p];

    int i;
    for (i=0; i<len; i++) {
        if (numbers[i] == old_val) {
            numbers[i] = new_val;
        }
    }
}

int quickfind_find(int* numbers, int p, int q)
{
    if (numbers[p] == numbers[q]) {
        return 1;
    }

    return 0;
}
