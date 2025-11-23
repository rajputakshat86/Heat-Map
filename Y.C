/*
Q7: Write a C program to input 5 integers, find their average, and print it.
*/

#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 5; i++)
        sum += arr[i];

    printf("Average = %d\n", sum / 5);

    return 0;
}
