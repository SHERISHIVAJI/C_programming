#include<stdio.h>
int main() {
    FILE *file;
    long position;

    file = fopen("file.txt", "w");
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("Hello, World!", file);
    position = ftell(file);
    printf("Current file position after writing: %ld\n", position);

    fclose(file);

    file = fopen("file.txt", "r");
    if(file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    char ch;
    for(int i = 0;i<5; i++) {
        ch = fgetc(file);
        printf("%c", ch);
    }

    position = ftell(file);
    printf("\nFile position after reading 5 characters: %ld\n", position);

    fclose(file);
    return 0;
}