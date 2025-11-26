/* 
Q5: Write a C program to print the first n terms 
of the Fibonacci series. Example: 0 1 1 2 3 5 8 ...
*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for(int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}
