#include<stdio.h>
#include<malloc.h>
int main() {
    int *ptr, size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    ptr = (int*)calloc(size, sizeof(int));
    printf("Enter %d elements: ", size);
    for(int i = 0 ; i < size; i++)
        scanf("%d", ptr+i);
    printf("Displaying elements:\n");
    for(int i = 0 ; i < size; i++)
        printf("%d\t", *(ptr+i));
    free(ptr);
    return 0;
}