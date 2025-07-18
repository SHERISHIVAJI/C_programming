#include<stdio.h>
int main() {
    int num, sum = 0, itr = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    do {
        sum += itr;
        itr++;
    } while(itr <= num);
    printf("The sum of numbers from 1 to %d is %d", num, sum);
    return 0;
}