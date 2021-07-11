#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <ctype.h>

#include "component.h"
#include "../utils/global.h"
#include "../utils/file.h"
#include "../style/styles.h"

#include "../library/bubbleSort/bubbleSort.h"
#include "../library/insertSort/insertSort.h"
#include "../library/selectionSort/selectionSort.h"
#include "../library/shellSort/shellSort.h"



// enum methods{
//     bubbleSort,
//     insertSort,
// }typeMthods;


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
    printf("%s [ 1 ] - executar a ordenacao com todos os metodos                  \n", MARGIN);
    printf("%s [ 2 ] - executar a ordenacao usando Bubble Sort                    \n", MARGIN);
    printf("%s [ 3 ] - executar a ordenacao usando Insertion Sort                 \n", MARGIN);
    printf("%s [ 4 ] - executar a ordenacao usando Selection Sort                 \n", MARGIN);
    printf("%s [ 5 ] - executar a ordenacao usando Shell Sort                     \n", MARGIN);
    // printf("%s [ 6 ] - executar a ordenacao usando Quicksort(Lomuto)             \n", MARGIN);
    // printf("%s [ 7 ] - executar a ordenacao usando Mergesort                     \n", MARGIN);
    // printf("%s [ 8 ] - executar a ordenacao usando Radixsort                     \n", MARGIN);
    // printf("%s [ 9 ] - executar a ordenacao usando QuickSort(Hoare)              \n", MARGIN);
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

void content(Method method, int contentSize){

    int *log, *file, *readFileOrderly, *readFileInverted, *readFileRandom;

    long int counterSwap = 0;
    long int *swap = &counterSwap;

    int selectMethod = 0;

    char typeData[3][11] = {
        "ORDENADOS",
        "INVERTIDOS",
        "RANDOMICOS",
    };

    char titleMethod[4][20] = {
        "BUBBLE SORT",
        "INSERT SORT",
        "SELECT SORT",
        "SHELL SORT",
    };

    char fileOutput[100] = PATH_FILE;
    
    char nameMethodOutput[4][20] = {
        "OUTPUT_BubbleSort",
        "OUTPUT_InsertShort",
        "OUTPUT_SelectShort",
        "OUTPUT_ShellShort",
    };

    char typeFileOutput[3][20] = {
        "_FileOrderly",
        "_FileInverted",
        "_FileRandom",
    };

    //log = readFile(contentSize, strcat(fileOutput, nameFileLog));

    int* typeFile[3] = {
        readFileOrderly = readFile(contentSize, inputFileOrderly),
        readFileInverted = readFile(contentSize, inputfileInverted),
        readFileRandom = readFile(contentSize, inputfileRandom),
    };

    method == bubbleSort ?
        selectMethod = 0:
    method == insertSort ?
        selectMethod = 1:
    method == selectionSort ?
        selectMethod = 2 :
    method == shellSort ?
        selectMethod = 3:
        title("METODO NAO ENCONTRADO!");

    writeFileLog(titleMethod[selectMethod]);
    
    for (int i = 0; i <= 2; i++){ //typeFile
        title(titleMethod[selectMethod]);

        //writeFileLog(typeData[i]);
        
        printf(" %s Dados %s", POINTER, typeData[i]);
        printf("\n %s Verificando dados %s...", POINTER, typeData[i]);
        printf("\n %s Tempo gasto na %s: ", POINTER, typeData[i]);
        
        file =  method(contentSize, typeFile[i], swap);
        
        printf(" %s Dados %s verificado", POINTER,typeData[i]);
        printf(" %s Escrevendo dados ordenados...", POINTER);
        
        strcat(fileOutput, nameMethodOutput[selectMethod]);
        writeFile(file, contentSize, strcat(fileOutput, typeFileOutput[i]));
        printf(" %s Dados ordenados escritos...\n", POINTER);
        
        divider();

        //Limpando buffer
        strcpy(fileOutput, PATH_FILE);
        __fpurge(stdin);

    }

    writeFileLog("\n");
    
}