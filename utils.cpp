#include "utils.h"

int max(int a, int b){
		return ( a <= b ? b : a);
}

int min(int a, int b){
		return ( a >= b ? b : a);
}

void vPrintArr(int *iArr, int iLen){
     for(int i = 0 ; i < iLen ; i++){
        printf("%d ", iArr[i]);       
     }
	 printf("\n");

}
void swap(int *a, int *b){
	int temp = *a ;
	*a = *b ;
	*b = temp;
}

int* random(int num){
	int *arr = NULL;
	if(num == 0){
	printf("Wrong input, increase it\n");
		return NULL;
	}
	else{
		arr = (int *)malloc(sizeof(int)*num);
	for(int i=0;i<num;i++){
		num = rand();
		if(num > 999)
			num = num/100;
	arr[i] = num;
	}
		}
	return arr;
	}


double atoi(char *ptr){
	double num =0; int i=0;
while(ptr){
 	num = num*10 + (ptr[i] - '0') ;
	ptr++;
	i++;
}	
	return num;
}

void swapstrings(char *a, char * b){
char c = '\0';
c = *a;
*a = *b;
*b = c;
}

void reverseString(char *ptr){
int end = strlen(ptr)-1; 
int start = 0 ; 
	while(start < end){
	
		swapstrings(&ptr[end],&ptr[start]);
		start++;
		end--;
	}	
}

char* itoa(int num,char *outputbuff){
	if(num==0){
		outputbuff[0]='0';
		outputbuff[1]= '\0';
		return outputbuff;
	}	
	int rem = 0 ,ptr=0; 
	bool isnegative =false;
	if(num < 0)
	{
	num = -1*num;
	  isnegative = true;	
	}
	while(num){
		rem = num%10;
		outputbuff[ptr++] =rem + '0';
		num = num/10;
		
	}
	if(  isnegative  ){
	outputbuff[ptr++]='-';
	 }
		outputbuff[ptr]='\0';
		reverseString(outputbuff);
		return outputbuff;
}

int lenOfTermIntArray(int *a){
int len = 0;
while(a[len]!=-1)	{	
	len++;
	}
return len+1;
}

//if 1d array, pass dimension =1,a buffer , number of rows
//if 2d array, pass dimension =2, a 2d buffer , number of rows, number of column
int *generateRandomIntArr(int dimension,...){
	
	int *arr1d = NULL;
	int **arr2d = NULL;
	va_list valist;
	va_start(valist, dimension);
	   /* access all the arguments assigned to valist */
	int *arr = (int *)malloc(sizeof(int)*(dimension+1));
	int iter =0;
    for (iter = 0; iter < dimension; iter++)    {
       arr[iter] = va_arg(valist, int);
    }
	arr[iter] = -1;
    /* clean memory reserved for valist */
    va_end(valist);
	
	int len = lenOfTermIntArray(arr);
	if(len == 1){
		arr1d = (int *)malloc(sizeof(int)*arr[0]);
		if(arr1d){	
			arr1d = random(arr[0]);
			free(arr);
		}
	}else{
		arr2d = (int **)malloc(sizeof(int *)*arr[1]);
		for(int i=0;i<arr[1];i++){
			arr2d[i] = random(arr[0]);
			free(arr);
			//return arr2d;
		}
	}
	
	
}

bool isPrime(int num){
	if(num<0){
		num = -1*num;
	}
	
	if(num%2 ==0)
		return false;
	if(num ==1)
		return true;
	for(int i=3;i*i<num;){
		if(num%i ==0)
			return false;
		i=i+2;
	}
	
return true;	
}