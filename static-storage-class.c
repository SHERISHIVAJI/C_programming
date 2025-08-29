#include<stdio.h>

void sum() {
    static int num1 = 10;
    int num2 = 56;
    printf("%d %d\n", num1, num2);
    num1++;
    num2++;
}

int main() {
    for(int i= 0; i<=5; i++) {
        sum();
    }
}