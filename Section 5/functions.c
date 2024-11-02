#include "stdio.h"

/// Declaration of function (Prototype)
void hello(char name[]);
int getSumOfTwoNumbers(int a, int b);




int x=15;
int y = 20;


int  getSum(){
    int z = x+y;
    return z;
}
int main(){
    hello("Veronica");
    int sum1 = getSumOfTwoNumbers(5, 10);
    printf("Sum of 5 and 10 is %d\n", sum1);

    hello("Girl");

    int sum2 = getSumOfTwoNumbers(x, y);
    printf("Sum of 15 and 30 is %d\n", sum2);

    x=0;
    y=0;
    int trial = getSum();
    printf("%d",trial);
    return 11;
}

/// Definition of function
int getSumOfTwoNumbers(int a, int b){
    int sum = a + b;
    return sum;
}
void hello(char name[]) {
    printf("Hello %s \n", name);
}