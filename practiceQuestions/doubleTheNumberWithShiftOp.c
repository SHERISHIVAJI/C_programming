#include<stdio.h>
//Write a C program that doubles a number using left shift operator
int main() {
    int num;

    //Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    int double_of_num = num << 1;
    printf("The double of %d is %d", num, double_of_num);

    return 0;
}