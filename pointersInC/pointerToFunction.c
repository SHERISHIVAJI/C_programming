#include<stdio.h>
int addition();
int main() {
    int (*ptr)();
    ptr = &addition;
    int result = (*ptr)();
    printf("The sum is: %d", result);
    return 0;
}

int addition() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    return num1 + num2;
}