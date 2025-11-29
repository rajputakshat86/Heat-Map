/*
Q154: Write a C program to swap two numbers using call by reference.
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swap: %d %d", x, y);
    return 0;
}
