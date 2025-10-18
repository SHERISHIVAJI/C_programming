#include <stdio.h>  
union abc  
{  
    int a;  
    char b;  
};  
int main()  
{  
    union abc *ptr; // pointer variable declaration  
    union abc var;  
    var.a= 90;  
    ptr = &var;  
    printf("The value of a is : %d", ptr->a);  
    return 0;  
}