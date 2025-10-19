#include <stdio.h>  
#include <math.h>  
  
int main() {  
double x = 100.0;  
double natural_log = log(x);  
double common_log = log10(x);  
  
printf("Natural logarithm of %.2f is %.2f\n", x, natural_log);  
printf("Common logarithm of %.2f is %.2f\n", x, common_log);  
return 0;  
}  