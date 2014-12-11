#include "linkedlist.h"




//Fn to create an empty node
node * createNode(int iData){
     node *temp = (node *)malloc(sizeof(node));
     if(temp){
     temp->iData = iData;
     temp->next = NULL;        
     }     
     return temp;    
}

//Fn to create a list 
node * insertNode(node **head, int iData){
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


/*
Fn to reverse a list in linear time using a loop
*/

node * reverseList(node **head){
  
  if(*head == NULL){
   printf("Empty List\n")   ;     
  }   
  node *prev = NULL, *next = NULL ,*cur = *head;
  while(cur){
  next = cur->next;
  cur->next = prev;
  prev = cur;
  cur = next;
  }
*head = prev;
return *head;
}

/*
Fn to reverse a list in recursively
*/

node * reverseListRecursive(node **head){
  
    if(*head == NULL){
   printf("Empty List\n")   ;     
  }  
  node *rest = NULL;
  node *first = NULL;
  
  first = *head;
  rest = first->next;
  
  if(rest == NULL) // just one node
  {
   return *head;        
  }
  
  reverseList(&rest);
  first->next->next = first;
  first->next = NULL;

*head = rest;
return *head;
}




//Fn to print the list
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

int kthfromEnd(node *head,int k){
if(head){
	node * fast = head, *slow = head;
	for(int i=0;i<k;i++)
		if(fast->next)
		fast = fast->next;
		else{
			printf("Empty list\n");
		return 	-1;
		}
		
	while(fast!=NULL){
			fast = fast->next;
			slow = slow->next;
	}
	return slow->iData;
	
}	
	
	
}
