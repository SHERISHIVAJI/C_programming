#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    for(int i = 2; num > 1; i++) {
        while(num%i == 0) {
            printf("%d ", i);
            num/=i;
        }
    }
    return 0;
}