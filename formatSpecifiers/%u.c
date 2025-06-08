#include<stdio.h>
int main()  
{  
  int b=10;  
  int c= -10;  
  printf("Value of b is:%u", b);  
  printf("\nValue of c is:%u",c);  
  /*
  In the above program, we are displaying the value of b and c by using an
  unsigned format specifier, i.e., %u. The value of b is positive, so %u specifier 
  prints the exact value of b, but it does not print the value of c as c contains the negative value.
  */
    return 0;  
}