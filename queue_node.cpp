#include "queue_node.h"


CQueuenode::CQueuenode(){
top = 0;
end = -1;
step_size = 3;
prev_mem = step_size;
input = (treenode  **)malloc(sizeof(treenode*)*prev_mem);	
for(int i=0;i<prev_mem;i++){
	input[i] = (treenode  *)malloc(sizeof(treenode));
	}
}

void CQueuenode::enqueuenode(treenode * data){
	treenode ** temp;
	
	if(end >prev_mem-2){
		prev_mem = prev_mem + step_size;
		temp = (treenode  **)realloc(input,sizeof(treenode*)*prev_mem);	

		if(temp != NULL){
			input = temp;	
			for(int i=0;i<prev_mem;i++){
				if(input[i]!=NULL){
					input[i] = (treenode  *)realloc(input[i],sizeof(treenode));
				}else{
					input[i] = (treenode  *)malloc(sizeof(treenode));
					}
				}
			}
		else{
			printf("out of memory exception");
			return ;	
		}
	}
	
	end++;
	input[end] = data;
	
}

treenode * CQueuenode::dequeuenode(){
	if(end >-1 && top <= end){
		return input[top++];	
	}else{
		printf("empty queue ,returning -1\n");
		return NULL;
	}
}

treenode * CQueuenode::peeknode(){
		if(end >-1 && top <= end){
		return input[top];	
	}else{
	printf("empty queue,returning -1\n");
	return NULL;
	}
	}