#include <stdio.h>  
int main() {   //main function  
    int numbers[] = {10, 20, 30, 40, 50};  
    int size = sizeof(numbers) / sizeof(numbers[0]);  
    printf("Size of the array: %d\n", size);  
    printf("sizeof(number): %d\n", sizeof(numbers));
    printf("sizeof(number[0]): %d\n", sizeof(numbers[0]));
    return 0;  
}