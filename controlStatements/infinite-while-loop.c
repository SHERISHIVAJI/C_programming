#include<stdio.h>
int main() {
    int x = 10, y = 2;
    while(x+y-1)
        printf("%d %d\n", x--, y--);
    return 0;
}
