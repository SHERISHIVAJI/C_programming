#include<stdio.h>
int* reverseArray(int[], int);

void main(){
    int size;
    printf("Enter the size of an array: ")  ;
    scanf("%d", &size);

    int numbers[size];
    printf("Enter %d elements: ", size);
    for(int i =0;i<size;i++)
        scanf("%d", &numbers[i]);

    printf("\nPrinting Elements before reversing List:\n");    
    for(int i = 0; i<size; i++)    
    {    
        printf("%4d", numbers[i]);    
    }

    int* res = reverseArray(numbers, size);

    printf("\nPrinting Elements after reversing List:\n");    
    for(int i = 0; i<size; i++)    
    {    
        printf("%4d", *(res+i));    
    }
} 

int* reverseArray(int arr[], int size) {
    int i =0,j = size - 1, temp = 0;
    while(i<j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return arr;
}