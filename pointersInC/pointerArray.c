#include<stdio.h>
int main() {
    static int a[] = {10, 20, 30, 40, 50};
    static int *ptr[] = {a, a+3, a+1, a+4, a+2};
    int **ptr_ptr = ptr;
    ptr_ptr++;
    printf("%d %d", ptr_ptr - ptr, **ptr_ptr);
    return 0;
}