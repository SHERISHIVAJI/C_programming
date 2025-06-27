#include<stdio.h>
int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    number%2 == 0 ? printf("%d is even number", number) : printf("%d is odd number", number);
    return 0;
}