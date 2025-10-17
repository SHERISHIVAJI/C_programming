#include <stdio.h>  
struct Product  
{  
    int st;  
};  
void Display(struct Product item, struct Product* item_copy)   
{  
    item.st++;  
    item_copy->st++;  
}  
int main()  
{  
    struct Product p1 = {50};  
    struct Product p2 = {50};  
    Display(p1, &p2);  
    printf("Product-1 Stock: %d\nProduct-2 Stock: %d\n", p1.st, p2.st);  
    return 0;  
}  