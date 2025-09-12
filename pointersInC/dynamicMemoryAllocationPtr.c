#include<stdio.h>
#include<stdlib.h>
int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int *ptr = (int*)malloc(size*sizeof(int));
    if(ptr == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
    printf("The integers are:\n");  
    for (int i = 0; i < size; i++) {  
        printf("%d ", ptr[i]);  
    }  
    free(ptr);    
    return 0; 
}