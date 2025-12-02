/*
Q7. Write a C program to reverse a given integer number.
*/

#include <stdio.h>

int main() {
    int n, rev = 0, digit;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    printf("Reversed number = %d", rev);
    return 0;
}
