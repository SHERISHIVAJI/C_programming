#include<stdio.h>
int main() {
    char str[100], str1[100];
    printf("Enter any string for string1: ");
    gets(str);

    printf("Enter any string for string2: ");
    gets(str1);
    
    printf("Before Concatination:\n");
    printf("String1: %s\n", str);
    printf("String2: %s\n", str1);
    int i;
    for(i = 0; str[i] != '\0'; i++);
    for(int j = 0; str1[j] != '\0'; j++) {
        str[i] = str1[j];
        i++;
    }
    str[i] = '\0';
    printf("\n\nAfter Concatination:\n");
    printf("String1: %s\n", str);
    printf("String2: %s\n", str1);
    return 0;
}