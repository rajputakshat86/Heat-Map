/*
Q9: Write a C program to store and display details of a student using structure.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;

    scanf("%s %d %f", s.name, &s.age, &s.marks);

    printf("Name: %s\nAge: %d\nMarks: %.2f", s.name, s.age, s.marks);
    return 0;
}
