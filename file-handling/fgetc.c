#include<stdio.h>
#include<conio.h>
int main() {
    FILE *fp;
    char ch;
    // clrscr();
    fp = fopen("employee.txt", "r");
    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);
    getch();
}