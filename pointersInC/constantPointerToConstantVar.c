#include<stdio.h>

void showValue(const int* const ptr) {
    printf("Value inside the showValue(): %d\n", *ptr);
}

int main() {
    int num1 = 20;
    int num2 = 21;
    const int* const pointer = &num1;
    printf("Initial value pointed to by pointer variable is: %d\n", *pointer);
    showValue(pointer);
    num1 = 87;
    printf("Modified value of num1: %d\n", num1);
    printf("Value pointed to by pointer variable after modifying num1: %d\n", *pointer);
    return 0;
}