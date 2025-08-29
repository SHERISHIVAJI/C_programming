#include <stdio.h>  
void sized_array(int arr[4]) {  
    printf("Inside sized_array:\n");  
    for (int i = 0; i < 4; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
}  
void unsized_array(int arr[]) {  
    printf("Inside unsized_array:\n");  
    for (int i = 0; i < 4; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
}  
void pointer(int* arr) {  
    printf("Inside pointer:\n");  
    for (int i = 0; i < 4; i++) {  
        printf("%d ", *(arr + i));  
    }  
    printf("\n");  
}  
int main() {   //main function  
    int arr[] = {1, 2, 3, 4};  
    sized_array(arr);  
    unsized_array(arr);  
    pointer(arr);  
    return 0;  
}  