#include<stdio.h>
//print all the odd numbers from 1 to N
int main() {
    int number;
    printf("Enter a number:  ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        if(i % 2 == 0) {
            continue;
        }
        printf("Odd number -> %d\n", i);
    }
    return 0;
}