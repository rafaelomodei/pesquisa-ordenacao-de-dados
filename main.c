#include <stdio.h>
#include <stdlib.h>

#include "./src/library/bubbleSort/bubbleSort.h"
#include "./src/library/insertShort/insertShort.h"
#include "./src/utils/file.h"

int main(){


    int* p;
    int i;

    long int counterSwap = 0;
    long int *swap = &counterSwap;

    printf("\n> Criando aquivo\n");
    int size = createFile();

    printf("> Lendo aquivo...\n");
    p = readFile(size, inputfileRandom);

    printf(">Elemento: %d\n", *p);

    printf("> Esquevendo aquivo...\n");
    writeFile(p, size, "./output/fileWrite.txt");


    p = bubbleSort(size, p, swap);

    printf("> Esquevendo aquivo...\n");
    writeFile(p, size, "./output/fileWriteBubbleSort.txt");

    printf("\n> Programa finalizado\n");

    return 0;
}
