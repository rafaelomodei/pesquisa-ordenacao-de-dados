#include <stdio.h>
#include <time.h>

#include "quickSort.h"

int* quickSort(int *array, int *left, long int *right){

    if(left < right){
        int p = particioner(array, left, right);
        quickSort(array, left, p - 1);
        quickSort(array, p + 1, right);
    } else {
        return 0;
    }
    return 0;

}

int particioner(int *array, int left, int right){
    int pivot = array[right]; // pivot
    int i = (left - 1); // Index of smaller element and indicates the right position of pivot found so far

    for (int j = left; j <= right - 1; j++)
    {
        // If current element is smaller than the pivot
        if (array[j] < pivot)
        {
            i++; // increment index of smaller element
            int swap = array[i];
            array[i] = array[j];
            array[j] = swap;
        }
    }

    int swap = array[i + 1];
    array[i + 1] = array[right];
    array[right] = swap;

    return (i + 1);
}

// int particionar(int *vet, int esquerda, int direita,int *trocas){
//     int pivo = vet[esquerda];
//     int i = esquerda;
//     int aux = 0;

//     for(int j = esquerda + 1; j <= direita; j++){
//         if(vet[j] <= pivo){
//             i+=1;

//             aux = vet[i];
//             vet[i] = vet[j];
//             vet[j] = aux;
//             //*trocas = *trocas + 1;
//         }
//     }

//     aux = vet[i];
//     vet[i] = vet[esquerda];
//     vet[esquerda] = aux;
//     //*trocas = *trocas + 1;

//     return i;
// }