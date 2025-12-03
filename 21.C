/*
QUESTION:
Write a C program to print all prime numbers between two given numbers.
*/
#include <stdio.h>

int main() {
    int l, r;
    printf("Enter range (L R): ");
    scanf("%d %d", &l, &r);

    for (int i = l; i <= r; i++) {
        int flag = 1;
        if (i <= 1) continue;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag) printf("%d ", i);
    }

    return 0;
}
