#ifndef __BST__
#define __BST__
#include <malloc.h>
#include <stdio.h>
#include "utils.h"


struct treenode {
int data; 
struct treenode * left, *right ;	
};
typedef struct treenode  treenode ;

treenode * createTreeNode(int data);
void printEachLevel(treenode *root, int depth);
void inserttree(treenode **root,int data);
void printInorder(treenode *root);
void bstToLinkedlist(treenode **root);
int height(treenode *root);
void printLevelOrder(treenode *root);
void iterativeTreeTraversal(treenode *root);

#endif