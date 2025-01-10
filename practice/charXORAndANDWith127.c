#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello world";
    char str1[11];
    char str2[11];
    int i, len;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        str1[i]=str[i]&127;
        printf("%c",str1[i]);
    }
    printf("\n\n");
    for(i=0;i<len;i++)
    {
        str2[i]=str[i]^127;
        printf("%c",str2[i]);
    }
}