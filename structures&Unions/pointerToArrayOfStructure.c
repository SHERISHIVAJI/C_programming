#include <stdio.h>  
struct Student {  
    int id;  
    char name[20];  
};  
int main() {   //main function  
    struct Student students[3] = {  
        {1, "James"},  
        {2, "Harry"},  
        {3, "Thomas"}  
    };  
    struct Student *ptr = students;  
    for (int i = 0; i < 3; i++) {  
        printf("ID: %d, Name: %s\n", (ptr + i)->id, (ptr + i)->name);  
    }  
    return 0;  
}