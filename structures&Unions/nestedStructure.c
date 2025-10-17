#include<stdio.h>
#include<string.h>
struct date {
    int day;
    char month[3];
    int year;
};

struct student {
    int rollno;
    char name[50];
    float percentage;
    struct date dob;
};

int main() {
    struct student std;
    printf("Enter student details here\n");
    printf("Roll Number: ");
    scanf("%d", &std.rollno);
    printf("Name: ");
    scanf("%s", &std.name);
    printf("Percentage: ");
    scanf("%f", &std.percentage);
    printf("Date of Birth (dd mon yyyy): ");
    scanf("%d%s%d", &std.dob.day, &std.dob.month, &std.dob.year);

    printf("Student details are:\n");
    printf("Roll Number: %d\n", std.rollno);
    printf("Name: %s\n", std.name);
    printf("Percentage: %.2f\n", std.percentage);
    printf("Date of Birth: %d-%s-%d", std.dob.day, std.dob.month, std.dob.year);
    return 0;
}