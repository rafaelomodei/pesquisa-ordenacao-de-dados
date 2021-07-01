#include <stdio.h>
#include <time.h>

#include "insertSort.h"

int* insertSort(int sizeArry, int *array, long int *swap){

    int i = 0, j = 1, aux=0;

    //------------------ Marcação de tempo ---------
    clock_t Ticks[2];
    Ticks[0] = clock();
    //---------------------------

    //----------------- Insertion Sort ----------------

    for(j = 1; j<= sizeArry-1; j++){ //começa já na posição 1 pq o primeiro meio que já é ordenado
        aux = array[j]; //pega esse numero a frente do ordenado e coloca no auxiliar
        i = j - 1; //i pega a posicao atrás, o cara que tá ordenado
        while(i >= 0 && aux < array[i]){ //enquanto i for maior ou igual a x (pra limitar o verificador de ir pro lado esquerdo) e o auxiliar for menor que o valor ordenado
            array[i + 1] = array[i]; //o valor passa pra frente
            i = i - 1; //o ponteiro que tá com o valor a ser comparado com o auxiliar vai pra trás
        }
        array[i + 1] = aux; //troca
        *swap = *swap + 1;
    }
    //---------------------------------------------
    Ticks[1] = clock();
    double time = (double)(Ticks[1] - Ticks[0]) / CLOCKS_PER_SEC;
    printf("Tempo: %.2f \n", time);

    return array;
}