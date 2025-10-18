#include <stdio.h>  

struct Student {  
    int roll;  
    char name[30];  
};  
int main() {   //main function  
    struct Student students[] = {  
        {1, "vineeth"},  
        {2, "suma"},  
        {3, "William"},  
        {4, "James"}  
    };  
    int totalSize = sizeof(students); 
    printf("Total size: %d\n",  totalSize);
    int singleSize = sizeof(struct Student);             
    printf("Sigle size: %d\n", singleSize);
    int count = totalSize / singleSize;      
    printf("Total students: %d\n", count);  
    return 0;  
}