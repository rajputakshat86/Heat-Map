/*
Q7: Write a C program to store details of 3 employees using structure
    (name, id, salary) and print all details.
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    int salary;
};

int main() {
    struct Employee e[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter details of employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%d", &e[i].salary);

        printf("\n");
    }

    printf("Name\tID\tSalary\n");
    printf("---------------------------\n");

    for(i = 0; i < 3; i++) {
        printf("%s\t%d\t%d\n", e[i].name, e[i].id, e[i].salary);
    }

    return 0;
}
