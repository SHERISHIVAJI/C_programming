#include<stdio.h>
#include<string.h>
int main() {
    char str[100], str1[100];
    printf("Enter any string: ");
    gets(str);

    printf("strcpy(): %d\n", strcpy(str1, str));
    printf("strcpy(): %c\n", strcpy(str1, str));
    printf("strcpy(): %f\n", strcpy(str1, str));
    printf("strcpy(): %s\n", strcpy(str1, str));
    printf("string1: %s\n", str);
    printf("string2: %s", str1);
    return 0;
}