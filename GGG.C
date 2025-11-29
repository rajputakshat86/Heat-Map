/*
Q152: Write a C program to count vowels and consonants in a string.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int v = 0, c = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels = %d, Consonants = %d", v, c);
    return 0;
}
