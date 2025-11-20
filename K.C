/*
Q5: Write a C program to store a student's name, roll, and marks using structure
    and print the details.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    printf("Student Details: %s | %d | %d\n", s.name, s.roll, s.marks);

    return 0;
}
