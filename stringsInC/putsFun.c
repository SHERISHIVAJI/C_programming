/*
The puts() function is very much similar to printf() function. The puts() function is used 
to print the string on the console which is previously read by using gets() or scanf() 
function. The puts() function returns an integer value representing the number of 
characters being printed on the console. Since, it prints an additional newline character 
with the string, which moves the cursor to the new line on the console, the integer value 
returned by puts() will always be equal to the number of characters present in the string 
plus 1.
*/

#include<stdio.h>  
#include <string.h>    
int main(){    
char name[50];    
printf("Enter your name: ");    
gets(name);    
printf("Your name is: ");    
puts(name);
return 0;    
} 