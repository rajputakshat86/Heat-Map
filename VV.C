/*
Q11: Write a C program to check whether a given number is a palindrome or not.
      (A number is palindrome if it reads the same forward and backward.)
*/

#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if(n == rev)
        printf("%d is a Palindrome", n);
    else
        printf("%d is Not a Palindrome", n);

    return 0;
}
