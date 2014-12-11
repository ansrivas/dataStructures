#ifndef __LINKED_LIST__
#define __LINKED_LIST__

#include <stdio.h>
#include <malloc.h>


struct node{
	
	int iData;
	struct node* next;
	
};
typedef struct node node ;


node* createNode(int data);
node* insertNode(node **head,int data);
void vFnPrintList(node *head);

//sort a list with zeros and ones
node* sortedListWithoneszeros(node **head);
	

#endif