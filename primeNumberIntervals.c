#include<stdio.h>
int main()
{
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    int flag;
    for(int i = lower+1; i < upper; i++) {
        flag = 1;
        for(int j = 2; j<i/2; j++)
            if(i%j==0) {
                flag = 0;
                break;
            }
        if(flag == 1)
            printf("%d ", i);
    }
    return 0;
}