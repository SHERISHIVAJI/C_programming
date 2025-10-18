#include<stdio.h>
typedef int* iptr;
int main() {
    int a = 29;
    iptr p = &a;
    printf("Value: %d\n", *p);
    printf("Address of value: %u", p);
    return 0;
}