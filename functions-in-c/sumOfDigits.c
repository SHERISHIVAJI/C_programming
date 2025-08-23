#include<stdio.h>

int sumOfDigits(int n) {
    int rem, sum = 0;
    while(n > 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter any numbers: ");
    scanf("%d", &num);

    int result = sumOfDigits(num);
    printf("The sum of digits in the number -> %d is -> %d", num, result);
    return 0;
}