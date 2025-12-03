/*
QUESTION:
Write a C program to count the number of digits in a given integer.
*/
#include <stdio.h>

int main() {
    int n, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0) {
        n /= 10;
        c++;
    }

    printf("Digit count = %d", c);
    return 0;
}
