#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



#include "radixSort.h"
#include "../../utils/file.h"

int* radixSort(int sizeArray, int *array, long int *swap){
    int i, exp = 1, m = 0;

    int *bucket = (int *) malloc (sizeArray * sizeof(int));
    int *temp = (int *) malloc (sizeArray * sizeof(int));

    clock_t Ticks[2];
    Ticks[0] = clock();

    double time = 0;
    char timeString[20] = "";

    for(i = 0; i < sizeArray; i++){
        if(array[i] > m){
            m = array[i];
        }
    }

    while((m/exp) > 0){
        for( i = 0; i < sizeArray; i++){
            bucket[i] = 0;
        }
        for(i = 0; i < sizeArray; i++){
            bucket[(array[i]/exp) % 10]++;
        }
        for(i = 1; i < sizeArray; i++) {
            bucket[i] += bucket[i-1];
        }
        for(i = (sizeArray - 1); i >= 0; i--) {
            temp[--bucket[(array[i] / exp) % 10]] = array[i];
            *swap = *swap + 1;
        }
        for(i = 0; i < sizeArray; i++) {
            array[i] = temp[i];

        }

        exp *= 10;
    }

    Ticks[1] = clock();
    time = (double)(Ticks[1] - Ticks[0]) / CLOCKS_PER_SEC;
    printf("%.2f s\n", time);

    snprintf(timeString, 20, "%f", time);
    writeFileLog(timeString);

    return array;
}