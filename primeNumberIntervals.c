#include<stdio.h>

int main() {
    int lower, upper, flag;
    printf("Enter lower and upper limits: ");
    scanf("%d%d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for(int i = lower + 1; i < upper; i++) {
        flag = 1;
        for(int j = 2; j <= i/2; j++) {
            if(i%j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            printf("%d ", i);
    }
    return 0;
}