#include<stdio.h>
//Unary operators in C --> increment and decrement
int main() {
    int a = 10;
    float c = 10.5;

    //pre-increment --> ++variable
    printf("Before performing -> a = %d and c = %f\nAfter Performing ->\n", a, c);
    printf("++a is \t%d\n", ++a);
    printf("++c is \t%f\n", ++c);

    //pre-decrement --> --variable
    printf("Before performing -> a = %d and c = %f\nAfter Performing ->\n", a, c);
    printf("--a is \t%d\n", --a);
    printf("--c is \t%f\n", --c);

    //post-increment --> variable++
    printf("Before performing -> a = %d and c = %f\nAfter Performing ->\n", a, c);
    printf("a++ is \t%d\n", a++);
    printf("c++ is \t%f\n", c++);

    //post-decrement --> variable--
    printf("Before performing -> a = %d and c = %f\nAfter Performing ->\n", a, c);
    printf("a-- is \t%d\n", a--);
    printf("c-- is \t%f\n", c--);

    return 0;
}