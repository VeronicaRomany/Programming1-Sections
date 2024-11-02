//
// Created by veror on 10/31/2024.
//
#include "stdio.h"

void helloAll();

const int numberOfProgrammingClass = 56;
int x = 10;

int main(){
    int x = 6;
    printf("Value of x is %d\n", x);
    printf("Value of numberOfProgrammingClass is %d\n",
           numberOfProgrammingClass);

    helloAll();
    printf("Value of x is %d\n", x);

    int i;
    int j;
    for( i=0 ; i<3;i++){
        for( j=5; j<10;j++){
            printf("%d %d",i,j);
        }
    }
    printf("\n");
    printf("%d %d",i,j);

//    int insideMain(int z, int y){
//        return z+y;
//    }
}

void helloAll() {
    printf("Value of x is %d\n", x);
    printf("Hello for %d students\n",
           numberOfProgrammingClass);
    x = x+30;
    printf("Value of x is %d\n", x);
}