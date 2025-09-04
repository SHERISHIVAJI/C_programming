#include<stdio.h>

int strLength(char *ptr) {
    char *temp = ptr;
    while(*temp != '\0')
        temp++;
    return (temp - ptr);
}

int main() {
    char str[] = "SHERI SHIVAJI";
    int length = strLength(str);
    printf("The length of the string \"%s\" is %d", str, length);
    return 0;
}