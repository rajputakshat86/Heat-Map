/*
Q6. Write a C program to find the sum of all even numbers from 1 to n.
*/

#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
        sum += i;

    printf("Sum of even numbers = %d", sum);
    return 0;
}
