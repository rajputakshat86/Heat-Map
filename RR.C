/*
Q8: Write a C program to input 5 elements in an array and print their sum.
*/

#include <stdio.h>

int main() {
    int arr[5], sum = 0;

    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < 5; i++)
        sum += arr[i];

    printf("Sum = %d", sum);
    return 0;
}
