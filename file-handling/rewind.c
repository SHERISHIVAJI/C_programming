#include<stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("rewind-file.txt", "r");
    if(fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    printf("Reading file the first time:\n");
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    rewind(fp);

    printf("\n\nReading the file the second time after rewind():\n");
    while((ch = fgetc(fp))!= EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}