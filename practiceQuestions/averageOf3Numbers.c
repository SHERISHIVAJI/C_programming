#include<stdio.h>
//Average of 3 numbers
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    float average = (num1 + num2 + num3) / 3;
    printf("Average of %d, %d and %d is : %.3f", num1, num2, num3, average);
    return 0;
}