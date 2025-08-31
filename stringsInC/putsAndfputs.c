#include <stdio.h>  
int main() {  
    char str[] = "Hello from SHERI SHIVAJI!";  
    puts("Using puts():");  
    puts(str);  
    printf("Using fputs():\n");  
    fputs(str, stdout);  
    return 0;  
} 