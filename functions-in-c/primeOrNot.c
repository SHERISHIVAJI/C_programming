#include<stdio.h>
int main()
{
    int num,flag=1,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num==1)
     {
         printf("%d is neither prime nor composite",num);
         return 0;
     }     
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
         {
             flag=0;
             break;
         }
    }
    if(flag==1)
     printf("%d is a prime number\n",num);
    else
     printf("%d is not a prime number\n",num);
     
    return 0; 
}