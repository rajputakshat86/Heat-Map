/*
Q3: Write a C program to reverse an array of 5 integers and print the result.
*/

#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Reversed Array: ");
    for(i = 4; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
