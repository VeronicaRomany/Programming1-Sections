//
// Created by veror on 11/7/2024.
//

#include <stdio.h>

//void hello(){
//    printf("Hello, World!\n");
//    hello();
//}
//int main(){
//    hello();
//    return 0;
//}

int getSumTillNIteratively(int n){
    int sum = 0;
    for (int i = 1 ; i <= n ; i++){
        sum = sum + i;
    }
    return sum;
}

int getSumTillNRecursively(int n){
    int sum = 1;
    if (n == 1){
        return sum;
    }
    sum = n + getSumTillNRecursively(n-1);
    return sum;
}

int getfactorialItertively(int n){
    int factorial = 1;
    for (int i = 1 ; i <= n ; i++){
        factorial = factorial * i;
    }
    return factorial;
}


int getfactorialRecusrively(int n){
    int factorial = 1;
    if(n == 1){
        return factorial;
    }
    factorial = n * getfactorialRecusrively(n-1);
    return factorial;
}

int fibonnaciIteratively(int n){
    int fib0 = 0;
    int fib1 = 1;
    int result = 0;

    if(n==0){
        return fib0;
    }

    if(n==1){
        return fib1;
    }
    for(int i=2 ; i<=n ; i++){
        result = fib0 + fib1;
        fib0 = fib1;
        fib1 = result;
    }
    return result;
}

int fibonnaciRecursively(int n){
    int result = 0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    result =fibonnaciRecursively(n-1) + fibonnaciRecursively(n-2);
    return result;
}
int main(){
    int n = 5;
    printf("Sum till %d is %d\n", n, getSumTillNIteratively(n));
    printf("Sum till %d is %d\n", n, getSumTillNRecursively(n));

    printf("Factorial of %d is %d\n", n, getfactorialItertively(n));
    printf("Factorial of %d is %d\n", n, getfactorialRecusrively(n));

    printf("Fibonnaci of %d is %d\n", n, fibonnaciIteratively(n));
    printf("Fibonnaci of %d is %d\n", n, fibonnaciRecursively(n));

    return 0;
}