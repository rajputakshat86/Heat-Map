/*
Q1: Write a C program to input an integer and check whether it is even or odd.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
