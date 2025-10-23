#include<stdio.h>
int main() {
    FILE *fp;
    fpos_t position;

    fp = fopen("pointerPositioning.txt", "r");
    if(fp == NULL) {
        perror("Error opening file.");
        return 1;
    }

    if(fgetpos(fp, &position) != 0) {
        perror("Error getting file position");
        fclose(fp);
        return 1;
    }

    //rewind()
    printf("\nUsing rewind():\n");
    rewind(fp);
    for(int i = 0; i < 5; i++) {
        int ch = fgetc(fp);
        if(ch == EOF) break;
        putchar(ch);
    }

    //fseek()
    printf("\nUsing fseek():\n");
    if(fseek(fp, 5, SEEK_SET) != 0) {
        perror("Error usinng fseek()");
        fclose(fp);
        return 1;
    }
    for(int i = 0; i < 5; i++) {
        int ch = fgetc(fp);
        if(ch == EOF) break;
        putchar(ch);
    }

    //fsetpos()
    printf("\nUsing fsetpos():\n");
    if(fsetpos(fp, &position) != 0) {
        perror("Error setting file position");
        fclose(fp);
        return 1;
    }
    for(int i = 0; i < 5; i++) {
        int ch = fgetc(fp);
        if(ch == EOF) break;
        putchar(ch);
    }

    fclose(fp);
    return 0;
}