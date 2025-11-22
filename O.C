/*
Q4: Write a C program to input 10 integers and count how many are
    positive, negative, and zero.
*/

#include <stdio.h>

int main() {
    int n, i, p = 0, ne = 0, z = 0;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &n);

        if(n > 0) p++;
        else if(n < 0) ne++;
        else z++;
    }

    printf("Positive: %d\nNegative: %d\nZero: %d\n", p, ne, z);

    return 0;
}
