#include "majorityElement.h"


int binarySearch(int *arr, int start, int end, int x){
	
	int mid =0,low = start, high = end;
	while(high>=low){
		mid = (low+high)/2;
		if(x == arr[mid])
			return mid;
		if(x < arr[mid]){
			high = mid-1;
		}
		else {
			low = mid+1;
		}	
	}
	return -1;
}


bool majorityElement(int *arr, int len,int x){
	
	//here we need only the first occurrence of the number
	int index = binarySearch(arr, 0,len-1,x);
	if(index!=-1){
		//check if there are n/2 or more elements present
		if(index+len/2 <= len-1 && arr[index+len/2] ==x)
			return true;
		}
	return false;
	
	
	
}