//
// Created by veror on 12/20/2024.
//

#include "stdlib.h"
#include "stdio.h"

int** sumMatrix(int rows, int cols, int** matrix1, int** matrix2){
    int** result = calloc(rows, sizeof(int*));
    for(int i = 0; i < rows; i++){
        result[i] = calloc(cols, sizeof(int));
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

void printArray (int rows, int cols, int** array) {
    for (int i = 0 ; i < rows ; i++ ){
        for (int j = 0 ; j < cols ; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(){
    // allocate 2D array dynamically
    int rows ;
    int cols ;

    scanf("%d %d", &rows, &cols);

    int** matrix = calloc(rows, sizeof(int*));
    for(int i = 0; i < rows; i++){
        matrix[i] = calloc(cols, sizeof(int));
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int** result = sumMatrix(rows , cols , matrix , matrix);

    printArray(rows, cols, result);

     // free memory
    for(int i = 0; i < rows; i++){
        free(matrix[i]);
        free(result[i]);
    }

    free(matrix);
    free(result);

    return 0;
}