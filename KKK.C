/*
Q156: Write a C program to store 'n' numbers in a file and read them back.
*/

#include <stdio.h>

int main() {
    FILE *fp;
    int n, num;

    fp = fopen("numbers.txt", "w");
    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d ", num);
    }
    fclose(fp);

    fp = fopen("numbers.txt", "r");
    printf("Numbers in file: ");
    while (fscanf(fp, "%d", &num) != EOF)
        printf("%d ", num);

    fclose(fp);
    return 0;
}
