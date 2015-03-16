#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef _UTILH_
#define _UTILH_ 

void printarr(int* numbers, int len)
{
    int i;
    printf("[");
    for (i=0; i<len; i++) {
        printf("%d", numbers[i]);
        if (i != len-1) {
            printf(" ");
        }
    }
    printf("]\n");
}

int min(int* numbers, int length)
{
    int min = numbers[0];
    int min_index = 0;
    int i;
    for (i=0; i<length; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            min_index = i;
        }
    }
    return min_index;
}

int max(int* numbers, int length)
{
    int max = numbers[0];
    int max_index = 0;
    int i;
    for (i=0; i<length; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            max_index = i;
        }
    }
    return max_index;
}

void swap(int* numbers, int x, int y)
{
    int temp = numbers[x];
    numbers[x] = numbers[y];
    numbers[y] = temp;
}

#endif
