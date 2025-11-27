/*
Q10: Write a C program to find GCD (HCF) of two numbers using loop.
*/

#include <stdio.h>

int main() {
    int a, b, gcd = 1;
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD: %d", gcd);
    return 0;
}
