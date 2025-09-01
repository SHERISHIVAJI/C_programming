#include<stdio.h>
int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    printf("Value in number variable: %d\n", number);
    printf("Address of number variable: %u\n\n", &number);

    printf("int* ptr = &number:\n");
    int* ptr;
    ptr = &number;
    printf("Value in pointer variable: %u\n", ptr);
    printf("Address of pointer variable: %u\n", &ptr);
    printf("Value pointed by pointer variable: %u\n\n", *ptr);

    printf("int** ptr_to_pointer = &ptr:\n");
    int** ptr_to_pointer;
    ptr_to_pointer = &ptr;
    printf("Value in pointer-to-pointer variable: %u\n", ptr_to_pointer);
    printf("Address of pointer-to-pointer variable: %u\n", &ptr_to_pointer);
    printf("Value pointed by pointer-to-pointer variable(*ptr_to_pointer): %u\n", *ptr_to_pointer);
    printf("Value pointed by pointer-to-pointer variable(**ptr_to_pointer): %u\n", **ptr_to_pointer);
    return 0;
}