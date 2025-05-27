#include<stdio.h>
//A C program to print the table of a given number
int main() {
    int number;
    printf("Enter a number:  ");
    scanf("%d", &number);

    for (int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}