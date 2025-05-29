#include<stdio.h>
/*
Write a C program that uses the left and right shift operators to multiply and divide a given number by 4
*/
int main() {
    int num;

    //Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    //Multiply the number by 4 using the left shift operator
    int multiplied = num << 2;

    //Divide the number by 4 using the right shift operator
    int divided = num >> 2;

    //Display the results
    printf("%d multiplied by 4 is %d\n", num, multiplied);
    printf("%d divided by 4 is %d", num, divided);

    return 0;
}