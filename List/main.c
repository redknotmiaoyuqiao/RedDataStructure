#include <stdio.h>
#include <RedList.h>

int main()
{
    RedList * list = RedListInit();

    int * a = (int *)malloc(sizeof(int));
    *a = 1;
    RedListPushBack(list,a);
    int count = RedListGetCount(list);
    printf("Count : %d\n",count);

    int * b = (int *)malloc(sizeof(int));
    *b = 2;
    RedListPushBack(list,b);
    count = RedListGetCount(list);
    printf("Count : %d\n",count);


    int * c = (int *)malloc(sizeof(int));
    *c = 3;
    RedListPushBack(list,c);
    count = RedListGetCount(list);
    printf("Count : %d\n",count);


    int * d = (int *)malloc(sizeof(int));
    *d = 4;
    RedListPushBack(list,d);
    count = RedListGetCount(list);
    printf("Count : %d\n",count);

    int * e = (int *)malloc(sizeof(int));
    *e = 5;
    RedListPushBack(list,e);
    count = RedListGetCount(list);
    printf("Count : %d\n",count);



    for(int i=0;i<count;i++){
        int * res = (int*)RedListGetNode(list,i);
        if(res != NULL){
            printf("Res:%d\n",*res);
        }
    }

    printf("================Reverse===============\n");
    RedListReverse(list);

    for(int i=0;i<count;i++){
        int * res = (int*)RedListGetNode(list,i);
        if(res != NULL){
            printf("Res:%d\n",*res);
        }
    }

    RedListClearAll(list);

    count = RedListGetCount(list);
    printf("Count : %d\n",count);

    RedListUnInit(list);

    return 0;
}