#include<stdio.h>
//goto keyword in C
int main() {
    for (int i=0; i<10; i++) {
        if (i == 5) {
            goto end;
        }
        printf("%d ", i);
    }
    end:
        printf("Loop ended!");
    return 0;
}