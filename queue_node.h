#ifndef __QUEUENODE__
#define __QUEUENODE__
#include <iostream>
#include <malloc.h>
#include <stdio.h>
#include "bst.h"
using namespace std;

//#define max 100
class CQueuenode{
	
private:
	//std::vector(int) input;
	treenode  **input;
	int top,end, prev_mem,step_size; 
	
public :
	CQueuenode();
	void enqueuenode( treenode *add);
	treenode * dequeuenode();
	treenode * peeknode();
};

#endif