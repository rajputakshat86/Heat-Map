/* 
Q1: Write a C program to input a number and count how many digits it contains.
*/

#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        n /= 10;
        count++;
    }

    printf("Total digits: %d", count);
    return 0;
}
