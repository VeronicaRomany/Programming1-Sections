//
// Created by veror on 10/11/2024.
//
#include <stdio.h>

int main(){
    while(1){
        int x;
        printf("Enter a number\n");
        scanf("%d", &x);
        if(x==0){
            break;
        }
        printf("You entered %d\n", x);
    }

    while(1){
        int x;
        printf("Sec example Enter a number\n");
        scanf("%d", &x);
        if(x==0){
            printf("Continue block");
            continue;
        }
        printf("You entered %d\n", x);
    }
    return 0;
}