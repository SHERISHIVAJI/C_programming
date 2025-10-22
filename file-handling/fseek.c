#include<stdio.h>
int main() {
    FILE *file;
    char ch;
    file = fopen("file.txt", "r");

    if(file == NULL) {
        printf("Error opening the file\n");
        return 1;
    }

    fseek(file, 4, SEEK_SET);

    ch = fgetc(file);
    printf("Character at 5th position: %c\n", ch);
    fclose(file);
    return 0;
}