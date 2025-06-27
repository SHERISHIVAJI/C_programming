#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    int max;

    if(num1 > num2 && num1 > num3)
        max = num1;
    else if(num2 > num3 && num2 > num1)
        max = num2;
    else
        max = num3;

    printf("Maximum of %d, %d, and %d is %d", num1, num2, num3, max);
    return 0;
}