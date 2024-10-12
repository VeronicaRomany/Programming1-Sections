//
// Created by veror on 10/11/2024.
//
#include <stdio.h>
int main(){
    double degree;
    printf("Enter your degree\n");
    scanf("%lf", &degree);

    if(degree >=50){
        printf("PASS\n");
    }

    if(degree >=50){
        printf("PASS\n");
    }else{
        printf("FAIL\n");
    }

    if(degree >=70 && degree <=100){
        printf("Very Good\n");
    }else if(degree >=40 && degree <70){
        printf("Good\n");
    }else{
        printf("try another time\n");
    }

    int month;
    printf("Enter month number\n");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January");

        case 2:
            printf("February");

        case 3:
            printf("March");

        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid month number");
    }

    return 0;
}