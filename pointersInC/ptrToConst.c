#include<stdio.h>
int main() {
    const int num = 6;
    int *ptr = &num;
    *ptr = 21;
    printf("Value of 'num' is: %d", num);
    return 0;
}