/*
Once a string is defined, it cannot be reassigned to another set of characters. However,
using pointers, we can assign the set of characters to the string. Consider the following 
example.
*/

#include<stdio.h>    
void main ()    
{    
    char *p = "hello sheri shivaji";    
    printf("Before assigning: %s\n",p);    
    p = "Hello, World!";    
    printf("After assigning: %s\n",p);    
}