//
// Created by veror on 12/6/2024.
//
#include "stdlib.h"
#include "stdio.h"

int main(){

    // Allocate memory
    int* ptr = malloc(4);
    printf("ptr: %p\n", ptr);
    printf("Value at ptr: %d\n", *ptr);
    printf("Size of ptr: %ld\n", sizeof (ptr));

    int* ptr2 = calloc(1,4);
    printf("ptr2: %p\n", ptr2);
    printf("Value at ptr2: %d\n", *ptr2);

    int* ptr3 = calloc(10,4);
    printf("ptr3: %p\n", ptr3);
    printf("Value at ptr3: %d\n", *ptr3);
    for(int i = 0; i <= 10; i++){
        printf("Value at ptr3[%d]: %d\n", i, ptr3[i]);
    }


    char* ptr4 = malloc(sizeof (char));
    printf("ptr4: %p\n", ptr4);
    char* ptr5 = calloc(1, sizeof (char));
    printf("ptr5: %p\n", ptr5);
    printf("Value at ptr5: %c\n", *ptr5);

    float* ptr6 = malloc(sizeof (float));
    printf("ptr6: %p\n", ptr6);
    printf("Value at ptr6: %f\n", *ptr6);

    float* ptr7 = calloc(1, sizeof (float));
    printf("ptr7: %p\n", ptr7);
    printf("Value at ptr7: %f\n", *ptr7);


    // Access Memory
    int* ptrToArr = malloc(4*sizeof(int));
    for(int i = 0; i < 4; i++){
        ptrToArr[i] = 97+ i;
    }
    for(int i = 0; i < 4; i++){
        printf("Value at ptrToArr[%d]: %d\n", i, ptrToArr[i]);
    }

    printf("-----------------------\n");

    char* ptrToChar = (char *)  ptrToArr;

    for(int i = 0; i < 16; i++){
        printf("Value at ptrToChar[%d]: %c\n", i, ptrToChar[i]+50);
    }

    printf("-----------------------\n");

    *ptrToArr = 10;
    *(ptrToArr + 1) = 20;
    *(ptrToArr + 2) = 30;
    *(ptrToArr + 3) = 40;

    for(int i = 0; i < 4; i++){
        printf("Value at ptrToArr[%d]: %d\n", i, *(ptrToArr+i));
    }


    // Reallocate memory
    int* ptrToRealloc = malloc(4);
    printf("ptrToRealloc: %p\n", ptrToRealloc);
    ptrToRealloc[0] = 5;
    printf("Value at ptrToRealloc: %d\n", *ptrToRealloc);
    int* newPtr = realloc(ptrToRealloc, 8);
    if(newPtr == NULL){
        printf("Memory reallocation failed\n");
    }
    else{
        printf("Memory reallocation successful\n");
        printf("New Memory location: %p\n", newPtr);
    }

    int* ptrTofail = malloc(4);
    int* rellocate = realloc(ptrTofail,0);
    if(rellocate == NULL){
        printf("Memory reallocation failed\n");
    }
    else{
        printf("Memory reallocation successful\n");
        printf("New Memory location: %p\n", rellocate);
    }

    // Deallocate memory
    int* ptrToFree = malloc(4);
    printf("ptrToFree: %p\n", ptrToFree);
    ptrToFree[0] = 6;
    printf("Value at ptrToFree: %d\n", *ptrToFree);
    free(ptrToFree);
    printf("Safe guard");
//    ptrToFree = NULL;

    printf("Value at ptrToFree: %d\n", *ptrToFree);
    ptrToFree[0]= 25;
    printf("Value at ptrToFree: %d\n", *ptrToFree);

    return 0;
}