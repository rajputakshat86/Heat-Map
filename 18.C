/*
Q11. Write a C program to find the sum of elements in an array using a function.
*/

#include <stdio.h>

int sumArray(int a[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Sum = %d", sumArray(a, n));
    return 0;
}
