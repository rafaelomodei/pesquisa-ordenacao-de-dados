#include <stdio.h>
#include <string.h>
#include <time.h>



#include "bubbleSort.h"
#include "../../utils/file.h"

int* bubbleSort(int sizeArray, int *array, long int *swap){

    int j, aux = 0, i = 0;

    double time = 0;
    char timeString[20] = "";


    //------------------ Marcação de tempo ---------
    clock_t Ticks[2];
    Ticks[0] = clock();
    //---------------------------

    //----------------- Bubble sort ----------------

    for(i = sizeArray-1 ; i >= 1 ; i--){ //percorre pelo tamanho do vetor (ele limita até quantas execuções de ordenação irão acontecer)

        for(j = 0; j < i; j++){ //inicia percorrendo o vetor e vai ordenando de acordo com os valores (seu limite é até o ponto que foi ordenado)

            if(array[j] > array[j+1]){ //se a posição atual do vetor for maior que a da frente
                aux = array[j];       //irá pegar esse valor e por na variavel auxiliar
                array[j] = array[j+1];  //substituir o valor de onde foi pego a "cópia" para o valor do vetor a frente
                array[j+1] = aux;     //E será recolocado o valor nesse da frente, por ele ser maior
                *swap = *swap + 1;
            }
        }
    }

    //---------------------------------------------
    Ticks[1] = clock();
    time = (double)(Ticks[1] - Ticks[0]) / CLOCKS_PER_SEC;
    printf("%.2f s\n", time);

    snprintf(timeString, 20, "%f", time);
    writeFileLog(timeString);

    return array;
}