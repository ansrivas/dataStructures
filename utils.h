#ifndef __UTILS__
#define __UTILS__
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
int max(int a, int b);
int min(int a, int b);
void swap(int *a, int *b);
void swapstrings(char *a, char* b);
void vPrintArr(int *iArr, int iLen);
int random();
double atoi(char *ptr);
void reverseString(char *ptr);
char * itoa(int num,char *outputbuff);
#endif