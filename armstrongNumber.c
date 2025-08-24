#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int temp = num;
    int rem, sum =0;
    while(temp != 0) {
        rem = temp % 10;
        sum += rem*rem*rem;
        temp/=10;
    }
    if(num == sum)
        printf("YES");
    else
        printf("NO");
    return 0;
}