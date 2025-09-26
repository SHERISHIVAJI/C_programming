#include<stdio.h>
int square(const void *num) {
    int val = *(const int*)num;
    return val*val;
}

int main() {
    int n = 9;
    int sq = square(&n);
    printf("Square of %d is %d", n, sq);
    return 0;
}