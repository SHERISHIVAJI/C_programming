#include <stdio.h>
int main() {
    int number, i, binary[10];
    printf("Enter decimal number: ");
    scanf("%d", &number);

    int temp = number;
    for(i = 0; number > 0; i++) {
        binary[i] = number % 2;
        number /= 2;
    }

    printf("\nBinary number of %d is:\t", temp);
    for(i = i - 1; i >= 0; i--) 
        printf("%d", binary[i]);
    return 0;
}