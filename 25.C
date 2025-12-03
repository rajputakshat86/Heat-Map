/*
QUESTION:
Write a C program to check whether a given string is a palindrome.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int l = 0, r = strlen(str) - 1, flag = 1;

    while (l < r) {
        if (str[l] != str[r]) {
            flag = 0;
            break;
        }
        l++;
        r--;
    }

    if (flag) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}
