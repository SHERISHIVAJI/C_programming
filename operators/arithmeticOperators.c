#include<stdio.h>
//Arithmetic Operators in C language -> + - * / %
int main() {
    int num1 = 10, num2 = 5;
    int result;

    //Addition
    result = num1 + num2;
    printf("num1 + num2 = %d\n", result);

    //Subtraction
    result = num1 - num2;
    printf("num1 - num2 = %d\n", result);

    //Multiplication
    result = num1 * num2;
    printf("num1 * num2 = %d\n", result);

    //Division
    result = num1 / num2;
    printf("num1 / num2 = %d\n", result);

    //Modulo-division
    result = num1 % num2;
    printf("num1 %% num2 = %d\n", result);

    return 0;
}