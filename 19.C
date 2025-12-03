/*
QUESTION:
Write a C program to check whether a given number is an Automorphic number.
(Automorphic number: its square ends with the number itself)
*/
#include <stdio.h>

int main() {
    int n, sq;
    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;

    int temp = n;
    int flag = 1;

    while (temp > 0) {
        if (temp % 10 != sq % 10) {
            flag = 0;
            break;
        }
        temp /= 10;
        sq /= 10;
    }

    if (flag)
        printf("Automorphic Number");
    else
        printf("Not Automorphic");

    return 0;
}
