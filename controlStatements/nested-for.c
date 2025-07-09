#include<stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int row = 1; row <= rows; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}