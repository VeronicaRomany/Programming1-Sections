//
// Created by veror on 10/25/2024.
//

#include <stdio.h>
#include <stdbool.h>

int main(){

//    int mat[0][0];
//    mat[0][0]=9;
//    printf("%d\n",mat[0][0]);
    int matrix[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };

    int matrix2 [2][2] = {
            {10,20},
            {30,40}
    };

    int rows = 5;
    int columns = 6;

    int matrix3[rows][columns];

    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            matrix3[i][j] = i+j;
        }
    }

    matrix3[0][0] = 1552367;
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }

    // can you declare 3 D array
    int matrix4[2][2][2] = {
            {
                    {1,2},
                    {3,4}
            },
            {
                    {5,6},
                    {7,8}
            }
    };

    //print 3D array
    printf("3D array \n");
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            for(int k=0 ; k<2 ; k++){
                printf("%d ",matrix4[i][j][k]);
            }
            printf("\n");
        }
    }
}