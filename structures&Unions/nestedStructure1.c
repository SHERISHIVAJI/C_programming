#include <stdio.h>  
struct Dept   
{  
    int d_id;  
    char d_name[40];  
};  
struct Emp   
{  
    int emp_id;  
    char emp_name[60];  
    struct Dept d;  
};  
int main()   //main function  
{  
    struct Emp e = {1, "Shivaji", {13, "Computer Science Engineering"}};  
    printf("Employee ID is: %d\n", e.emp_id);  
    printf("Employee Name is: %s\n", e.emp_name);  
    printf("Department ID is: %d\n", e.d.d_id);  
    printf("Department Name is: %s\n", e.d.d_name);  
    return 0;  
}