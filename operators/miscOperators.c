#include<stdio.h>
//Misc or Special operators in C --> sizeof() ,
int main() {
    int a = 5, b = 3;
    int result = (a += 2, b *= 2, a + b);
    printf("Comma operator ->\n");
    printf("Value of (a += 2, b *= 2, a + b) is %d\n", result);
    
    printf("sizeof() operator ->\n");
    printf("Size of int data type -> %d bytes\n", sizeof(int));
    printf("Size of float data type -> %d bytes\n", sizeof(float));
    printf("Size of double data type -> %d bytes\n", sizeof(double));
    printf("Size of int array of 10 lements -> %d bytes\n", sizeof(int[10]));
    printf("Size of char data type -> %d bytes\n", sizeof(char));
    
    return 0;
}