#include <stdio.h>  
#define DEBUG  
int main()  //main function  
{  
  
#ifdef DEBUG  
printf("Debug mode is on.\n");  
#endif  
return 0;  
}   