#ifndef __BST__
#define __BST__
#include <malloc.h>
#include <stdio.h>
#include "utils.h"
//#include "queue_node.h"


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
void iterativeLevelOrder(treenode *root);
void verticalIterationLoop(treenode *root, int min, int max);
void findMaxMinDistanceFromRoot(treenode *root, int *max, int *min);
void verticalIteration(treenode *root, int min, int max);

void spiralLevelLoop(treenode *root,int depth,bool flip);
void spiralLevelOrderTraversal(treenode *root);

int countLeafNodes(treenode *root);

treenode * inorderSuccessor(treenode *root); 

int LCA(treenode *root,int data1, int data2);
int bstLCA(treenode *root,int data1, int data2);
treenode *findnode(treenode *root,int data);
#endif