#include <stdio.h>

int main() {
    char str1[100], str2[100], str3[100];
    printf("Enter any string for str1:\n\t");
    scanf("%s", str1);

    printf("String read by scanf function:\n\t%s\n\n", str1);
    fflush(stdin); // clear buffer (not standard, but works in some compilers)

    puts("Enter any string for str2:\n\t");
    gets(str2);    //unsafe, consider using fgets instead

    printf("String read by gets function:\n\t");
    puts(str2);
    printf("\n\n");

    printf("Enter any string for str3:\n\t");
    int i = 0;
    char ch;

    // read until newline
    while ((ch = getchar()) != '\n' && ch != EOF) {
        str3[i] = ch;
        i++;
    }
    str3[i] = '\0';

    i = 0;
    printf("String read by getchar function:\n\t");
    while (str3[i] != '\0') {
        putchar(str3[i]);
        i++;
    }

    return 0;
}