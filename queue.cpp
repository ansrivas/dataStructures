#include "queue.h"


CQueue::CQueue(){
top = 0;
end = -1;
step_size = 10;
prev_mem = step_size;
input = (int *)malloc(sizeof(int)*prev_mem);	
}

void CQueue::enqueue(int data){
	int *temp;
	
	if(end >prev_mem-2){
		prev_mem = prev_mem + step_size;
		temp = (int *)realloc(input,sizeof(*input)*(prev_mem));
		if(temp != NULL){
			input = temp;	
		}
		else{
			printf("out of memory exception");
			return ;	
		}
	}
	//printf ("%d",end);
	end++;
	input[end] = data;
	
}

int CQueue::dequeue(){
	if(end >-1 && top <= end){
		return input[top++];	
	}else{
		printf("empty queue ,returning -1\n");
		return -1;
	}
}

int CQueue::peek(){
		if(end >-1 && top <= end){
		return input[top];	
	}else{
	printf("empty queue,returning -1\n");
	return -1;
	}
	}