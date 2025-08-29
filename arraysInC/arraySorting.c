#include<stdio.h>      
void main ()      
{      
    int size;
    int i, j;
    int temp;
    printf("Enter size of an array: ")       ;
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(i = 0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("Elements before sorting:\n");
    for(i = 0; i<size; i++)
        printf("%5d", arr[i]);

    for(i = 0; i<size; i++)      
    {      
        for(j = i+1; j<size; j++)      
        {      
            if(arr[i] > arr[j])      
            {      
                temp = arr[i];      
                arr[i] = arr[j];      
                arr[j] = temp;       
            }       
        }       
    }       
    printf("\nElements after sorting:\n");
    for(i = 0; i<size; i++)
        printf("%5d", arr[i]);   
}   