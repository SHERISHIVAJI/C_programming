#include<stdio.h>
int main() {
    FILE *fptr;
    int id;
    char name[50];
    float salary;

    fptr = fopen("employee.txt", "w+");
    if(fptr == NULL) {
        printf("File does not exists\n");
        return 0;
    }

    printf("Enter the id: ");  
    scanf("%d", &id); 
    fprintf(fptr, "ID = %d\n", id);

    printf("Enter the name: ");  
    scanf("%s", name);  
    fprintf(fptr, "Name= %s\n", name); 

    printf("Enter the salary: ");  
    scanf("%f", &salary);  
    fprintf(fptr, "Salary= %.2f\n", salary);  

    fclose(fptr);
    return 0;
}