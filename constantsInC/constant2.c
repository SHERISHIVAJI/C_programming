#include<stdio.h>    
//If you try to change the the value of PI, it will render compile time error.
int main(){    
const float PI=3.14;     
PI=4.5;    
printf("The value of PI is: %f",PI);    
    return 0;  
}  