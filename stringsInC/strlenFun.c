#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);

    printf("The length of the string \'%s\' is %d\n", str, strlen(str));
    printf("The size of the string \'%s\' is %d\n\n", str, sizeof(str));

    char str2[] = "Hello world!";
    printf("The length of the string \'%s\' is %d\n", str2, strlen(str2));
    printf("The size of the string \'%s\' is %d", str2, sizeof(str2));
    return 0;
}