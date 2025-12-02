/*
Q8. Write a C program to check whether a number is prime or not.
*/

#include <stdio.h>

int main() {
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag) printf("Prime number");
    else printf("Not prime");

    return 0;
}
