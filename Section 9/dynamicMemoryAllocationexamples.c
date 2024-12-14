//
// Created by veror on 12/13/2024.
//
#include "stdio.h"
#include "stdlib.h"

void displayArray(int numberOfElements, int* array){
    for(int i=0 ; i<numberOfElements ; i++){
        printf("%d ",array[i]);
    }
}

int* reverseTheArray (int numberOfElements , int* originalArray){
    int* output = calloc(numberOfElements, sizeof(int));
    for(int i=0 ; i<numberOfElements ;i++){
        output[i] = originalArray[numberOfElements-i-1];
    }
    return output;
}

//int[] reverseArray(){
//    int[] newArray = int[5];
//    return newArray;
//}

int main(){
    int numberOfElements;
    scanf("%d",&numberOfElements);

    int* array = calloc(numberOfElements, sizeof(int));
    for(int i=0 ; i<numberOfElements ; i++){
        scanf("%d",&array[i]);
    }

    displayArray(numberOfElements, array);

    int* reversedArray = reverseTheArray(numberOfElements, array);

    printf("\nAfter Reverse the array:\n");
    displayArray(numberOfElements, reversedArray);
    free(array);
    return 0;
}