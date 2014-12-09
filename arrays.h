#ifndef	__ARRAY__
#define __ARRAY__
#include <stdio.h>
#include <algorithm>
#include "majorityElement.h"
#include <string.h>
using namespace std;


//Find the first circular tour that visits all petrol pumps
//http://www.geeksforgeeks.org/find-a-tour-that-visits-all-stations/






void printPairsToGivenSum(int *arr, int len, int sum);
void maximizeStockPrices(int *arr, int len);


struct updates{
float start, end;	
};
typedef struct updates updates;

bool acompare(updates a, updates b);

void longestContinuousPatch(updates inputs[],int numberOfInputs);

#endif