#ifndef	RED_LIST_H
#define	RED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    void * obj;
    struct ListNode * next;
}ListNode;

typedef struct RedList{
    ListNode * first;
}RedList;

RedList * RedListInit();

int RedListUnInit(RedList * list);

int RedListClearAll(RedList * list);

int RedListPushBack(RedList * list,void * obj);

int RedListGetCount(RedList * list);

void * RedListGetNode(RedList * list,int index);

RedList * RedListReverse(RedList * list);

#endif