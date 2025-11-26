/* 
Q1: Write a C program to input an integer from the user 
and find the sum of its digits. 
Example: Input = 457 → Output = 4+5+7 = 16
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}
