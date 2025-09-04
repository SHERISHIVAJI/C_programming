#include<stdio.h>
int main() {
    char str[] = "Hello", *ptr;
    ptr = str;
    puts(ptr);
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}