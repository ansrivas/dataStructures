#include <stdio.h>
#include "linkedlist.h"
#include "sorting.h"
#include "queue.h"
#include "bst.h"
#include "heapsort.h"
#include "queue_node.h"
#include "majorityElement.h"
#include "arrays.h"


int fact(int num){
	int fac = num;
	if(num == 1) return 1;
	fac = fac*fact(num-1);
return fac;	
}


int printSumValues(int num){
	int fac_val = fact(num);
	int val = 0 ;
	int tens = 10;
	int remaining = fac_val;
	while(remaining != 0){
		val = val + remaining%tens;
		remaining = remaining/tens;
	}	
return val;	
}



int main(int argc, char **argv)
{
	/*
	node *head = NULL;
	for(int i = 0;i<10;i++){
		
		insertNode(&head,i);
	}
	printList(head);
	*/
	/*
	int array[] = {9,8,7,6,5,4,3,2,1};
	int arrlen = sizeof(array) / sizeof(array[0]);
	quickSort(array, 0, arrlen);
	
	for (int i =0 ;i < arrlen; i++){
			printf("%d\n",array[i]);
	}
	*/
	
	/*
	CQueue *obj = new CQueue();
	for(int i =0;i <400 ;i++){
	obj->enqueue(i);
	}
	printf("\n");
	for(int i =0;i <2 ;i++){
		printf("%d",obj->dequeue());
	}
	printf("\n");
	printf("%d\n",obj->peek());
	
	
	treenode *root = NULL;
	for(int i =0;i<10;i++){
	inserttree(&root,i);
	}

	//printInorder(root);
	 
	//printLevelOrder(root);
	/*
	CQueuenode *obj = new CQueuenode();
	obj->enqueuenode(root);
	obj->enqueuenode(root->right);
	obj->enqueuenode(root->right->right);
	obj->enqueuenode(root->right->right->right);
	obj->enqueuenode(root->right->right->right->right);
	
	for(int i=0;i<10;i++){
	treenode *temp = obj->dequeuenode();
		if(temp)
		printf("%d",temp->data);
		else{
		printf("empty, data\n");	
		}
	}
	
	/*
	int input[10];
	for (int i=1;i<10;i++){
		input[i]=i;
	}
	
	heapsort(input, 9);
	for (int i=1;i<10;i++){
		printf("%d",input[i]);
	}
	*/
	/*
	int input[10] ={1,2,3,3,3,3,3,3,3,9};
	if(majorityElement(input,10,3)){
		printf("exists\n");
		}
	
	 * 
	 * 
	node *head = NULL;
	int k=0;
	for(int i=0;i<10;i++){
			scanf("%d",&k);
			insertNode(&head,k);
	}
		printList(head);
	sortedListWithoneszeros(&head);
	printList(head);
	 * 
	 * 
	 *
	 * 
	 * 
	 * 
	 int inp[]={0,1,2,3,4,5,6,7,8};
	 printPairsToGivenSum(inp,sizeof(inp)/sizeof(inp[0]),7);
	 */
	 
	 /*
		int arr[] = {7, 9, 5, 6, 3, 2};
		maximizeStockPrices(arr,sizeof(arr)/sizeof(arr[0]));
		
	
	 */
	updates inputs[3];
		memset(inputs,0.0f,sizeof(updates)*3);
		inputs[0].start = 1.21;
		inputs[1].start = 3.2;
		inputs[2].start = 4.1;
		inputs[3].start = 0.8;
		inputs[0].end = 3.2;
		inputs[1].end = 4.1;
		inputs[2].end = 7.9;
		inputs[3].end = 1.21;
		longestContinuousPatch(inputs,4);
	 
	return 0;
}
