// #include <stdio.h>
// #include <time.h>

// #include "quickSort.h"

// int* quickSort(int sizeArray, int *array, long int *swap){

//     if(esquerda < direita){
//         int p = particioner(vet, esquerda, direita);
//         ordenar_quick(vet, esquerda, p - 1);
//         ordenar_quick(vet, p + 1, direita);
//     } else {
//         return 0;
//     }
//     return 0;

// }

// int particioner(int *arr, int low, int high){
//     int pivot = arr[high]; // pivot
//     int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

//     for (int j = low; j <= high - 1; j++)
//     {
//         // If current element is smaller than the pivot
//         if (arr[j] < pivot)
//         {
//             i++; // increment index of smaller element
//             int t = arr[i];
//             arr[i] = arr[j];
//             arr[j] = t;
//         }
//     }

//     int t = arr[i + 1];
//     arr[i + 1] = arr[high];
//     arr[high] = t;

//     return (i + 1);
// }

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