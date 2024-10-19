#include "stdio.h"
#include "stdbool.h"
int main() {

    // initialization
    int arrayOfIntegers [] = {1, 2, 3, 4, 5};
    char arrayOfChars [3];

    // accessing elements
    printf("First element of the array: %d\n", arrayOfIntegers[0]);
    printf("Second element of the array: %d\n", arrayOfIntegers[1]);
    printf("Third element of the array: %d\n", arrayOfIntegers[2]);
    printf("Fourth element of the array: %d\n", arrayOfIntegers[3]);
    printf("Fifth element of the array: %d\n", arrayOfIntegers[4]);

    // set elements
    arrayOfChars[0] = 'a';
    arrayOfChars[1] = 'b';
    arrayOfChars[2] = 'c';

    printf("First element of the array: %c\n", arrayOfChars[0]);

    // update values
    arrayOfChars[0] = 'd';
    printf("First element of the array: %c\n", arrayOfChars[0]);


    // Using loops with the array
    int len = sizeof(arrayOfIntegers) / sizeof(arrayOfIntegers[0]);
    for (int i = 0; i < len ; ++i) {
        printf( "%d ", arrayOfIntegers[i]);
    }

    printf("\n");
    int n;
    printf("Enter the size\n");
    scanf("%d",&n);
    int scannedArray [n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &scannedArray[i]);
    }
    printf("Scanned array:\n ");
    for (int i = 0; i < n ; ++i) {
        printf( "%d ", scannedArray[i]);
    }

    return 0;
}
