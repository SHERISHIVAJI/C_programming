#include<stdio.h>
int main() {
    char str[] = "Hello", *ptr;
    ptr = str;
    int length = 0;
    while(*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the string \'%s\' is %d", str, length);
    return 0;
}