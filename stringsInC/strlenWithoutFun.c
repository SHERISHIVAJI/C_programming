#include<stdio.h>
int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);

    int length = 0;
    for(int i = 0; str[i] != '\0'; i++)
        length++;
    printf("The length of the string \'%s\' is %d\n", str, length);
    return 0;
}