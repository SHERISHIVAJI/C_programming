#include<stdio.h>
int main() {
    float sum = 0.0, i = 2.0, j = 1.0;
    while(i/j > 0.0625) {
        sum += i/j;
        printf("i = %f j = %f i/j = %f sum = %f\n", i, j, i/j, sum);
        j += j;
    }
    return 0;
}
