#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void enqueue(int *iInput, int iLen, int *front, int *rear, int iData){
  if(*rear < iLen){
           iInput[*rear + 1] = iData;  
           *rear = *rear +1 ;        
  } else {
   printf("Queue full\n");       
  }  
return;
}

int dequeue(int *iInput, int iLen, int *front, int *rear){
  if(*rear == -1){
     printf("empty queue\n"); 
     return INT_MIN;      
  }  
   else{
	   *front = *front +1 ;
        return iInput[*front];
        
   } 
}

int main(){

int front = -1, rear = -1;
int iInput[10];


for (int i = 0 ; i < 10 ; i++){
    int l =  rand()%20;
  //  printf("%d", l);
  enqueue(iInput, 10,  &front, &rear,l);
}    

for(int j = 0 ; j <10; j++){
printf("%d ", dequeue(iInput, 10, &front,&rear));       
}

getchar();
return 0 ; 
}
