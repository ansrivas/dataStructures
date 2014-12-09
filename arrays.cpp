#include "arrays.h"




void printPairsToGivenSum(int *arr, int len, int sum){
	
	int index = 0 ;
	for(int i=0;i<len;i++){
			index = binarySearch(arr, 0,len-1,sum-arr[i]);
			if(index !=-1){
					printf("the numbers are, %d %d",arr[index],arr[i]);
			}
	}
	
return;
}


void maximizeStockPrices(int *arr, int len){
	
	int min_until_now = arr[0];
	int max_difference = arr[1] - arr[0],start = 0, end = 1;
	
	for(int i=1 ;i<len;i++){
		
			if(arr[i] - min_until_now > max_difference){
					max_difference = arr[i]-min_until_now;
					end = i;
			}
			if(arr[i] < min_until_now){
					min_until_now = arr[i];
					if(i< end){
							start = i;
					}		
			}
	}
	printf("start %d, end %d",start, end);
	
return;
}


/*
 *There is a 12 km road and a contractor who is in-charge of repairing it. 
 * Contractor updates you about the work which is done in patches. 
 * Like “Road between 3.2 km to 7.9 km repaired ”, “Road between 1.21 km to 3.2 km repaired”. 
 * You have a manager who enquires about the longest continuous patch so far. 
 */
 

bool acompare(updates a, updates b){
return a.start < b.start;	
}
void longestContinuousPatch(updates inputs[],int numberOfInputs){
		std::sort(inputs,inputs+numberOfInputs,acompare);
		//for(int i=0;i<numberOfInputs;i++){
			//	printf("%f %f",inputs[i].start, inputs[i].end);
		//}
		
		float iStart =inputs[0].start, iEnd = inputs[0].end;
		int prev = 0;
		for(int i=0;i<numberOfInputs-1 ;i++){
			
				if(inputs[i].end == inputs[i+1].start){
					if(inputs[prev].end != inputs[i].start)
						iStart = inputs[i].start;
					iEnd = inputs[i+1].end;
				}
				prev = i;
			
		}
		printf("%f %f",iStart, iEnd);
	
}



