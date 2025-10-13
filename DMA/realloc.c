#include <stdio.h>  
#include <stdlib.h>  
int main() {   //main function  
    int *arr;  
    int i, initial_size = 5, new_size = 10;  
    // Step 1: Allocate initial memory  
    arr = (int *)malloc(initial_size * sizeof(int));  
    if (arr == NULL) {  
        printf("Initial memory allocation failed!\n");  
        return 1;  
    }  
    // Step 2: Assign values to the initial array  
    for (i = 0; i < initial_size; i++) {  
        arr[i] = i + 1;  
    }  
    // Step 3: Print original array  
    printf("Original array elements:\n");  
    for (i = 0; i < initial_size; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
    // Step 4: Reallocate memory  
    arr = (int *)realloc(arr, new_size * sizeof(int));  
    if (arr == NULL) {  
        printf("Memory reallocation failed!\n");  
        return 1;  
    }  
    // Step 5: Assign values to new elements  
    for (i = initial_size; i < new_size; i++) {  
        arr[i] = (i + 1) * 10;  
    }  
    // Step 6: Print resized array  
    printf("Resized array elements:\n");  
    for (i = 0; i < new_size; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
    // Memory not freed (as requested)  
    return 0;  
}  