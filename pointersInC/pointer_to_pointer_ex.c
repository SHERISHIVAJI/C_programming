#include<stdio.h>
int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    int* ptr = &number;
    int** ptr_to_pointer = &ptr;

    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("number += 10:\n");
    number += 10;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("number = *ptr + 20:\n");
    number = *ptr + 20;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("number = **ptr_to_pointer + 30:\n");
    number = **ptr_to_pointer + 30;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("*ptr += 10:\n");
    *ptr += 10;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("*ptr = number + 20:\n");
    *ptr = number + 20;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("*ptr = **ptr_to_pointer + 30:\n");
    *ptr = **ptr_to_pointer + 30;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("**ptr_to_pointer += 10:\n");
    **ptr_to_pointer += 10;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("**ptr_to_pointer = *ptr + 20:\n");
    **ptr_to_pointer = *ptr + 20;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);

    printf("**ptr_to_pointer = number + 30:\n");
    **ptr_to_pointer = number + 30;
    printf("number = %d\n", number);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_pointer = %d\n\n", **ptr_to_pointer);
    return 0;
}