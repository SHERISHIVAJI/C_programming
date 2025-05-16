#include<stdio.h>
//static keyword in C
void increment() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}
int main() {
    increment();
    increment();
    return 0;
}