#include<stdio.h>
//continue keyword in C
int main() {
    for (int i=0; i<10; i++) {
        if (i == 5)
            continue;
        printf("%d ", i);
    }
    return 0;
}