#include<stdio.h>
//Assignment Operators in C -> = += -= *= /= %= <<= >>= &= ^= |=
int main() {
    int num1 = 10, num2;

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

    //num1 >>= 3 -> num1 = num1 >> 3
    printf("num1 >>= 3 is \t\t%d\n", num1 >>= 3);

    //num1 <<= 3 -> num1 = num1 << 3
    printf("num1 <<= 3 is \t\t%d\n", num1 <<= 3);

    //num1 &= 3 -> num1 = num1 & 3
    printf("num1 &= 3 is \t\t%d\n", num1 &= 3);

    //num1 ^= 3 -> num1 = num1 ^ 3
    printf("num1 ^= 3 is \t\t%d\n", num1 ^= 3);

    //num1 |= 3 -> num1 = num1 | 3
    printf("num1 |= 3 is \t\t%d\n", num1 |= 3);
    
    return 0;
}