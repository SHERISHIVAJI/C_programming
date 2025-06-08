#include <stdio.h>  
int main()  
{  
    int sum=0;  // variable initialization  
    char name[20];  // variable initialization  
    int i=0;  // variable initialization  
    printf("Enter a name: ");  
    scanf("%s", name);  
    while(name[i]!='\0')  // while loop  
    {  
        printf("\nThe ascii value of the character %c is %d", name[i],name[i]);  
        sum=sum+name[i];  
        i++;  
    }  
    printf("\nSum of the ascii value of a string is : %d", sum);  
    return 0;  
}  