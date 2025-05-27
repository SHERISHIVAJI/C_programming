#include<stdio.h>
//Keep taking numbers as input from user until user enters ann odd number.
int main() {
    int number;
    do {
        printf("\nEnter a number: ");
        scanf("%d", &number);
        if (number % 2 != 0) {
            printf("\nYou enter an odd number -> %d", number);
            break;
        }
        printf("You entered -> %d", number);
    } while(1);
    printf("\nThankyou!");
    return 0;
}