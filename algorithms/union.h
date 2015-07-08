#include <stdlib.h>

/*
 * Quick Union Implementation
 */

void qu_union(int *numbers, int p, int q)
{
    int rootp = qu_root(numbers, p);
    int rootq = qu_root(numbers, q);
    numbers[rootp] = rootq;
}

int qu_root(int *numbers, int p)
{
    int i = p;
    while (numbers[i] != i) {
        i = numbers[i];
    }
    return i;
}

int qu_find(int *numbers, int p, int q)
{
    return qu_root(numbers, p) == qu_root(numbers, q);
}

/*
 * Weighted Quick Union
 */

int weighted_root(int *numbers, int i, int *height)
{
    int h = 1;
    while (numbers[i] != i) {
        i = numbers[i];
        h++;
    }
    *height = h;
    return i;
}

void weighted_union(int *numbers, int *height, int p, int q)
{
    int h1, h2, rootp, rootq;
    rootp = weighted_root(numbers, p, &h1);
    rootq = weighted_root(numbers, q, &h2);
    if (h1 < h2) {
        numbers[rootp] = rootq;
    } else {
        numbers[rootq] = rootp;
    }
    height[rootp] = h1 + h2;
    height[rootq] = h1 + h2;

}

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
