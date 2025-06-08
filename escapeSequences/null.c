//The null character, denoted by "0", is inserted using the null escape sequence (0).
#include <stdio.h>  
int main() {  
    char myString[] = "Hello\0World!";  
printf("String: %s", myString);  
  
    return 0;  
}