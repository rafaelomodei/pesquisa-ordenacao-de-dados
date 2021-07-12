#include <stdio.h>
#include <string.h>
#include <time.h>

#include "heapSort.h"
#include "../../utils/file.h"

int* heapSort(int sizeArray, int *array, long int *swap){
    
    int swapX;
    double time = 0;
    char timeString[20] = "";


    clock_t Ticks[2];
    Ticks[0] = clock();

    for(int i = sizeArray / 2; i >= 1; --i){
        sift( i, sizeArray, array); 
    }
        
    for (int j = sizeArray; j >= 2; --j) { 
        swapX = array[1];
        array[1] = array[j];
        array[j] = swapX;
        sift( 1, j-1, array); 
    }

    Ticks[1] = clock();
    time = (double)(Ticks[1] - Ticks[0]) / CLOCKS_PER_SEC;
    printf("%.2f s\n", time);

    snprintf(timeString, 20, "%f", time);
    writeFileLog(timeString);

    return array;
}

void sift( int i, int sizeArray, int *array) { 
   int element2x = 2*i, element = array[i];
   while (element2x <= sizeArray) {
      if (element2x < sizeArray && array[element2x] < array[element2x+1]) ++element2x;
      if (element >= array[element2x]) break;
      array[i] = array[element2x];
      i = element2x, element2x = 2*i;
   } 
   array[i] = element; 
}