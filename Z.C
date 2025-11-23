/*
Q8: Write a C program to store book details (title, author, price)
    using structure and print all details.
*/

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int price;
};

int main() {
    struct Book b;

    printf("Enter Title: ");
    scanf("%s", b.title);

    printf("Enter Author: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%d", &b.price);

    printf("\nBook Details:\n");
    printf("Title: %s\nAuthor: %s\nPrice: %d\n", b.title, b.author, b.price);

    return 0;
}
