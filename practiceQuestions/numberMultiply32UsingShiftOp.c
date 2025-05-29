#include<stdio.h>
/*
Write a C program that uses left shift operator to quickly calculate num * 32
*/
int main() {
    int num;

    //Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    int multiplied_by_32 = num << 5;
    printf("%d * 32 is %d", num, multiplied_by_32);

    return 0;
}