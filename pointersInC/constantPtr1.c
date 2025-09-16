#include<stdio.h>
int main() {
    int value1 = 76;
    const int *ptr = &value1;
    printf("Value1: %d\n", *ptr);
    int value2 = 78;
    ptr = &value2;
    printf("Value2: %d\n", *ptr);
    return 0;
}