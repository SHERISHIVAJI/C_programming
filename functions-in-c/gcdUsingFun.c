#include<stdio.h>

int find_gcd(int m, int n) {
    int res;
    int min = m < n ? m : n;
    for(int i = 1; i <= min; i++)
        if( m % i == 0 && n % i == 0)
            res = i;
    return res;
}

int main() {
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = find_gcd(num1, num2);
    printf("The GCD of %d, %d is -> %d",num1, num2, result);
    return 0;
}