#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 50;
    printf("Value: %d\n", *ptr);
    free(ptr);
    printf("Memory has been freed");
    ptr = NULL;
    return 0;
}