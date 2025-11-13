#include<stdio.h>
int main() {
    char str[50], i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; ++i);

    printf("The Length of the string %s is %d", str, i);
    return 0;
}