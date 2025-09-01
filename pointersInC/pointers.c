#include<stdio.h>
int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    printf("int* ptr = &number:\n");
    int* ptr = &number;

    printf("Value in number variable: %d\n", number);
    printf("Address of number variable: %u\n\n", &number);

    printf("Value in pointer variable: %d\n", ptr);
    printf("Address of pointer variable: %u\n", &ptr);
    printf("Value pointed by pointer variable: %u\n", *ptr);

    return 0;
}