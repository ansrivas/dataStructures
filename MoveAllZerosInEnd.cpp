// MoveAllZerosInEnd.cpp : Defines the entry point for the console application.
//

#include <iostream>

void vFnMoveZerosInEnd(int *iInput, int iLen){
	int iCount = 0 ;

	for(int i = 0; i< iLen; i++){
		if(iInput[i] != 0){
			iInput[iCount++] = iInput[i];
		}
	}

	while(iCount <iLen){
		iInput[iCount++] = 0 ;
	}

return;
}

void vFnPrintArray(int *iInput, int iLen){

	for(int i = 0 ;i <iLen; i++){
	printf("%d \n",iInput[i]);
	}

	return;
}

int main(int argc, char* argv[])
{

	int iInput[] ={1,2,0,1,4,9,0,0,1};
	int iLenArr = sizeof(iInput)/sizeof(iInput[0]);
	vFnMoveZerosInEnd(iInput,iLenArr);
	vFnPrintArray(iInput,iLenArr);
	getchar();
	return 0;
}

