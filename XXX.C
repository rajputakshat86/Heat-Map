/*
Q1. Write a C program to check whether a number entered by the user is even or odd.
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
