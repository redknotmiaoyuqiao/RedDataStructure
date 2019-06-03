#include "RedList.h"

RedList * RedListInit()
{
    RedList * list = (RedList *)malloc(sizeof(RedList));
    list->first = NULL;

    return list;
}

int RedListUnInit(RedList * list)
{
    RedListClearAll(list);

    free(list);

    return 1;
}

int RedListPushBack(RedList * list,void * obj)
{
    ListNode * node = (ListNode *)malloc(sizeof(ListNode));
    node->obj = obj;
    node->next = NULL;

    if(list->first == NULL){
        list->first = node;
        return 1;
    }

    ListNode * tempNode = list->first;
    while(1){
        if(tempNode->next == NULL){
            tempNode->next = node;
            break;
        }
        tempNode = tempNode->next;
    }

    return 1;
}

int RedListGetCount(RedList * list)
{
    int count = 0;
    ListNode * tempNode = list->first;
    while(tempNode){
        tempNode = tempNode->next;
        count++;
    }

    return count;
}


void * RedListGetNode(RedList * list,int index)
{
    int _index = 0;
    ListNode * tempNode = list->first;
    while(tempNode){
        if(index == _index){
            return tempNode->obj;
        }
        tempNode = tempNode->next;
        _index++;
    }

    return NULL;
}


RedList * RedListReverse(RedList * list)
{
    ListNode * lastP = NULL;
    ListNode * p = list->first;
    ListNode * nextP = NULL;
    if(p != NULL){
        nextP = p->next;
    }
    
    while(1){
        p->next = lastP;

        if(nextP == NULL){
            break;
        }

        lastP = p;
        p = nextP;
        nextP = nextP->next;
    }

    list->first = p;

    return list;
}


int RedListClearAll(RedList * list)
{
    ListNode * p = list->first;
    ListNode * nextP = NULL;
    if(p != NULL){
        nextP = p->next;
    }
    
    while(1){
        free(p);

        p = nextP;

        if(nextP != NULL){
            nextP = nextP->next;
        }
        
        if(p == NULL){
            break;
        }
    }

    list->first = NULL;

    return 1;
}