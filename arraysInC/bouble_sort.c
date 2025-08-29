#include<stdio.h>   
void Bubble_Sort(int[],int);  
void main ()    
{  
    int size;
    printf("Enter the size of an array: ")  ;
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    for(int i =0;i<size;i++)
        scanf("%d", &arr[i]);

    printf("Printing Elements before sorting List:\n");
    for(int i =0;i<size;i++)
        printf("%4d", arr[i]);

    Bubble_Sort(arr,size);    
}    
void Bubble_Sort(int a[], int size) //array a[] points to arr.   
{  
int i, j,temp;     
    for(i = 0; i<size; i++)    
    {    
        for(j = i+1; j<size; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    printf("\nPrinting Elements after sorting List:\n");    
    for(i = 0; i<size; i++)    
    {    
        printf("%4d",a[i]);    
    }  
}  