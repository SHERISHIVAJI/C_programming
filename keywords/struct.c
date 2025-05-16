#include<stdio.h>
#include<string.h>
//struct keyword in C
struct person {
    char name[200];
    int age;
};

int main() {
    struct person student;
    strcpy(student.name, "SHERI SHIVAJI");
    student.age = 21;
    printf("Name is %s, Age is %d years.", student.name, student.age);
    return 0;
}