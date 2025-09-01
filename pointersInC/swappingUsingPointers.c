#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter any number for num1: ");
    scanf("%d", &num1);
    printf("Enter any number for num2: ");
    scanf("%d", &num2);
    int *ptr1 = &num1, *ptr2 = &num2;
    printf("Before Swapping: num1 = %d\tnum2 = %d\n", num1, num2);
    printf("Before Swapping: *ptr1 = %d\t*ptr2 = %d\n\n", *ptr1, *ptr2);
    *ptr1 += *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    printf("After Swapping: num1 = %d\tnum2 = %d\n", num1, num2);
    printf("After Swapping: *ptr1 = %d\t*ptr2 = %d\n", *ptr1, *ptr2);
    return 0;
}