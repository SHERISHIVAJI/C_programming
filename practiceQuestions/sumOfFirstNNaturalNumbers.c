#include<stdio.h>
//Sum of first N-Natural numbers
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = 0, i=0;
    while(i <= number) {
        sum+=i;
        i++;
    }

    printf("The sun of first %d numbers is: %d", number, sum);
    return 0;
}