#include<stdio.h>
/*
Sum of digitts in a given number
*/
int main() {
    int number, reminder, productOfDigits = 1;
    printf("Enter the number: ");
    scanf("%d", &number);

    int temp = number;
    while(temp != 0) {
        reminder = temp % 10;
        productOfDigits *= reminder;
        temp /= 10;
    }
    printf("The sum of digits in the given number %d is %d", number, productOfDigits);
    return 0;
}