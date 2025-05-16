#include<stdio.h>
//auto keyword in C
int main() {
    auto int count = 10;
    printf("count = %d\n", count);
    {
        auto int count = 50;
        printf("Inner count = %d\n", count);
    }
    printf("count = %D", count);
    return 0;
}