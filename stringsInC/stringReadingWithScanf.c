#include<stdio.h>    
int main ()    
{    
    char str[20], str1[20]; 
    
    printf("Enter any string reading using %%s:\n\t");
    scanf("%s", str);
    printf("String read by scanf function %%s:\n\t%s\n\n", str);
    fflush(stdin);

    printf("Enter the string resding using %%[^\\n]s:\n\t");    
    scanf("%[^\n]s",str1);    
    printf("String read by scanf function %%[^\\n]s:\n\t%s", str1);
    return 0;
}  