/*
Q1: Write a C program to calculate Simple Interest.
    Formula: SI = (P * R * T) / 100
*/

#include <stdio.h>

int main() {
    float P, R, T, SI;

    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
