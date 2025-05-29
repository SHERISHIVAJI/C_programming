#include<stdio.h>
/*
Write a C program that doubles the num using a compound assignment operator
*/
int main() {
    int num;

    //Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    int double_of_num = num;
    printf("The double of %d is %d", num, double_of_num *= 2);

    return 0;
}