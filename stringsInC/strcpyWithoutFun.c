#include<stdio.h>
int main() {
    char str[100], str1[100]="Hello World!";
    printf("Enter any string: ");
    gets(str);

    printf("Before copyin:\n");
    printf("string1: %s\n", str);
    printf("string2: %s", str1);

    int i;
    for(i = 0; str[i] != '\0'; i++)
        str1[i] = str[i];
    str1[i] = '\0';
    printf("\n\nAfter copyin:\n");
    printf("string1: %s\n", str);
    printf("string2: %s", str1);
    return 0;
}