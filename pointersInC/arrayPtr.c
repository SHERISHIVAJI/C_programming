#include <stdio.h>  
int main() {   //main function  
    int arr[5] = {10, 20, 30, 40, 50};  
    int (*ptr)[5] = &arr;    
    printf("First element: %d\n", (*ptr)[0]);  
    printf("Second element: %d\n", (*ptr)[1]);  
    return 0;  
}