#include<stdio.h>
int main() {
    FILE *fp;
    fp = fopen("file1.txt", "w");
    fputc('s', fp);
    printf("Character written in file successfully!");
    fclose(fp);
    return 0;
}