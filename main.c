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

    int contentSize = createFile();

    readFileOrderly = readFile(contentSize, inputFileOrderly);
    readFileInverted = readFile(contentSize, inputfileInverted);
    readFileRandom = readFile(contentSize, inputfileRandom);

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
            content(bubbleSort, contentSize);
            content(insertSort, contentSize);
            content(selectionSort, contentSize);
            content(shellSort, contentSize);
            content(shellSort, contentSize);

        }break;

        case 2:{

            content(bubbleSort, contentSize);

        }break;

        case 3:{

            content(insertSort, contentSize);

        }break;

        case 4:{

            content(selectionSort, contentSize);

        }break;

        case 5:{

            content(shellSort, contentSize);

        }break;

        default:{
            printf("\n %s %s", POINTER,  MENSSAGER_INVALID_OPTION);
        }break;
    }
    }while(menuOption != 0);

    printf("\n> Programa finalizado\n");

    return 0;
}
