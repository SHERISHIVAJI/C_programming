#include<stdio.h>
int main() {
    int size;
    printf("For matrix transpose number of rows should be equal to number of colums i.e: (mxm)..");
    printf("\nEnter row size: ");
    scanf("%d", &size);

    int arr[size][size];
    printf("Enter %d elements: \n", size*size);
    for(int i =0; i<size; i++)
        for(int j = 0; j<size; j++)
            scanf("%d", &arr[i][j]);
    printf("Before Transpose:\n");
    for(int i = 0; i<size; i++) {
        for(int j=0; j<size;j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }

    printf("After Transpose:\n");
    for(int i = 0; i<size; i++) {
        for(int j=0; j<size;j++)
            printf("%5d", arr[j][i]);
        printf("\n");
    }
    return 0;
}