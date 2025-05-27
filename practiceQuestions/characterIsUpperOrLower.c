#include<stdio.h>
//A C program to find if a character entered by the user is upper or lower
int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z') {
        printf("YOU ENTERED AN UPPER CASE CHARACTER");
    }
    else if (character >= 'a' && character <= 'z') {
        printf("you entered a lower case character");
    } 
    else {
        printf("The character you entered is a special character...");
    }
    return 0;
}