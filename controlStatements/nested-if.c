#include <stdio.h>  
int main() {  //main function  
    int marks;  
    printf("Enter your marks: ");  
    scanf("%d", &marks);  
  
    if (marks >= 50) {  
        if (marks >= 75) {  
            printf("Distinction");  
        } else {  
            printf("Passed");  
        }  
    } else {  
        printf("Failed");  
    }  
  
    return 0;  
}  