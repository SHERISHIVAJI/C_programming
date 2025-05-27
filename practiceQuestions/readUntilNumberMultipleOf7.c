#include<stdio.h>
//Keep taking numbers as input from user until user enters ann odd number.
int main() {
    int number;
    do {
        printf("\nEnter a number: ");
        scanf("%d", &number);
        if (number % 7 == 0) { //multiple of 7
            printf("\nYou enter a number -> %d which is multiple of 7", number);
            break;
        }
        printf("You entered -> %d", number);
    } while(1);
    printf("\nThankyou!");
    return 0;
}