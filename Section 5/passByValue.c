//
// Created by veror on 11/1/2024.
//
#include "stdio.h"

int func(int x){
    x=5000000;
    return x;
}

void setToNull(int x){
    x = -1;
}
int main(){
//    int x=5;
//    func(x);
//    printf("%d\n", x);
//
//    x= func(x);
//    printf("%d\n", x);

    int x = 20;
    setToNull(x);
    printf("%d",x);
    return 0;
}