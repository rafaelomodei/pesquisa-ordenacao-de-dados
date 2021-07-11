#ifndef COMPONENT_H
#define COMPONENT_H

typedef int* (*Method)(int,int *, long int *);

//void splashScreen();
void menu();
void card();
void splashScreen();
void about();
void title();
void divider();
void content(Method, int contentSize);

#endif