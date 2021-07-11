#include <stdio.h>
#include <string.h>
#include <time.h>

#include "selectionSort.h"
#include "../../utils/file.h"

int* selectionSort(int sizeArray, int *array, long int *swap){

    int i, j, min, aux;

    double time = 0;
    char timeString[20] = "";

    clock_t Ticks[2];
    Ticks[0] = clock();

    for (i = 0; i < (sizeArray-1); i++){ //vai do inicio ao final do vetor

     min = i;//começa com o primeiro como o menor

        for (j = (i+1); j <= sizeArray-1; j++) { //vai da segunda posicao até o final do vetor
            if(array[j] < array[min]) //verifica pra ver se tem alguém menor
            min = j;//se tiver coloca lá
        }

        if (i != min) { //se for diferente, no caso ele percorreu e o min se tornou outro valor, o I que é o primeiro da lista, é trocado com esse menor
            aux = array[i];
            array[i] = array[min];
            array[min] = aux;
            *swap = *swap + 1;
        }
    }

    Ticks[1] = clock();
    time = (double)(Ticks[1] - Ticks[0]) / CLOCKS_PER_SEC;
    printf("%.2f s\n", time);

    snprintf(timeString, 20, "%f", time);
    writeFileLog(timeString);

    return array;
}
