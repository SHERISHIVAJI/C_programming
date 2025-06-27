#include <stdio.h>  
int main() {  
int num = 3;  
  
switch (num) {  
case 1:  
printf("Value is 1\n");  
break; // Exit the switch statement after executing this case block  
case 2:  
printf("Value is 2\n");  
break; // Exit the switch statement after executing this case block  
case 3:  
printf("Value is 3\n");  
break; // Exit the switch statement after executing this case block  
default:  
printf("Value is not 1, 2, or 3\n");  
break; // Exit the switch statement after executing the default case block  
}  
  
return 0;  
}  