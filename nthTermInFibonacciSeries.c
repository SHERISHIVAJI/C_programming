/*
Nth term in the fibonacci series
Look at the series below:1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,.....This series is formed as below: 1.term(1)=1 2.term(2)=2 3.term(N)=term(N-1)+term(N-2)for N>2 Write a program to find the Nth term in this series The value N is a positive integer that should be read from STDIN. The Nth term that is calculated by the program should be written to STDOUT, other than the value of nth term no other characters /strings and messages should be written to STDOUT.
Sample Input:
15
Sample Output:
987
*/

#include<stdio.h>

int main() {
    long long int t1 = 1, t2 = 2, t3, n;
    scanf("%lld", &n);

    if(n == 1)
        printf("%lld", t1);
    else if(n == 2)
        printf("%lld", t2);
    else {
        for(long long int itr = 3; itr <= n; itr++) {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
        }
        printf("%lld", t2);
    }
    return 0;
}