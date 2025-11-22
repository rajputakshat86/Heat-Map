/*
Q3: Write a C program to print the first 10 terms of the Fibonacci series.
*/

#include <stdio.h>

int main() {
    int a = 0, b = 1, c, i;

    printf("%d %d ", a, b);
    for(i = 3; i <= 10; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
