#include<stdio.h>
//Conditional Operator in C --> ? :
int main() {
    char february;
    int days;

    printf("If this year is leap year, enter 1. If not enter any integer other than 1: ");
    scanf("%c", &february);

    //If test condition (february == '1') is true, days equal to 29.
    //If test  condition (february == '1') is false, days equal to 28.
    days = (february == '1') ? 29 : 28;

    printf("Number of days in this February = %d", days);
    return 0;
}