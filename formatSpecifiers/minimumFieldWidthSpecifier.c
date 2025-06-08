#include<stdio.h>
/*
Suppose we want to display an output that occupies a minimum number of spaces on the screen. 
You can achieve this by displaying an integer number after the percent sign of the format specifier.
*/
int main()  
{  
 int x=900;  
  printf("%8d", x);  
  printf("\n%-8d",x);
  printf("\n%08d", x);  
  return 0;  
} 