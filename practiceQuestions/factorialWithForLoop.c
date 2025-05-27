#include<stdio.h>
//Factorial of a given number using for loop
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    long long int fact = 1;
    for(int i=1; i<=number; i++) {
        fact *= i;
    }

    printf("The factorial of %d  is %lld", number, fact);
    return 0;
}