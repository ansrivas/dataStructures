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

node * createList(node **head, int iData){
     if(*head == NULL){
     *head = createNode(iData);         
     }
     else
     {
      node *temp = *head ;
      while(temp->next){
        temp = temp->next;
      }
      temp->next = createNode(iData);                     
     }
     
     
return *head;
}


void vFnPrintList(node *head){
     if(head){
      while(head){
       printf("%d ",head->iData);
       head = head->next;            
      }
     }else{
       printf("List Empty\n");      
     }
       return;     
}

int main(){
    
    node *head = NULL;
    for(int i=0;i<4;i++){
       createList(&head, i);     
    }
    vFnPrintList(head);
    getchar();
    return 1;
}
