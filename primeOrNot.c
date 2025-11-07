#include<stdio.h>
#include<stdlib.h>
int main() {
    int number;
    int flag = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number == 1) {
        printf("%d is neither prime nor composite number", number);
        exit(0);
    }
    for(int i = 2; i <= number/2; i++) {
        if(number % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1) 
        printf("%d is a prime number", number);
    else
        printf("%d is not a prime number", number);

    return 0;
}