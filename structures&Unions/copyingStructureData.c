
#include <stdio.h>  
struct emp  
{  
    int emp_Id;  
    char depart_ment;  
};  
int main()   //main function  
{  
    struct emp e1 = {1, 'D'};  
    struct emp e2 = e1;  
    printf("Employee ID is: %d\n", e2.emp_Id);  
    printf("Department is: %c\n", e2.depart_ment);  
    return 0;  
}  