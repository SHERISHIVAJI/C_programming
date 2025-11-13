#include<stdio.h>

int main() {
    int number;
    printf("Enter number to check palindrome or not: ");
    scanf("%d", &number);

    int reminder, sum = 0;
    int temp = number;
    while(temp > 0) {
        reminder = temp % 10;
        sum = sum*10 + reminder;
        temp /= 10;
    }

    if(number == sum)
        printf("%d is palindrome number", number);
    else
        printf("%d is not a palindrome number", number);

    return 0;
}