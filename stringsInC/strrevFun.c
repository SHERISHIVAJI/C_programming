#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter any string: ");
    gets(str);

    printf("Before reversing the original string: \n");
    puts(str);
    printf("\nstrrev(): %d\n",strrev(str));
    printf("strrev(): %c\n",strrev(str));
    printf("strrev(): %f\n",strrev(str));
    printf("strrev(): %s\n",strrev(str));
    strrev(str);
    printf("\nAfter reversing the original string: \n");
    puts(str);
    return 0;
}