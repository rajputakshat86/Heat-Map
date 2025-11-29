 /*
Q157: Write a C program to dynamically allocate an array using malloc() and find its sum.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    free(arr);
    return 0;
}
