#include<stdio.h>
int main() {
    int rows, i=1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    do {
        int j = 1;
        do {
            printf("%d ", j);
            j++;
        } while(j <= i);
        printf("\n");
        i++;
    } while(i <= rows);

    return 0;
}