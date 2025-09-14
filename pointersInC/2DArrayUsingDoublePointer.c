#include<stdio.h>
#include<stdlib.h>
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of colums: ");
    scanf("%d", &cols);

    int **array;
    array = (int **)malloc(rows*sizeof(int*)); //Allocating memory for row pointers

    for(int i = 0; i < rows; i++)
        array[i] = (int*)malloc(cols*sizeof(int));
    
    int val = 5;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            array[i][j] = val++;
        }
    }

    printf("\nPrinting the 2D-Array Values:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows; i++) {
        free(array[i]);
    }

    free(array);
    return 0;
}