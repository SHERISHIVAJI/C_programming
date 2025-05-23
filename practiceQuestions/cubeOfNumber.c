#include<stdio.h>
//Cube of a given number
int main() {
    int number;
    printf("Enter your number:  ");
    scanf("%d", &number);
    int cubeOfNumber = number * number * number;
    printf("The cube of %d is %d", number, cubeOfNumber);
    return 0;
}