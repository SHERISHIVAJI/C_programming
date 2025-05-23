#include<stdio.h>
//Number devided by 2
int main() {
    //even -> 1
    //odd -> 0
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d", number % 2 == 0);
    return 0;
}