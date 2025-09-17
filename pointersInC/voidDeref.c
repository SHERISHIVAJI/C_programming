#include<stdio.h>
int main() {
    int num = 8;
    void *ptr;
    ptr = &num;
    printf("Value pointed by the pointer is: %d\n", *ptr);
    return 0;
}