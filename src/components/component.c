#include <stdio.h>
#include <string.h>


#include "component.h"
#include "../utils/global.h"
#include "../style/styles.h"


void splashScreen(){

    printf("\n\n");
    title("PESQUISA E ORDENCAO DE DADOS");
    about();

}

void about(){

    printf("%s Aluno: %s\n", MARGIN, AUTHOR);
    printf("%s Github: %s\n", MARGIN, GITHUB);
    printf("\n");

}

void title(char text[]){
    printf("\n\n");
    printf("%s %s\n", MARGIN, text);
    printf("%s ", MARGIN);
    
    for(int i = 0; i < strlen(text); i++){
        printf("-");
    }

    printf("\n\n");
    
}

void menu(){

    title("ESCOLHA UMA OPCAO");

    printf("%s [ 0 ] - SAIR                                                       \n", MARGIN);
    printf("%s [ 1 ] - executar a ordenacao do arquivo usando Bubble Sort         \n", MARGIN);
    printf("%s [ 2 ] - executar a ordenacao do arquivo usando Insertion Sort      \n", MARGIN);
    printf("%s [ 3 ] - executar a ordenacao do arquivo usando Selection Sort      \n", MARGIN);
    printf("%s [ 4 ] - executar a ordenacao do arquivo usando Shell Sort          \n", MARGIN);
    // printf("%s [ 5 ] - executar a ordenacao do arquivo usando Quicksort(Lomuto)   \n", MARGIN);
    // printf("%s [ 6 ] - executar a ordenacao do arquivo usando Mergesort           \n", MARGIN);
    // printf("%s [ 7 ] - executar a ordenacao do arquivo usando Radixsort           \n", MARGIN);
    // printf("%s [ 8 ] - executar a ordenacao do arquivo usando QuickSort(Hoare)    \n", MARGIN);
    printf("\n");
    printf("\n");
    printf(" > ");

}

void card(){

    title("ESSE CARD AQUI");

}

void divider(){

    printf("\n%s ======================= \n", MARGIN);

}