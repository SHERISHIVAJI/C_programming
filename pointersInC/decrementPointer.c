#include<stdio.h>
int main() {
    int num = 50;
    int *ptr = &num;
    printf("Address in pointer variable before decrement: %x (%u)\n", ptr, ptr);
    ptr = ptr - 1;
    printf("Address in pointer variable after decrement: %x (%u)\n", ptr, ptr);
    return 0;
}