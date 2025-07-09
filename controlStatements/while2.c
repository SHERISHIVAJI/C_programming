#include<stdio.h>
//while without condition leads to a compile time error
int main() {
    while() {
        printf("Hello, World!");
    }
    return 0;
}