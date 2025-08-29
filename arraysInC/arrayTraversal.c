#include <stdio.h>  
int main() {   //main function  
    int numbers[5] = {2, 4, 6, 8, 10};  
    printf("Traversing the array:\n");  
    for (int i = 0; i < 5; i++) {  
        printf("Element at index %d: %d\n", i, numbers[i]);  
    }  
    return 0;  
}  
