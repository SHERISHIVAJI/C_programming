#include<stdio.h>

int reversingNumber(int n) {
    int rem, reverse = 0;
    while(n > 0) {
        rem = n % 10;
        reverse =reverse * 10 + rem;
        n /= 10;
    }
    return reverse;
}

int main() {
    int num;
    printf("Enter any numbers: ");
    scanf("%d", &num);

    int result = reversingNumber(num);
    printf("The reverse of the number -> %d is -> %d", num, result);
    return 0;
}