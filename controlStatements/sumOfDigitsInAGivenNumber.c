#include<stdio.h>
/*
Sum of digitts in a given number
*/
int main() {
    int number, reminder, sumOfDigits = 0;
    printf("Enter the number: ");
    scanf("%d", &number);

    int temp = number;
    while(temp != 0) {
        reminder = temp % 10;
        sumOfDigits += reminder;
        temp /= 10;
    }
    printf("The sum of digits in the given number %d is %d", number, sumOfDigits);
    return 0;
}