#ifndef __QUEUE__
#define __QUEUE__
#include <iostream>
#include <malloc.h>
#include <stdio.h>
//#include <vector>
using namespace std;

//#define max 100
class CQueue{
	
private:
	//std::vector(int) input;
	int *input;
	int top,end, prev_mem,step_size; 
	
public :
	CQueue();
	void enqueue(int data);
	int dequeue();
	int peek();
};

#endif