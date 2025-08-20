#include <stdio.h>  
void swap(int, int); //prototype of the function   
int main()  
{  
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
    swap(a,b);  
    printf("After swapping values in main a = %d, b = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20  
}  
void swap (int x, int y)  
{  
    int temp;   
    temp = x;  
    x = y;  
    y = temp;  
    printf("After swapping values in function x = %d, y = %d\n", x, y); // Formal parameters, a = 20, b = 10   
}   