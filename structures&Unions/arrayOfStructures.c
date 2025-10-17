#include<stdio.h>
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

    printf("Students details Are:\n");
    for(int i = 0; i < size; i++) {
        printf("%4d\t%s\t%.2f\n", std[i].rollno, std[i].name, std[i].percentage);
    }
    return 0;
}