#include<stdio.h>

int largestElement(int arr[], int size) {
    int max_element = arr[0];
    for(int i = 0; i < size; i++)
        if(arr[i] > max_element)
            max_element = arr[i];
    
    return max_element;
}

int main() {
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The largest element in the array is: %d", largestElement(arr, size));
    return 0;
}