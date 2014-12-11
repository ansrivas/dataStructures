#ifndef __MERGESORT__
#define __MERGESORT__

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "utils.h"
/*Merge Sort, O(nlogn)
  Not an inplace algorithm, consumes extra space
  
*/


void merge(int *iArr, int iStart, int iMid,  int iEnd, int iLen);

void vPrintArr(int *iArr, int iLen);
void mergeSort(int *iArr, int iStart, int iEnd, int iLen);
#endif