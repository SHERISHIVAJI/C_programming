#include<stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i= 0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("BEFORE\n");
    for(int i= 0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int temp;
    for(int i = 0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("AFTER\n");
    for(int i= 0; i<size; i++)
        printf("%d ", arr[i]);
}