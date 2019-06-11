#include <stdio.h>
#include <stdlib.h>
#include "RedTree.h"

int main(){
    printf("Hello Tree\n");

    RedTree * tree = RedTreeInit();
    int ret = RedTreeFree(tree);
}