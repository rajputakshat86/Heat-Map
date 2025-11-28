/*
Q9: Write a C program to print Fibonacci series up to n terms using recursion.
*/

#include <stdio.h>

int fib(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for(int i = 0; i < terms; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
