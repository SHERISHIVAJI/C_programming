#include <stdio.h>  
#include <string.h>  
  
int main() {  
char str[100] = "hello all, this is sheri shivaji";  
char *sub;  
  
sub = strstr(str, "sh");  
  
if (sub != NULL) {  
printf("Substring is: %s", sub);  
} else {  
printf("Substring not found.");  
}  
  
return 0;  
}  