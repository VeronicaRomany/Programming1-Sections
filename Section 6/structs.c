//
// Created by veror on 11/8/2024.
//
#include <string.h>
#include <stdio.h>
struct Student{
    int id;
    char name[20];
};

int main(){

    /**Note**/
//    int arr1[] = {1,2,3,4};
//    int arr2[] = {1,2,3,4};
//
//    arr1 = arr2;
//
//    char name[20];
//    name = "Veroo";
    /**Note**/

    struct Student s1;
    s1.id = 19016156;
//    s1.name = "Veroooo";
s1.name[0] = 'h';
    strcpy(s1.name ,"Vero Romany");

    printf("Student 1 ID: %d\n",s1.id);
    printf("Student 1 Name: %s\n",s1.name);

    struct Student s2 = {111111 , "Ahmed"};

    printf("Student 2 ID: %d\n",s2.id);
    printf("Student 2 Name: %s\n",s2.name);

    s1 = s2;
    printf("Student 1 ID: %d\n",s1.id);
    printf("Student 1 Name: %s\n",s1.name);


    struct Student s3 = {1111111, "Vero"};
    struct Student s4 = {2222222, "Ahmed"};
    struct Student s5 = {3333333, "Mohamed"};
    struct Student s6 = {4444444, "Bazina"};

    struct Student arr[4] = {s3,s4,s5,s6};

    for (int i = 0; i < 4; i++){
        printf("Student %d ID: %d\n",i+3,arr[i].id);
        printf("Student %d Name: %s\n",i+3,arr[i].name);
    }
    return 0;
}