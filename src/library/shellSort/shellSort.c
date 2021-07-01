#include <stdio.h>
#include <time.h>

#include "shellSort.h"

int* shellSort(int sizeArray, int *array, long int *swap){

    int i, j, value;

    clock_t Ticks[2];
    Ticks[0] = clock();

    int h = 1;
    while(h < sizeArray) {
        h = 3*h+1;
    }
    while (h > 0) {
        for(i = h; i < sizeArray; i++) {
            value = array[i];
            j = i;
            while (j > h-1 && value <= array[j - h]) {
                array[j] = array[j - h];
                j = j - h;
                *swap = *swap + 1;
            }
            array[j] = value;
        }
        h = h/3;
    }

    Ticks[1] = clock();
    double time = (double)(Ticks[1] - Ticks[0]) / CLOCKS_PER_SEC;
    printf("%.2f s\n", time);

    return array;
}