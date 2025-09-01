#include<stdio.h>    
int main ()    
{    
    char *p = "hello shivaji";    
    printf("String p: %s\n",p);    
    char *q;    
    printf("copying the content of p into q...\n");    
    q = p;    
    printf("String q: %s\n",q);    
} 