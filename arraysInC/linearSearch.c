#include<stdio.h>

void search(int arr[], int size, int key) {
    for(int i =0; i<size; i++)
        if(arr[i] == key) {
            printf("%d is present in the array at %d index", key, i);
            break;
        }
}
int main() {
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of an array: ", size);
    for(int i =0; i<size; i++)
        scanf("%d", &arr[i]);
    int key;
    printf("Enter the key element to search: ");
    scanf("%d", &key);

    search(arr, size, key);
    return 0;
}