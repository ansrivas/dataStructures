#include "bst.h"


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
			}
		}
	return;
	}


