#include <stdio.h>  
struct Employee {  
    int id;  
    char name[30];  
    float salary;  
};  
int main() {    //main function  
    struct Employee emp[3] = {  
        {1, "John", 50000},  
        {2, "Michael", 55000},  
        {3, "Anthony", 60000}  
    };  
    printf("Employee Details:\n");  
    for (int i = 0; i < 3; i++) {  
        printf("ID: %d\n", emp[i].id);  
        printf("Name: %s\n", emp[i].name);  
        printf("Salary: %.2f\n\n", emp[i].salary);  
    }  
    return 0;  
}