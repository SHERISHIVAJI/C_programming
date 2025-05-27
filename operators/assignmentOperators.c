#include<stdio.h>
//Assignment Operators in C -> = += -= *= /= %=
int main() {
    int num1 = 5, num2;

    //num2 = num1
    printf("num2 = num1 is \t\t%d\n", num2 = num1);

    //num2 += num1 -> num2 = num2 + num1
    printf("num2 += num1 is \t%d\n", num2 += num1);

    //num2 -= num1 -> num2 = num2 - num1
    printf("num2 -= num1 is \t%d\n", num2 -= num1);

    //num2 *= num1 -> num2 = num2 * num1
    printf("num2 *= num1 is \t%d\n", num2 *= num1);

    //num2 /= num1 -> num2 = num2 / num1
    printf("num2 /= num1 is \t%d\n", num2 /= num1);

    //num2 %= num1 -> num2 = num2 % num1
    printf("num2 %%= num1 is \t%d\n", num2 %= num1);

    return 0;
}