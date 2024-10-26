//
// Created by veror on 10/25/2024.
//

#include "string.h"
#include "stdio.h"
int main(){

    // How To declare
    char str[] = "Hello, World!";
    char str2[] = {'H','e','l','l','o', ',' ,' ', 'W','o','r','l','d','!','\0'};
    printf("String 1 : %s\n",str);
    printf("String 2 : %s\n",str2);

    for (int i = 0; i < 12; ++i) {
        printf("%c",str2[i]);
    }

    // Null termination character
    char str3[12] = {'H','e','l','l','o', ',' ,' ', 'W','o','r','l','d','!'};
    printf("String 3 : %s\n",str3);

    // write examples on strlen and strcpy and strcat
    char str4[] = "Hello";
    char str5[] = "World";
    printf("Length of String 4 : %d\n",strlen(str4));
    printf("Length of String 4 : %d\n",sizeof(str4));
    printf("Length of String 5 : %d\n",strlen(str5));

    char str6[100];
    strcpy(str6,str4);
    printf("String 6 : %s\n",str6);

    char strTemp[20] = "Vero";
    strcat(strTemp,str5);
    printf("String Temp : %s\n",strTemp);

    // write examples on strcmp
    char str7[] = "Hello";
    char str8[] = "Hello";
    char str9[] = "HellOaushygqlweiq";

    printf("Comparing String 7 and String 8 : %d\n",strcmp(str7,str8));
    printf("Comparing String 7 and String 9 : %d\n",strcmp(str9,str7));


    return 0;
}