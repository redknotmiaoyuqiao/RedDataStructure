#ifndef	RED_TREE_H
#define	RED_TREE_H

typedef struct TreeNode {
	// void * val;
    int val;
	struct TreeNode * left;
	struct TreeNode * right;
}TreeNode;

typedef struct RedTree{
    TreeNode * first;
}RedTree;

RedTree * RedTreeInit();

int RedTreeAddNode(RedTree * tree,int val);

int RedTreeFree(RedTree * tree);

#endif