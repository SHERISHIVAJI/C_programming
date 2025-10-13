#include <stdio.h>  
#include <stdlib.h>  
int main() {  //main function  
    int *arr;  
    int n, i;  
    printf("Enter the number of elements: ");  
    scanf("%d", &n);  
    // Dynamically allocate memory for n integers  
    arr = (int *)malloc(n * sizeof(int));  
    if (arr == NULL) {  
        printf("Memory allocation failed!\n");  
        return 1;  
    }  
    // Accept elements from the user  
    printf("Enter %d integers:\n", n);  
    for (i = 0; i < n; i++) {  
        printf("Element %d: ", i + 1);  
        scanf("%d", &arr[i]);  
    }  
    // Display the entered elements  
    printf("You entered:\n");  
    for (i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
    // Free the allocated memory  
    free(arr);  
    printf("Memory successfully freed.\n");  
    return 0;  
}  