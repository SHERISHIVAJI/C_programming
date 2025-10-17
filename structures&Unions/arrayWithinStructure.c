#include<stdio.h>
struct Student {
    int rollno;
    char name[50];
    int subMarks[6];
    int sum;
    float percentage;
};

int main() {
    int size;
    printf("Enyter number of students: ");
    scanf("%d", &size);

    struct Student std[size];
    printf("Enter %d students details\n", size);
    for(int i = 0; i < size; i++) {
        printf("Enter roll number and name: ");
        scanf("%d %s", &std[i].rollno, &std[i].name);
        printf("Marks of %s in 6 subjects: ", std[i].name);
        for(int j = 0; j < 6; j++)
            scanf("%d",  &std[i].subMarks[j]);
    }

    for(int  i = 0; i < size; i++) {
        std[i].sum = 0;
        for(int j = 0; j < 6; j++)
            std[i].sum += std[i].subMarks[j];
        std[i].percentage = ((float)std[i].sum)/6;
    }

    printf("Students details Are:\n");
    printf("ROLL NO\tNAME\t\tS1\tS2\tS3\tS4\tS5\tS6\tTOTAL\tPERCENTAGE\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t%s\t\t", std[i].rollno, std[i].name);
        for(int j = 0; j < 6; j++)
            printf("%d\t", std[i].subMarks[j]);
        printf("%d\t%.2f\n", std[i].sum, std[i].percentage);
    }
    return 0;
}