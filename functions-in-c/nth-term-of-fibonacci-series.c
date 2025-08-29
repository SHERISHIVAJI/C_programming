//to illustrate how to find nth term of Fibonacci series using recursion in C.

#include <stdio.h>

int fibonacci(int);

int main() {
    int number;
    printf("Enter N value: ");
    scanf("%d", &number);

    int nFibonacciNumber = fibonacci(number);
    printf("The %dth fibonacci series number is %d", number, nFibonacciNumber);
    return 0;
}

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}