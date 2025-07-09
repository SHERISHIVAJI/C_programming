#include<stdio.h>
#include<string.h>
int main() {
    char password[] = "secret";
    char input[20];
    do {
        printf("\nEnter the password: ");
        scanf("%s", input);
    } while(strcmp(input, password) != 0);

    printf("\n\n*****ACCESS GRANTED*****\n\n");
    return 0;
}