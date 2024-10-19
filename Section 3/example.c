//
// Created by veror on 10/19/2024.
//
#include "stdio.h"

int main(){
    int array[4] = {1,2,3,4};
    printf("%p\n",array);
    printf("%p\n",&array);
    printf("%d\n",array[0]);
    printf("%p\n",&array[1]);

    printf("%d\n", array[10]);

    printf("%d", sizeof (array+0));
    return 0;
}