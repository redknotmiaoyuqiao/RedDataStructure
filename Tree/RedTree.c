#include "RedTree.h"

#include <stdio.h>
#include <stdlib.h>

RedTree * RedTreeInit()
{
    RedTree * redTree = (RedTree *)malloc(sizeof(RedTree));
    redTree->first = NULL;
    return redTree;
}

int RedTreeAddNode(RedTree * tree,int val)
{
    TreeNode * valNode = (TreeNode *)malloc(sizeof(TreeNode));
    valNode->left = NULL;
    valNode->right = NULL;
    valNode->val = val;

    if(tree->first == NULL){
        tree->first = valNode;
        return 1;
    }

    

    return 1;
}

int RedTreeFree(RedTree * tree)
{
    // TODO
    return 1;
}