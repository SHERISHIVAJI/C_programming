#include<stdio.h>
#include<string.h>
int main() {
    char str[100], str1[100];
    printf("Enter any string for string1: ");
    gets(str);

    printf("Enter any string for string2: ");
    gets(str1);
    
    printf("Before Concatination:\n");
    printf("String1: %s\n", str);
    printf("String2: %s\n", str1);
    printf("\n\nConcatination returns:\n");

    printf("strcat(): %d\n", strcat(str, str1));
    printf("strcat(): %c\n", strcat(str, str1));
    printf("strcat(): %f\n", strcat(str, str1));
    printf("strcat(): %s\n", strcat(str, str1));
    strcat(str, str1);
    printf("\n\nAfter Concatination:\n");
    printf("String1: %s\n", str);
    printf("String2: %s\n", str1);
    return 0;
}