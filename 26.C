/*
QUESTION:
Write a C program to find the sum of all even numbers between 1 and N.
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
        sum += i;

    printf("Sum of even numbers = %d", sum);
    return 0;
}
