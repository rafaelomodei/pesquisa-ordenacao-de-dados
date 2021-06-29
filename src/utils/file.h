#ifndef CREATEFILE_H
#define CREATEFILE_H

#define inputFileOrderly "./output/fileOrderly.txt"
#define inputfileInverted "./output/fileInverted.txt"
#define inputfileRandom "./output/fileRandom.txt"

int createFile();
int* readFile(int sizeArray, char fileName[]);
int writeFile(int *array, int sizeArray ,char fileName[]);


#endif