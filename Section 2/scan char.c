//
// Created by veror on 10/11/2024.
//
#include <stdio.h>
int main(){
    char a;
    char b;
    char c;

    scanf("%c ", &a); // add post
    scanf("%c", &b);
    scanf(" %c", &c); // add pre

    printf("a = %c\n", a);
    printf("b = %c\n", b);
    printf("c = %c\n", c);


    char d;
    char e;
    char f;
    getchar();
    d = getchar();
    getchar();
    e = getchar();
    getchar();
    f = getchar();
    printf("d = %c\n", d);
    printf("e = %c\n", e);
    printf("f = %c\n", f);

    return 0;
}
