#include<stdio.h>
int *fun() {
    static int num = 7;
    return &num;
}
int main() {
    int *ptr = fun();
    printf("%d", *ptr);
    return 0;
}