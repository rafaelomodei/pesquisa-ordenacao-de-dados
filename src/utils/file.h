#ifndef CREATEFILE_H
#define CREATEFILE_H

#define PATH_FILE "./output/"

#define inputFileOrderly "./output/fileOrderly.txt"
#define inputfileInverted "./output/fileInverted.txt"
#define inputfileRandom "./output/fileRandom.txt"

#define nameFileOrderly "FileOrderly.txt"
#define nameFileInverted "FileInverted.txt"
#define nameFileRandom "FileRandom.txt"

#define nameFileLog "log.csv"

int createFile();
int* readFile(int sizeArray, char fileName[]);
int writeFile(int *array, int sizeArray ,char fileName[]);
int writeFileLog(char ctx[]);

#endif