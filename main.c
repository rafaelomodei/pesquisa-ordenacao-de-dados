#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./src/library/bubbleSort/bubbleSort.h"
#include "./src/library/insertShort/insertShort.h"
#include "./src/utils/file.h"
#include "./src/components/component.h"

#define FILE_OUTPUT "OUTPUT"


#define MENSSAGER_INVALID_OPTION "Opção invalida, tentar novamente!"

#define pointer "\n >"

int main(){


    int *file, *readFileOrderly, *readFileInverted, *readFileRandom;
    //int i;
    int menuOption = 0;

    long int counterSwap = 0;
    long int *swap = &counterSwap;

    int sizeFile = createFile();

    readFileOrderly = readFile(sizeFile, inputFileOrderly);
    readFileInverted = readFile(sizeFile, inputfileInverted);
    readFileRandom = readFile(sizeFile, inputfileRandom);

    menu();
    scanf("%i", &menuOption);

    switch(menuOption){
        case 0:{
            printf(" %s Opção 0", pointer);
        }break;

        case 1:{
            printf("\n %s BUBBLE SHORT", pointer);

            // Ordenados
            printf("\n %s Dados ORDENADOS", pointer);
            printf("\n %s Verificando dados ordenandos...", pointer);
            printf("\n %s Tempo gasto na ordenação: ", pointer);
            file = bubbleSort(sizeFile, readFileOrderly, swap);
            printf(" %s Dados ordenados verificado", pointer);
            printf(" %s Escrevendo dados ordenados...", pointer);
            writeFile(file, sizeFile, "./output/OUTPUT_fileOrderlyBubbleSort.txt");
            printf(" %s Dados ordenados escritos...", pointer);

            printf("\n\n =================== ");

            // Invertidos
            printf("\n %s Dados INVERTIDOS", pointer);
            printf(" %s Ordenando os dados...", pointer);
            printf("\n %s Tempo gasto na ordenação: ", pointer);
            file = bubbleSort(sizeFile, readFileInverted, swap);
            printf(" %s Dados ordenados", pointer);
            printf(" %s Escrevendo dados ordenados...", pointer);
            writeFile(file, sizeFile, "./output/OUTPUT_fileInvertedBubbleSort.txt");
            printf(" %s Dados ordenados escritos...", pointer);

            printf("\n\n ===================");

            // Randômicos
            printf("\n %s Dados RANDOMICOS", pointer);
            printf(" %s Ordenando os dados...", pointer);
            printf("\n %s Tempo gasto na ordenação: ", pointer);
            file = bubbleSort(sizeFile, readFileRandom, swap);
            printf(" %s Dados ordenados", pointer);
            printf(" %s Escrevendo dados ordenados...", pointer);
            writeFile(file, sizeFile, "./output/OUTPUT_fileRandomBubbleSort.txt");
            printf(" %s Dados ordenados escritos...", pointer);

            printf("\n\n =================== \n");

            printf(" %s Criando logs...", pointer);
            printf(" %s Logs finalizados", pointer);

        }break;

        case 2:{
            printf("\n %s Insert SHORT", pointer);

            // Ordenados
            printf("\n %s Dados ORDENADOS", pointer);
            printf("\n %s Verificando dados ordenandos...", pointer);
            printf("\n %s Tempo gasto na ordenação: ", pointer);
            file = insertShort(sizeFile, readFileOrderly, swap);
            printf(" %s Dados ordenados verificado", pointer);
            printf(" %s Escrevendo dados ordenados...", pointer);
            writeFile(file, sizeFile, "./output/OUTPUT_fileOrderlyInsertShort.txt");
            printf(" %s Dados ordenados escritos...", pointer);

            printf("\n\n =================== ");

            // Invertidos
            printf("\n %s Dados INVERTIDOS", pointer);
            printf(" %s Ordenando os dados...", pointer);
            printf("\n %s Tempo gasto na ordenação: ", pointer);
            file = insertShort(sizeFile, readFileInverted, swap);
            printf(" %s Dados ordenados", pointer);
            printf(" %s Escrevendo dados ordenados...", pointer);
            writeFile(file, sizeFile, "./output/OUTPUT_fileInvertedInsertShort.txt");
            printf(" %s Dados ordenados escritos...", pointer);

            printf("\n\n ===================");

            // Randômicos
            printf("\n %s Dados RANDOMICOS", pointer);
            printf(" %s Ordenando os dados...", pointer);
            printf("\n %s Tempo gasto na ordenação: ", pointer);
            file = insertShort(sizeFile, readFileRandom, swap);
            printf(" %s Dados ordenados", pointer);
            printf(" %s Escrevendo dados ordenados...", pointer);
            writeFile(file, sizeFile, "./output/OUTPUT_fileRandomInsertShort.txt");
            printf(" %s Dados ordenados escritos...", pointer);

            printf("\n\n =================== \n");

            printf(" %s Criando logs...", pointer);
            printf(" %s Logs finalizados", pointer);
        }break;

        case 3:{
            printf(" %s Opção 3", pointer);
        }break;
        default:{
            printf("\n %s %s", pointer,  MENSSAGER_INVALID_OPTION);
        }break;
    }

    // printf("\n> Criando aquivo\n");
    

    // printf("> Lendo aquivo...\n");
    // p = readFile(size, inputfileRandom);

    // printf(">Elemento: %d\n", *p);

    // printf("> Esquevendo aquivo...\n");
    // writeFile(p, size, "./output/fileWrite.txt");


    // p = bubbleSort(size, p, swap);

    // printf("> Esquevendo aquivo bubbleSort...\n");
    // writeFile(p, size, "./output/fileWriteBubbleSort.txt");

    // p = insertShort(size, p, swap);

    // printf("> Esquevendo aquivo insertShort...\n");
    // writeFile(p, size, "./output/fileWriteInsertShort.txt");



    printf("\n> Programa finalizado\n");

    return 0;
}
