#include<stdio.h>
int main() {
    int number, primeFlag = 1;
    printf("Enter the number: ");
    scanf("%d", &number);

    for(int d = 2; d <= number/2; d++)
        if(number % d == 0) {
            primeFlag = 0;
            break;
        }
    if(primeFlag)
        printf("%d is prime number", number);
    else
        printf("%d is not a prime number", number);
    return 0;
}