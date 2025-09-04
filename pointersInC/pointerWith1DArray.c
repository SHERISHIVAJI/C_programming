#include<stdio.h>
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) 
        scanf("%d", arr+i);
    printf("Displaying elements:\n");
    for(int i = 0; i < size; i++)
        printf("%5d", *(arr+i));

    puts("\n\nReading elements with pointer:");
    int *ptr = arr;
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) 
        scanf("%d", ptr+i);
    puts("Desplaying elements with pointer:");
    for(int i = 0; i < size; i++)
        printf("%5d", *(ptr+i));
    return 0;
}