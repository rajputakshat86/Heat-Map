/*
QUESTION:
Write a C program to rotate an array to the left by one position.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int first = a[0];
    for (int i = 0; i < n-1; i++)
        a[i] = a[i+1];
    a[n-1] = first;

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}
