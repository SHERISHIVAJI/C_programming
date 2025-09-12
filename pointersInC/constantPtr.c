#include<stdio.h>
int main() {
    int num1 = 10;
    int num2 = 20;
    int *const ptr = &num1;
    printf("Value: %d\n", *ptr);
    printf("Address: %u\n\n", ptr);

    printf("Try to change address(it gives error):\n");
    // ptr = &num2;
    printf("Value: %d\n", *ptr);
    printf("Address: %u\n", ptr);
    return 0;
}