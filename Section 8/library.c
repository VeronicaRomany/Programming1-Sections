#include "library.h"

#include <stdio.h>


void distroy(int* a, int* b){
    *a = -1;
    *b = -4923501;
}
int main(){

    int a = 10;
    int *ptr = &a;
    int* ptr2 = &a;

    printf("a: %d\n", a);
    printf("Value by dereferencing ptr: %d\n", *ptr);
    printf("ptr: %p\n", ptr);
    printf("ptr2: %p\n", ptr2);

    char x = 'd';
    char* ptrToChar = &x;
    char *ptrToChar2 = &x;

    printf("x: %c\n", x);
    printf("ptrToChar: %p\n", ptrToChar);
    printf("ptrToChar2: %p\n", ptrToChar2);

/// Pointer arithmetic
    // 1. addition and subtraction
    printf("Adding and Subtracting from pointers\n");
    printf("%p \n", ptr);
    printf("%p \n", ptr+1);
    printf("%p \n", ptr-2);
    printf("-----------------------\n");
    printf("%p \n", ptrToChar);
    printf("%p \n", ptrToChar+1);
    printf("%p \n", ptrToChar-2);

    // 2. pointers difference
    int arr[] = {1, 2, 3, 4};
    int* ptrTofirstEl = &arr[0];
    int* ptrTolastEl = &arr[3];
    printf("Difference between pointers: %ld\n", ptrTolastEl - ptrTofirstEl);

    // 3. pointers comparison
    printf("Is ptrTofirstEl < ptrTolastEl: %d\n", ptrTofirstEl < ptrTolastEl);


    // Pointers Types
    // 1. void pointers
    void* voidPtr = ptr;
    printf("voidPtr: %p\n", voidPtr);

    // 2. Null pointers
    int* nullPtr = NULL;
    printf("nullPtr: %p\n", nullPtr);

    // Recall array is pointer of the first element
    int arr2[] = {1, 2, 3, 4};
    int* ptrToArr = arr2;
    printf("arr2: %p\n", arr2);
    printf("ptrToArr: %p\n", ptrToArr);

    // traverse using pointers
    for(int i = 0; i < 4; i++){
        printf("Element %d: %d\n", i, *(ptrToArr+i));
    }

    // change values using pointers
    for(int i = 0; i < 4; i++){
        *(ptrToArr+i) = *(ptrToArr+i) * 2;
    }
    printf("---------------------------------\n");
    for(int i = 0; i < 4; i++){
        printf("Element %d: %d\n", i, *(ptrToArr+i));
    }

    // Path by refrerence
    int c = 20;
    int d = 10;
    distroy(&c, &d);
    printf("c: %d\n", c);
    printf("d: %d\n", d);

    return 0;
}

