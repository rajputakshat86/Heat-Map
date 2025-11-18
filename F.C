/*
Q: Write a C program to input an array of 10 integers and perform the following
   using separate functions:
   1. Find the largest element*/
#include <stdio.h>
#define SIZE 10
void inputArray(int arr[], int size)
{
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int findLargest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[SIZE];
    inputArray(arr, SIZE);
    int largest = findLargest(arr, SIZE);
    printf("The largest element is: %d\n", largest);
    return 0;
}                                                                           
