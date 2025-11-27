/*
Q5: Write a C program to check whether a number is prime or not.
*/

#include <stdio.h>

int main() {
    int n, i, flag = 0;
    scanf("%d", &n);

    for(i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(n <= 1)
        printf("Not Prime");
    else if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
