#include <stdio.h>  
struct Node  
{  
    int d;  
    struct Node* next;    
};  
int main()   
{  
    struct Node n1 = {10, NULL};  
    struct Node n2 = {20, NULL};  
    n1.next = &n2;  
    printf("Node-1 Data is: %d\n", n1.d);  
    printf("Node-2 Data is: %d\n", n1.next->d);  
    return 0;  
}