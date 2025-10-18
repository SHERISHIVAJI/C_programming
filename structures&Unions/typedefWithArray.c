#include <stdio.h>  
  
typedef int IntArray[5];  
  
int main() {  
    IntArray nums = {1, 2, 3, 4, 5};  
    for (int i = 0; i < 5; i++) {  
        printf("%d ", nums[i]);  
    }  
    return 0;  
}