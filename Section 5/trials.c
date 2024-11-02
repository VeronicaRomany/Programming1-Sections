//
// Created by veror on 11/1/2024.
//
#include "stdio.h"


void func2(int arr[] , int size){
    printf("%p\n", arr);
    for(int i=0 ; i<size ; i++){
        arr[i] = 4000;
    }
}

void func3(int arr[] ){
    printf("%p\n",arr);
    arr = NULL;
    arr[0] = 13;
}


int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%p\n", arr);
    printf("Before calling func2\n");
    for(int i=0 ; i<5 ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    func2(arr, 5);
    printf("After calling func2\n");
    for(int i=0 ; i<5 ; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    func3(arr);
    printf("After calling func3\n");
    for(int i=0 ; i<5 ; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}