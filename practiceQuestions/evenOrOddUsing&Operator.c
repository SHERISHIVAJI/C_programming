#include <stdio.h>
/*
Write a C program that uses bitwise operators to determine whether a number is even or odd
*/
int main() {
    int num;

    //Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    //Use bitwise AND to check if the number is even or odd
    if (num & 1) {
        printf("%d is ODD number", num);
    } else {
        printf("%d is EVEN number", num);
    }
    return 0;
}