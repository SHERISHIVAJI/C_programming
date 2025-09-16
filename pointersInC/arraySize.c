#include<stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    printf("Storage size of array: %d bytes\n", sizeof(arr));
    printf("Size of array: %d bytes", arrSize);
    return 0;
}