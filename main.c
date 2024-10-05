#include <stdio.h> //Standard Input/Output Heade
#include <stdlib.h> //utility functions for dynamic memory management, program control, and other general-purpose tasks.
#include <stdbool.h>

int main(){
    /// OUTPUT IN C
    printf("Hello world!\n");
    printf("Hello world!\t");
    printf("Hello world!");
    printf("Hello world!\\");

    /// Comments
    // for short ones
    /*
    write as much as you can

    ------------
    */

    char x = 'a';
    char y = 127;
    char z = -127;

    int num = 11111111;

    float floatNum = -12.0214;
    double doubleNum = 123423.358376576052;

    // Printing char variables
    printf("x (char): %c\n", x);        // For character 'a'
    printf("y (char as int): %c\n", y); // Print 'y' as an integer
    printf("z (char as int): %c\n", 1000); // Print 'z' as an integer

    // Printing integer variable
    printf("num (int): %d\n", num);

    // Printing floating-point numbers
    printf("floatNum (float): %f\n", floatNum);         // For float
    printf("doubleNum (double): %lf\n", doubleNum);     // For double



    /// Implicit and explicit conversion between int and float
    float number = 9.5555;
    printf("number = %d\n",number);

    float divition = 5 / 2;
    printf("%f\n", divition);

    float floatDivition = (float) (5/2);
    printf("%f\n", floatDivition);


    /// Constants
    const int myNum = 15;
    //myNum = 13;

    /// Bitwise Operations
    unsigned int a = 1, b = 2;


    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);


    printf("a|b = %d\n", a | b);


    printf("a^b = %d\n", a ^ b);


    printf("~a = %d\n", a = ~a);


    printf("b<<1 = %d\n", b << 1);


    printf("b>>1 = %d\n", b >> 1);




    /// Ternary Operater
    // variable = (condition) ? expressionTrue : expressionFalse;
        int time = 20;
        if (time < 18) {
          printf("Good day.");
        } else {
          printf("Good evening.");
        }


        (time < 18) ? printf("Good day.") : printf("Good evening.");


    /// Booleans
        bool gender = true ; // boy


    /// How to take input from User
    int num2;

    printf("\nEnter an integer: ");
    scanf("%d", &num2); // Read an integer and store it in the variable 'num'

    printf("You entered: %d\n", num2); // Print the entered integer

    return 0;
}
