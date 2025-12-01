/*
Q2. Write a C program to find the largest of two numbers entered by the user.
*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("Largest = %d", a);
    else
        printf("Largest = %d", b);

    return 0;
}
