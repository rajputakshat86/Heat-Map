/*
Q4. Write a C program to print Fibonacci series up to n terms.
*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);
    for (i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}
