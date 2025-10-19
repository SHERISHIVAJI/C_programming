#include <stdio.h>  
#include <math.h>  
  
int main() {  
double dividend = 10.0;  
double divisor = 3.0;  
double remainder = fmod(dividend, divisor);  
printf("The remainder of %.2f divided by %.2f is %.2f\n", dividend, divisor, remainder);  
return 0;  
}  