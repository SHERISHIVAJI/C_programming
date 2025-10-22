#include<stdio.h>
#include<conio.h>
int main() {
    FILE *fp;
    fp = fopen("fputs-file.txt", "w");
    fputs("Hello, Sheri Welcome to C Programming word!", fp);
    fclose(fp);
    getch();
}