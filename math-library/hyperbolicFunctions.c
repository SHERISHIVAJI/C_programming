#include <stdio.h>  
#include <math.h>  
  
int main() {  
double x = 2.0;  
double sinh_val = sinh(x);  
double cosh_val = cosh(x);  
  
printf("Hyperbolic sine of %.2f is %.2f\n", x, sinh_val);  
printf("Hyperbolic cosine of %.2f is %.2f\n", x, cosh_val);  
  
return 0;  
} 