#include<stdio.h>
#include<string.h>    
int main ()    
{    
    char str[100];    
    printf("Enter any string: ");
    gets(str);
    int i = 0;     
    int count = 0;    
    int length = strlen(str);
    while(i<length)    
    {    
        if(str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o')    
        {    
            count ++;    
        }    
        i++;    
    }    
    printf("The number of vowels %d",count);    
    return 0;
}  