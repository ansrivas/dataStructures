#include "bst.h"
#include "queue_node.h"


treenode * createTreeNode(int data){
	
	treenode * newnode = (treenode *)malloc(sizeof(treenode));
	newnode->data	 = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
	
}



void inserttree(treenode **root,int data){
	
	if(*root == NULL){
		*root = createTreeNode(data);
	}
	else{
		treenode *temp = *root ;
		if (data < (*root)->data){
				inserttree(&( (*root)->left),data);
		}
		else if (data >  (*root)->data){
			inserttree(&( (*root)->right),data);
		}
		*root = temp;
	}
}

void printInorder(treenode *root){
	if(root){
		printInorder(root->left);
		printf("%d",root->data);
		printInorder(root->right);	
	}	
}

int height(treenode *root){
	if(root){
		return max(height(root->left),height(root->right))+1;	
	}	
	return 0;
}

void printEachLevel(treenode* root, int depth){
	
if(root){
	if(depth ==0 ){
		printf("%d",root->data);
		}
	else{
		//recurse through root->left, root->right
		printEachLevel(root->left,depth-1);
		printEachLevel(root->right,depth-1);
		}
	}
	
	return;
}
void printLevelOrder(treenode *root){
	
	int depth = height(root);
	if(root){
		for(int i=0; i<depth; i++){
				printEachLevel(root,i);
				printf("\n");
			}
		}
	return;
	}


void iterativeTreeTraversal(treenode *root){
	//So the concept here is to make a threaded binary tree out of our tree for traversal
	//and then fix it back
	if(root){
		
		treenode * current = root, *temp = NULL;
		while(current){
			//if no left child, print root and move to right child	
			if(current->left == NULL){
					printf("%d",current->data);
					current = current->right;
			}	
			else{
				temp = current->left;
				//trying to find inorder predecessor here
				//temp will be the inorder predecssor of current now and link it to current node
				while(temp->right != NULL || temp->right !=current)
					temp = temp->right ;
					//if we reached to the end of right subtree...create a link to current
					if(temp->right == NULL){
						temp->right = current;
						current = current->left	;
					}else{
						printf("%d",current->data);
						current = current->right;
						
					}
			}	
		}	
	}
	
	
return;	
}


void iterativeLevelOrder(treenode *root){
	treenode *temp = root;
	CQueuenode *que = new CQueuenode();
	while(temp){
			printf("%d",root->data);
			
			if(temp->left){
				que->enqueuenode(root->left);
			}
			if(temp->right){
				que->enqueuenode(root->right);
			}
			
			temp = que->dequeuenode();
	}  
return;	
}


void findMaxMinDistanceFromRoot(treenode *root, int *max, int *min){
	 
	if(root){
			if(root->left){
				*min = *min -1;
				findMaxMinDistanceFromRoot(root->left, max,min);
			}
			if(root->right)
			
				*max = *max +1;
				findMaxMinDistanceFromRoot(root->right,max,min);
			}
	}

void verticalIterationLoop(treenode *root, int min, int max){
	int level = 0;
	for(int i=min ;i<max ;i++){
		verticalIteration(root,i,level);
		printf("\n");
	}
return;	
}

void verticalIteration(treenode *root,int minmax,int level){
	
	if(root){
		if(minmax == level){
				printf("%d",root->data);
		}
		verticalIteration(root->left,minmax,level-1);
		verticalIteration(root->right,minmax,level+1);
		
	}
return;	
}


void spiralLevelLoop(treenode *root,int depth,bool flip){
	
	if(root){
		if(depth ==0){
		 printf("%d",root->data);
		}else{
				if(flip){
				spiralLevelLoop(root->left,depth-1,flip);
				spiralLevelLoop(root->right,depth-1,flip);
				}
				else{
					spiralLevelLoop(root->right,depth-1,flip);
					spiralLevelLoop(root->left,depth-1,flip);
				}
		}
	}
 
return;	
}


void spiralLevelOrderTraversal(treenode *root){
	int depth = height(root);
	bool flip = true;
	if(root){
		for(int i=0;i<depth;i++){
				spiralLevelLoop(root,i,flip);
				flip = !flip;
				printf("\n");
		}
	}
	return;
}

int countLeafNodes(treenode *root){
	if(root){
			if(root->left == NULL && root->right == NULL){
					return 1;
			}
			return countLeafNodes(root->left) + countLeafNodes(root->right);
		
	}
	return 0;
}


treenode *findnode(treenode *root,int data){
	if(root){
		if(root->data ==data)
			return root;
		if(data < root->data)
		{
				return findnode(root->left,data);
		}
		else{
				return findnode(root->right,data);
			}
	}
	printf("No node with %d found\n",data);
	return NULL;
}


int bstLCAiTerative(treenode *root, int data1, int data2){
treenode *temp = root;
	while(root){
	
	
	
}	
	
}


int LCA(treenode *root,int data1, int data2){
	if( findnode(root,data1)!= NULL && findnode(root,data2)!=NULL)
		return bstLCA(root, data1, data2);
}


//Least common ancestor -recursive
int bstLCA(treenode *root,int data1, int data2){ 
if(root ){
	if( (data1 <= root->data	&& data2>=root->data)|| (data1 >= root->data	&& data2 <= root->data))
		return root->data;
 
	if(data1 < root->data && data2 < root->data)
		return bstLCA(root->left, data1, data2);
	else return bstLCA(root->right,data1, data2);
}	

printf("Data not found\n");
return -1;
}




treenode * inorderSuccessor(treenode *root, int data){
	if(root){
		
		
	}
	
	return NULL;
}


bool identicalBinarytree(treenode *root1,treenode *root2){
	bool lefttree = false, righttree = false;
	if(root1 && root2){
			if(root1->data == root2->data){
				  lefttree=  identicalBinarytree(root1->left,root2->left) ;
				  righttree=  identicalBinarytree(root1->right,root2->right);
				return (lefttree && righttree);
	
			}	
}
return false;
}