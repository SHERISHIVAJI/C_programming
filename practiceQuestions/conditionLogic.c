#include<stdio.h>
int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int compareWith;
    printf("Enter the number you want to compare: ");
    scanf("%d", &compareWith);

    if (num = compareWith) {
        printf("Condition is TRUE and it will assign by the new value %d\n", compareWith);
        printf("Num = %d", num);
    } else {
        printf("Condition is FALSE\n");
        printf("Num = %d", num);
    }
    return 0;
}