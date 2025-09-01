/*
If str1 is lexicographically superior to str2, it returns an integer number larger than 0.
If str1 is lexicographically smaller to str2, it returns an integer value that is less 
than 0.
It returns 0 if str1 and str2 are equal.
*/

#include<stdio.h>  
#include <string.h>    
int main(){    
  char str1[20],str2[20];    
  printf("Enter 1st string: ");    
  gets(str1);
  printf("Enter 2nd string: ");    
  gets(str2);    
  if(strcmp(str1,str2)==0)    
      printf("Strings are equal");    
  else    
      printf("Strings are not equal");    
 return 0;    
}