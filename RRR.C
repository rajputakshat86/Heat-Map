// Question: Write a C program to reverse a given integer.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int rev = 0;
    while(n != 0){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", rev);
    return 0;
}
