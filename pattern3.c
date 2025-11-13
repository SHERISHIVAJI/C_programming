#include<stdio.h>

int main() {
    int number_of_lines;
    printf("Enter the number of lines for pyramid of stars: ");
    scanf("%d", &number_of_lines);

    printf("====================================\n\n");
    for(int i = 1; i <= number_of_lines; i++) {
        for(int j = 1; j <= number_of_lines - i; j++)
            printf("  ");
        for(int j = 1; j <= 2*i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n\n============================================\n");
    printf("============================================\n\n");
    for(int i = 1; i <= number_of_lines; i++) {
        for(int j = 1; j <= number_of_lines - i; j++)
            printf("  ");
        for(int j = 1; j < 2*i; j++)
            printf("* ");
        printf("\n");
    }
    printf("\n\n========================================");
    return 0;
}