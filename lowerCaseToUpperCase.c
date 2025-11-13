#include<stdio.h>
#include<string.h>
int main() {
    char str[50];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; i <= strlen(str); i++){
        if(str[i] >= 97 && str[i] <= 122) 
            str[i] -= 32;
    }

    printf("\nUpper case String is:\t%s", str);

    return 0;
}