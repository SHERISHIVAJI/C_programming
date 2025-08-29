#include <stdio.h>  
int main() {   //main function  
    int arr[3][4][4];  
    int value = 1;  
    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 4; j++) {  
            for (int k = 0; k < 4; k++) {  
                arr[i][j][k] = value;  
                value++;  
            }  
        }  
    }  
    printf("3D Array Elements:\n");  
    for (int i = 0; i < 3; i++) {  
        printf("Block %d:\n", i);  
        for (int j = 0; j < 4; j++) {  
            for (int k = 0; k < 4; k++) {  
                printf("%5d", arr[i][j][k]);  
            }  
            printf("\n");  
        }  
        printf("\n\n");  
    }  
    return 0;  
}  