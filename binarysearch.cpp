#include "binarysearch.h"
#include "utils.h"

bool binarysearch(int *arr, int low, int high, int num){
if(low < high){
	int mid = (low +high)/2;
	if(arr[mid] == num){
		printf("index is %d",mid);
		return true;
	}
	if(arr[mid] < num){
		return binarysearch(arr, mid+1, high,num);
	}
	if(arr[mid] > num){
		return binarysearch(arr, low, mid-1,num);
	}
}	
printf("Number not found\n");
return false;	
	
}

bool binarysearchModified(int *arr, int low, int high){
if(low < high){
	int mid = (low +high)/2;
	if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
		printf("index is %d and num is %d",mid,arr[mid]);
		return true;
	}
	if(arr[mid] < arr[mid+1] && arr[mid] >arr[mid-1]){
		return binarysearchModified(arr, mid+1, high);
	}
	if(arr[mid] < arr[mid-1] && arr[mid] >arr[mid+1]){
		return binarysearchModified(arr, low, mid-1);
	}
}	
printf("Number not found\n");
return false;
}