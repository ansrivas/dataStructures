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

}
void swap(int *a, int *b){
	int temp = *a ;
	*a = *b ;
	*b = temp;
}

int random(){
	return rand();
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