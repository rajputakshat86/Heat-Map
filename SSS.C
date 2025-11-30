// Question: Write a C program to check if a number is prime.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    int flag = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}
