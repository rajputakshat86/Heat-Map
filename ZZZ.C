/*
Q3. Write a C program to calculate the sum of first N natural numbers.
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d", sum);

    return 0;
}
