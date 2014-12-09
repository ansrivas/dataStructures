#ifndef __HEAPSORT__
#define __HEAPSORT__


#include <stdio.h>
#include "utils.h"

void maxheapify(int *arr, int len, int index);
void build_max_heap(int *arr, int len);
void heapsort(int *arr, int len);

#endif 