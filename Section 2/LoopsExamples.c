//
// Created by veror on 10/11/2024.
//
#include <stdio.h>

int main(){

    int i=1;

    while(i<=10){
        printf("%d ", i);
        i++;
    }

    printf("\n");

    i=1;
    do{
        printf("%d ", i);
        i++;
    }while(i<=10);

    printf("\n");
    for(i=1 ; i<=10 ; i++){
        printf("%d ", i);
    }
}
