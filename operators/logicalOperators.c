#include<stdio.h>
//Logical Oprerators in C -> && || !
int main() {
    int num1 = 5, num2 = 5, num3 = 10;

    //Logical AND
    printf("<num1 == num2> && <num3 > num2> is \t%d\n", (num1 == num2) && (num3 > num2));
    printf("<num1 == num2> && <num3 < num2> is \t%d\n", (num1 == num2) && (num3 < num2));

    //Logical OR
    printf("<num1 == num2> || <num3 < num2> is \t%d\n", (num1 == num2) || (num3 < num2));
    printf("<num1 != num2> || <num3 < num2> is \t%d\n", (num1 != num2) || (num3 < num2));

    //Logical NOT
    printf("!(<num1 == num2> && <num3 > num2>) is \t%d\n", !((num1 == num2) && (num3 > num2)));
    printf("!(<num1 == num2> && <num3 < num2>) is \t%d\n", !((num1 == num2) && (num3 < num2)));

    return 0;
}