#include <stdio.h>  
struct Student {  
    char name[20];  
    int age;  
};  
int main() {   //main function  
    struct Student s1 = {"Sheri", 21};  
    struct Student *ptr = &s1;  
    printf("Name: %s\n", ptr->name);  
    printf("Age: %d\n", ptr->age);  
    return 0;  
} 