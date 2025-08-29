#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of an array: ")  ;
    scanf("%d", &size);

    int numbers[size];
    int frequency[size];
    printf("Enter %d elements: ", size);
    for(int i =0;i<size;i++) {
        scanf("%d", &numbers[i]);
        frequency[i] = -1;
    }

    printf("\nPrinting Elements in List:\n");    
    for(int i = 0; i<size; i++)    
    {    
        printf("%4d", numbers[i]);    
    }

    int count = 0;
    for(int i =0; i<size; i++) {
        count = 1;
        if(frequency[i] != 0) {
            for(int j =i+1; j<size; j++) {
                if(numbers[i] == numbers[j]) {
                    count++;
                    frequency[j] = 0;
                }
            }
            frequency[i] = count;
        }
    }

    printf("\nFrequency of each element:\n");
    for (int i = 0; i < size; i++) {
        if (frequency[i] != 0) {
            printf("%d occurs %d times\n", numbers[i], frequency[i]);
        }
    }    
}