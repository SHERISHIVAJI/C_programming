#include<stdio.h>    
int main ()    
{    
    char s[100];    
    printf("Enter any string: ");
    gets(s);    
    int i = 0;     
    int count = 0;    
    while(s[i] != '\0')    
    {    
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')    
        {    
            count ++;    
        }    
        i++;    
    }    
    printf("The number of vowels %d",count);
    return 0;    
} 