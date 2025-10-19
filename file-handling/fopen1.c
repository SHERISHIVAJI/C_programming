#include<stdio.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("fopen.txt", "r");
    while(1) {
        ch = fgetc(fp);
        if(ch == EOF) 
            break;
        printf("%c", ch);
    }
    fclose(fp);
}