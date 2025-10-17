#include<stdio.h>
struct character {
    char c;
    char *cp;
};

int main() {
    struct character x;
    char ch = 'S';
    x.c = ch;
    x.cp = &ch;
    printf("Character is: %c\n", x.c);
    printf("\"%c\" address is %u",x.c, x.cp);

    return 0;
}