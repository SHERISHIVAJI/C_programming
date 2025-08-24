#include<stdio.h>
int main()
{
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    int temp;
    int rem, sum;
    for(int i = lower; i<upper; i++) {
        temp = i,sum =0;
        while(temp != 0) {
            rem = temp % 10;
            sum += rem*rem*rem;
            temp/=10;
        }
        if(i == sum)
            printf("%d ", i);
    }
    return 0;
}