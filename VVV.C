// Question: Write a C program to count the number of vowels in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    scanf("%s", str);
    int count = 0;
    for(int i = 0; str[i]; i++){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') count++;
    }
    printf("%d\n", count);
    return 0;
}
