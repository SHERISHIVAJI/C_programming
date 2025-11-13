#include<stdio.h>
#include<string.h>
int main() {
    char str[50];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; i <= strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90) 
            str[i] += 32;
    }

    printf("\nLower case String is:\t%s", str);

    return 0;
}