#ifndef CREATEFILE_H
#define CREATEFILE_H

#define PATH_FILE "./output/"

#define inputFileOrderly "./output/fileOrderly.txt"
#define inputfileInverted "./output/fileInverted.txt"
#define inputfileRandom "./output/fileRandom.txt"

#define nameFileOrderly "FileOrderly.txt"
#define nameFileInverted "FileInverted.txt"
#define nameFileRandom "FileRandom.txt"


int createFile();
int* readFile(int sizeArray, char fileName[]);
int writeFile(int *array, int sizeArray ,char fileName[]);


#endif