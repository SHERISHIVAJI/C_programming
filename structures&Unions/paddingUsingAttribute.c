#include <stdio.h>  
  
struct base  
{  
    int a;  
    char b;  
    double c;  
}__attribute__((packed));  ;  
int main()  
{  
  struct base var; // variable declaration of type base  
  // Displaying the size of the structure base  
  printf("The size of the var is : %d", sizeof(var));  
  
    return 0;  
}