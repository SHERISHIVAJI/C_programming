#include<stdio.h>
int main() {
    void *pointer1;
    int *pointer2;
    float *pointer3;
    char *pointer4;
    printf("Size of void pointer is: %d\n", sizeof(pointer1));
    printf("Size of int pointer is: %d\n", sizeof(pointer2));
    printf("Size of float pointer is: %d\n", sizeof(pointer3));
    printf("Size of char pointer is: %d\n", sizeof(pointer4));
    return 0;
}