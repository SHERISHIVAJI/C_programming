#include <stdio.h>  
int main() {  //main function  
    int matrix[4][4];    
    for (int i = 0; i < 4; i++) {  
        for (int j = 0; j < 4; j++) {  
            matrix[i][j] = i+j;    
        }  
    }  
    printf("2D Array:\n");  
    for (int i = 0; i < 4; i++) {  
        for (int j = 0; j < 4; j++) {  
            printf("%d ", matrix[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  