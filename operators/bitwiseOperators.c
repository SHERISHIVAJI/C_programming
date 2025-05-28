#include<stdio.h>
//Bitwise Operators in C --> & | ^ ! << >>
int main() {
    unsigned int num1 = 60; // 60 = 0011 1100
    unsigned int num2 = 13; // 13 = 0000 1101
    int c = 0;

    //Bitwise AND -> &
    printf("num1 & num2 is \t%d\n", num1 & num2); // 12 = 0000 1100

    //Bitwise OR -> |
    printf("num1 | num2 is \t%d\n", num1 | num2); // 61 = 0011 1100

    //Bitwise XOR -> ^
    printf("num1 ^ num2 is \t%d\n", num1 ^ num2); // 49 = 0011 0001

    //Bitwise Once Complement -> ~
    printf("~num1 is \t%d\n", ~num1); // -61 = 1100 0011

    //Bitwise Left Shift -> <<
    printf("num1 << 2 is \t%d\n", num1 << 2); // 15 = 0000 1111

    //Bitwise Right Shift -> >>
    printf("num1 >> 2 is \t%d\n", num1 >> 2); // 240 = 1111 0000

    return 0;
}