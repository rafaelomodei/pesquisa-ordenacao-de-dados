#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./src/library/bubbleSort/bubbleSort.h"
#include "./src/library/insertSort/insertSort.h"
//#include "./src/library/quickSort/quickSort.h"
#include "./src/library/selectionSort/selectionSort.h"
#include "./src/library/shellSort/shellSort.h"


#include "./src/utils/file.h"
#include "./src/components/component.h"
#include "./src/style/styles.h"
#include "./src/utils/global.h"

#define MENSSAGER_INVALID_OPTION "Opção invalida, tentar novamente!"

int main(){


    int *file, *readFileOrderly, *readFileInverted, *readFileRandom;
    int *pause;
    int menuOption = 0;

    long int counterSwap = 0;
    long int *swap = &counterSwap;

    splashScreen();

    int sizeFile = createFile();

    readFileOrderly = readFile(sizeFile, inputFileOrderly);
    readFileInverted = readFile(sizeFile, inputfileInverted);
    readFileRandom = readFile(sizeFile, inputfileRandom);

    do{
    menu();
    scanf("%i", &menuOption);

    switch(menuOption){
        case 0:{
           printf("\n\n");
           divider();
           printf("\n\n");
           about();
           divider();
           printf("\n\n");
           printf("Programa finalizado com sucesso!");
           printf("\n\n");

        }break;

        case 1:{
            
            title("BUBBLE SHORT");

            // Ordenados
            printf(" %s Dados ORDENADOS", POINTER);
            printf("\n %s Verificando dados ordenandos...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = bubbleSort(sizeFile, readFileOrderly, swap);
            printf(" %s Dados ordenados verificado", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileOrderlyBubbleSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Invertidos
            printf("\n %s Dados INVERTIDOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = bubbleSort(sizeFile, readFileInverted, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileInvertedBubbleSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Randômicos
            printf("\n %s Dados RANDOMICOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = bubbleSort(sizeFile, readFileRandom, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileRandomBubbleSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            printf(" %s Criando logs...", POINTER);
            printf(" %s Logs finalizados", POINTER);

        }break;

        case 2:{

            title("INSERT SHORT");

            // Ordenados
            printf(" %s Dados ORDENADOS", POINTER);
            printf("\n %s Verificando dados ordenandos...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = insertSort(sizeFile, readFileOrderly, swap);
            printf(" %s Dados ordenados verificado", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileOrderlyInsertSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Invertidos
            printf("\n %s Dados INVERTIDOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = insertSort(sizeFile, readFileInverted, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileInvertedInsertSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Randômicos
            printf("\n %s Dados RANDOMICOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = insertSort(sizeFile, readFileRandom, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileRandomInsertSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            printf(" %s Criando logs...", POINTER);
            printf(" %s Logs finalizados", POINTER);
        }break;

        case 3:{
            title("SELECTION SHORT");

            // Ordenados
            printf(" %s Dados ORDENADOS", POINTER);
            printf("\n %s Verificando dados ordenandos...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = selectionSort(sizeFile, readFileOrderly, swap);
            printf(" %s Dados ordenados verificado", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileOrderlySelectionSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Invertidos
            printf("\n %s Dados INVERTIDOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = selectionSort(sizeFile, readFileInverted, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileInvertedSelectionSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Randômicos
            printf("\n %s Dados RANDOMICOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = selectionSort(sizeFile, readFileRandom, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileRandomSelectionSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            printf(" %s Criando logs...", POINTER);
            printf(" %s Logs finalizados", POINTER);

        }break;

        case 4:{
            title("SHELL SHORT");

            // Ordenados
            printf(" %s Dados ORDENADOS", POINTER);
            printf("\n %s Verificando dados ordenandos...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = shellSort(sizeFile, readFileOrderly, swap);
            printf(" %s Dados ordenados verificado", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileOrderlyShellSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Invertidos
            printf("\n %s Dados INVERTIDOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = shellSort(sizeFile, readFileInverted, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileInvertedShellSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            // Randômicos
            printf("\n %s Dados RANDOMICOS", POINTER);
            printf(" %s Ordenando os dados...", POINTER);
            printf("\n %s Tempo gasto na ordenação: ", POINTER);
            file = shellSort(sizeFile, readFileRandom, swap);
            printf(" %s Dados ordenados", POINTER);
            printf(" %s Escrevendo dados ordenados...", POINTER);
            writeFile(file, sizeFile, "./output/OUTPUT_fileRandomShellSort.txt");
            printf(" %s Dados ordenados escritos...\n", POINTER);

            divider();

            printf(" %s Criando logs...", POINTER);
            printf(" %s Logs finalizados", POINTER);

        }break;

        default:{
            printf("\n %s %s", POINTER,  MENSSAGER_INVALID_OPTION);
        }break;
    }
    }while(menuOption != 0);

    // printf("\n> Criando aquivo\n");
    

    // printf("> Lendo aquivo...\n");
    // p = readFile(size, inputfileRandom);

    // printf(">Elemento: %d\n", *p);

    // printf("> Esquevendo aquivo...\n");
    // writeFile(p, size, "./output/fileWrite.txt");


    // p = bubbleSort(size, p, swap);

    // printf("> Esquevendo aquivo bubbleSort...\n");
    // writeFile(p, size, "./output/fileWriteBubbleSort.txt");

    // p = insertSort(size, p, swap);

    // printf("> Esquevendo aquivo insertSort...\n");
    // writeFile(p, size, "./output/fileWriteInsertSort.txt");



    printf("\n> Programa finalizado\n");

    return 0;
}
