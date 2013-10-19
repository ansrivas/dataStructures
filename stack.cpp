#include <stdio.h>
#include <limits.h>
#include <malloc.h>

int pop(int *iInput, int iLen,int *top){
    if(*top == -1){
     printf ("List Empty\n");
            return  INT_MIN;      
    }
    else
     return iInput[*top];
}

void push(int *iInput, int iLen, int *top, int iData){
     if(*top < iLen)
     {
      iInput[*top]= iData  ;
      *top = *top + 1 ;       
     }
     else{
      printf("Stack Full\n");             
     }
return;
}

int main(){
    
 int *iInput = (int *)(malloc(sizeof(int) * 5));
 char choice = 0 ;
 int top = -1;
 while(1){
  printf("To push = press p or pop = press o, to break press \n");         
  scanf("%c",&choice);
  if(choice == 'p'){
   printf("Enter digit to push\n");
   int iData = 0 ; 
   scanf("%d",&iData);
   push(iInput, 5,&top, iData);                  
  } else if(choice == 'o'){
      printf( "%d", pop(iInput, 5, &top));
    }
      else if(choice == 'n'){
          break;
      }
 }

getchar();
return 0 ; 
}
