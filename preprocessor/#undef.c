#include <stdio.h>  
  
#define PI 3.14  
  
int main() {  //main function  
    printf("The value of PI: %.2f\n", PI);  
  
    #undef PI  // Undefining the macro  
  
    #define PI 3.14159  // Redefining PI  
    printf("The new value of PI: %.5f\n", PI);  
  
    return 0;  
}   