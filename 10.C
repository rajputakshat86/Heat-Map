/*
Q3. Write a C program to count vowels and consonants in a given string.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, v = 0, c = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }

    printf("Vowels = %d\nConsonants = %d", v, c);
    return 0;
}
