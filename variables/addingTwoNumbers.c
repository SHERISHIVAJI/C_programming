#include<stdio.h>
int main()
{
    int num1,num2;
    
    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);

    int sum = num1 + num2;
    printf("%d + %d = %d",num1,num2,sum);

    return 0;
}