#include<stdio.h>
//Relational Operators in C -> == != < <= >= >
int main() {
    int num1 = 5, num2 = 5, num3 = 10;

    //Equality -> ==
    printf("%d == %d is \t%d\n", num1, num2, num1==num2);
    printf("%d == %d is \t%d\n", num1, num3, num1==num3);

    //Greater than -> >
    printf("%d > %d is \t%d\n", num1, num2, num1>num2);
    printf("%d > %d is \t%d\n", num1, num3, num1>num3);

    //Less Than -> <
    printf("%d < %d is \t%d\n", num1, num2, num1<num2);
    printf("%d < %d is \t%d\n", num1, num3, num1<num3);

    //Greater Than or Equal -> >=
    printf("%d >= %d is \t%d\n", num1, num2, num1>=num2);
    printf("%d >= %d is \t%d\n", num1, num3, num1>=num3);

    //Less than or equal -> <=
    printf("%d <= %d is \t%d\n", num1, num2, num1<=num2);
    printf("%d <= %d is \t%d\n", num1, num3, num1<=num3);

    //Inequality -> !=
    printf("%d != %d is \t%d\n", num1, num2, num1!=num2);
    printf("%d != %d is \t%d\n", num1, num3, num1!=num3);

    return 0;
}