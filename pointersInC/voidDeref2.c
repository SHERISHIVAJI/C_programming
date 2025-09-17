#include<stdio.h>
int main() {
    float arr[] = {65.6, 65.76, 8.12, 86.12};
    void *ptr;
    ptr = arr;
    for(int i =0; i<4; i++){
        printf("%f\t", *ptr);
        ptr = ptr + 1;
    }
    return 0;
}