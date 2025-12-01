/*
Q8. Write a C program to check whether a number is prime or not.
*/
#include <stdio.h>

int main() {
    int num, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) flag = 0;

    for(int i = 2; i*i <= num; i++)
        if(num % i == 0)
            flag = 0;

    if(flag)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
