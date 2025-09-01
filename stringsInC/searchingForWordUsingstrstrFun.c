#include <stdio.h>  
#include <string.h>  
  
int main() {  
const char *text = "The quick brown fox leaps over the sleepy dog.";  
const char *word = "fox";  
  
char *result = strstr(text, word);  
  
if (result != NULL) {  
printf("Word '%s' found at index: %ld\n", word, result - text);  
} else {  
printf("Word '%s' not found.\n", word);  
}  
  
return 0;  
}  