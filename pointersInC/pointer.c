#include<stdio.h>    
int main(){    //using main function  
int number=50;      
int *p;        
p=&number;  //stores the address of number variable      
printf("Address of p variable is %x \n", p);   
printf("Value of p variable is %d \n", *p);     
return 0;    
}   