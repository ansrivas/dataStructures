#include <iostream>
#include <malloc.h>

struct node{
 
 int iData;
 struct node * next;      
       
};
typedef struct node node ;

node * createNode(int iData){
     node *temp = (node *)malloc(sizeof(node));
     if(temp){
     temp->iData = iData;
     temp->next = NULL;        
     }     
     return temp;    
}





int main(){
    
    node *temp = createNode(4);
    printf("%d",temp->iData);
    getchar();
    return 1;
}
