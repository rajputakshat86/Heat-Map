/*
Q7: Write a C program to copy one string into another without using strcpy().
*/

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    scanf("%[^\n]", s1);

    int i;
    for(i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];
    s2[i] = '\0';

    printf("Copied string: %s", s2);
    return 0;
}
