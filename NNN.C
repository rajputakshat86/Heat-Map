// Question: Write a C program to find the largest of three numbers.

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("%d\n", max);
    return 0;
}
