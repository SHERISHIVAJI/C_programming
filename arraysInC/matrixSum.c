#include<stdio.h>
int main() {
    int size;
    printf("For matrix addition number of rows should be equal to number of colums i.e: (mxm)..");
    printf("\nEnter row size: ");
    scanf("%d", &size);

    int arr1[size][size];
    printf("Enter %d elements for array1: \n", size*size);
    for(int i =0; i<size; i++)
        for(int j = 0; j<size; j++)
            scanf("%d", &arr1[i][j]);

    int arr2[size][size];
    printf("Enter %d elements for array2: \n", size*size);
    for(int i =0; i<size; i++)
        for(int j = 0; j<size; j++)
            scanf("%d", &arr2[i][j]);

    printf("After Addition:\n");
    for(int i = 0; i<size; i++) {
        for(int j=0; j<size;j++)
            printf("%5d", arr1[i][j] + arr2[i][j]);
        printf("\n");
    }
    return 0;
}