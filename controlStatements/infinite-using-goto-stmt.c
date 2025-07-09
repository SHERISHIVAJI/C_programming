#include<stdio.h>
int main() {
    int recordCount = 1;
    loop:
        printf("It is an infinite loop i=using goto statement -> %d\n", recordCount);
        recordCount ++;
    if(recordCount <= 5)
        goto loop;
    return 0;
}