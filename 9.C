/*
Q2. Write a C program to find the largest element in an array of n integers.
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    int max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max) max = a[i];

    printf("Largest element = %d", max);
    return 0;
}
