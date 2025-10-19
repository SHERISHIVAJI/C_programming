#include <stdio.h>  
#include <math.h>  
  
int main() {  
double x = 1.0;  
double y = 1.0;  
double result = atan2(y, x);  
printf("The arctangent of y=%.2f and x=%.2f is %.2f radians\n", y, x, result);  
return 0;  
}  