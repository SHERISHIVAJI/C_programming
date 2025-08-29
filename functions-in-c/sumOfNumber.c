#include<stdio.h>

int sumOfNumber(int num) {
    if(num == 1)
        return 1;
    else   
        return num + sumOfNumber(num - 1);
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int result = sumOfNumber(num);
    printf("The sum from 1 to %d is: %d", num, result);
    return 0;
}