#include<stdio.h>
#include<conio.h>
int main() {
    FILE *fp;
    char text[300];
    fp = fopen("fputs-file.txt", "r");
    printf("%s", fgets(text, 200, fp));
    fclose(fp);
    getch();
}