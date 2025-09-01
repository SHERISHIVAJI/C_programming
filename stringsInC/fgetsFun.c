/*
The gets() function is risky to use since it doesn't perform any array bound checking and 
keep reading the characters until the new line (enter) is encountered. It suffers from 
buffer overflow, which can be avoided by using fgets(). The fgets() makes sure that not 
more than the maximum limit of characters are read.
*/

#include<stdio.h>  
void main()   
{   
   char str[20];   
   printf("Enter the string?: ");  
   fgets(str, 20, stdin);   
   printf("%s", str);   
} 