#include<stdio.h>
#include<string.h>
struct Student {
    int rollno;
    char name[50];
    float percentage;
};

int main() {
    int size;
    printf("Enyter number of students: ");
    scanf("%d", &size);

    struct Student std[size];
    printf("Enter %d students details\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d %s %f", &std[i].rollno, &std[i].name, &std[i].percentage);
    }

    char stdName[50];
    int flag = 0;
    printf("Enter student name to be searched: ");
    scanf("%s", stdName);

    for(int i = 0; i<size; i++) 
        if(strcmp(std[i].name, stdName) == 0) {
            flag =1;
            break;
        }
    
    if(flag)
        printf("%s is found", stdName);
    else
        printf("%s is not found", stdName);
    
    return 0;
}