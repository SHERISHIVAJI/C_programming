#include<stdio.h>
int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int number;
    printf("Enter any numbers: ");
    scanf("%d", &number);
    int res = fact(number);
    printf("The factorial of %d is %d", number, res);
    return 0;
}