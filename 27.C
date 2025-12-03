/*
QUESTION:
Write a C program to convert a decimal number to binary without using arrays.
*/
#include <stdio.h>

int main() {
    int n, bin = 0, place = 1;
    printf("Enter decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        int r = n % 2;
        bin += r * place;
        place *= 10;
        n /= 2;
    }

    printf("Binary = %d", bin);
    return 0;
}
