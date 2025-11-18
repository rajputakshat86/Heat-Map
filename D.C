/* 
Q4: Write a C program to print the largest of two numbers.
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest = %d\n", a);
    else
        printf("Largest = %d\n", b);

    return 0;
}
