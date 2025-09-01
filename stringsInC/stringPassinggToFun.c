#include <stdio.h>  
void displayString(char str[]) {  
    printf("The string is: %s\n", str);  
}  
int main() {  
    char message[] = "Hello from main!";  
    displayString(message);  
    return 0;  
}  