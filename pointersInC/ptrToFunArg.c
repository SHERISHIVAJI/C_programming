#include<stdio.h>
int add(int, int);
int main() {
    int num1, num2;
    int (*ptr)(int, int);
    int result;
    printf("Enter the values of num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    ptr = add;
    result = (*ptr)(num1, num2);
    printf("Value after addition: %d", result);
    return 0;
}

int add(int a, int b) {
    int c= a + b;
    return c;
}