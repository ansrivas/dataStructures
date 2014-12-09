#include "sorting.h"

void quickSort(int *input, int begin, int end){
	int mid = (begin + end)/2 ;
	int i = begin, j = end;

	while(input[i] < input[mid]){
		i++;	
	}
	
	while(input[mid] < input[j]){
		j--;	
	}
	
	if(i <= j){
		swap(&(input[i]), &(input[j]));
		i++;
		j--;
	}
	
	if (i < end){
			quickSort(input,i,end);
	}
	
	if(j > begin){
			quickSort(input,begin,j);
	}
}
