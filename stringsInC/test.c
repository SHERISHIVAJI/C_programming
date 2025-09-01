#include<stdio.h>  
int main()  
{  
    char a[] = "%d\n";  
    a[1] = 'c';
    puts(a);
    printf(a, 65);
    /*
    Step 1: char a[] = "%d\n"; The variable 'a' is declared as an array of characters and 
    initialized with string "%d".

    Step 2: a[1] = 'b'; Here, we overwrite the second element of array ?a? by 'b'. Hence 
    the array ?a? becomes "%c".

    Step 3: printf(a, 65); becomes printf("%c", 65);

    Therefore it will print the ASCII value of 65. Hence the output is 'A'.
    */  
    printf(a, 78);
    return 0;  
}