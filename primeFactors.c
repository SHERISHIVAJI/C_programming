#include<stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);
    for(int i = 2; number > 1; i++) {
        while(number % i == 0) {
            printf("%d ", i);
            number /= i;
        }
    }

    return 0;
}