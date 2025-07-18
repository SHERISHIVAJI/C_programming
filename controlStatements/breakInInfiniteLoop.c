#include<stdio.h>
int main() {
    int number;
    while(1) {
        printf("Enter a number(0 for exit): ");
        scanf("%d", &number);
        if (number == 0) 
            break;
        printf("\nYou entered: %d\n", number);
    }
    return 0;
}