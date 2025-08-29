#include<stdio.h>
int maxArray(int arr[],int size){ 
    int max=arr[0];
    int i=0;
    for(i=1;i<size;i++){
        if(max < arr[i])
            max = arr[i];
    }//end of for    
    return max;
}//end of function    

int main(){
int size;
    printf("Enter the size of an array: ")  ;
    scanf("%d", &size);

    int numbers[size];
    printf("Enter %d elements: ", size);
    for(int i =0;i<size;i++)
        scanf("%d", &numbers[i]);

    int max = maxArray(numbers,size);//passing array with size    
    printf("Maximum number is %d \n",max);
    return 0;
} 