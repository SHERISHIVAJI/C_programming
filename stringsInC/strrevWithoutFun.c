#include<stdio.h>
int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);

    int length = 0;
    for(int i = 0; str[i] != '\0'; i++)
        length++;
    printf("The length of the string \'%s\' is %d\n", str, length);

    printf("\nReversed string is: \n");
    for(int i = length - 1; i >= 0; i--)
        putchar(str[i]);
    return 0;
}