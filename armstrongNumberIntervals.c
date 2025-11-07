#include<stdio.h>
int main() {
    int lower, upper, temp, result, rem;
    printf("Enter lower and upper limits: ");
    scanf("%d%d", &lower, &upper);
    
    printf("Armstrong numbers between %d and %d are:\n", lower, upper);
    for(int i = lower + 1; i < upper; i++) {
        temp = i;
        result = 0;
        while(temp != 0) {
            rem = temp % 10;
            result += rem * rem * rem;
            temp /= 10;
        }
        if(i == result)
            printf("%d ", i);
    }
    return 0;
}