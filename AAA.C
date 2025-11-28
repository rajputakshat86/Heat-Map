/*
Q5: Write a C program to find the largest element in an array.
*/

#include <stdio.h>

int main() {
    int arr[5] = {12, 45, 7, 34, 23};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element in the array: %d\n", max);
    return 0;
}
