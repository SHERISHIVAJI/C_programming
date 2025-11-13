/*
For Example, consider the given series: 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, …
This series is a mixture of 2 series – all the odd terms in this series form a Fibonacci series and all the even terms are the prime numbers in ascending order. Now write a program to find the Nth term in this series.
Input: 14			Output: 17
*/

#include<stdio.h>

int isPrime(int num) {
    if(num < 2)
        return 0;
    for(int i = 2; i*i <=  num; i++) {
        if(num % i == 0) 
            return 0;
    }
    return 1;
}

int nthPrime(int n) {
    int count = 0, num = 1;
    while (count < n)
    {
        num++;
        if(isPrime(num))
            count++;
    }
    return num;    
}

int nthFibonacci(int n) {
    if(n == 1 || n == 2) return 1;
    int t1 = 1, t2 = 1, nextTerm;
    for(int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return t2;
}

int main() {
    int n;
    scanf("%d", &n);

    int result;
    if(n % 2 == 1)
        result = nthFibonacci((n/2)+1);
    else
        result = nthPrime(n/2);
    printf("%d", result);

    return 0;
}