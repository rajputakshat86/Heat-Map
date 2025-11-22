/*
Q5: Write a C program to search an element in an array of 5 integers.
*/

#include <stdio.h>

int main() {
    int arr[5], key, i, found = 0;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");

    return 0;
}
