#include <stdio.h> 
/*
In this example, we declare an integer array of numbers of size 5. After that, a pointer ptr is given the base address of the array, i.e., it is pointing to the first element. The for loop iterates from index 0 to 4 and, on each pass, accesses the element at that index using pointer arithmetic: *(ptr + i) loads the value at the i-th position within the array. The printf statement prints the index and its corresponding value.
*/ 
int main() {   //main function  
    int numbers[5] = {10, 20, 30, 40, 50};  
    int *ptr = numbers;   
    printf("Accessing array elements using pointer:\n");  
    for (int i = 0; i < 5; i++) {  
        printf("Element %d: %d\n", i, *(ptr + i));  
    }  
    return 0;  
}  