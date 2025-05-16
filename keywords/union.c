#include<stdio.h>
//union keyword in C
union Numbers {
    int integer;
    float floating_point;
};

int main() {
    union Numbers num;
    num.integer = 23456;
    printf("Integer: %d", num.integer);
    return 0;
}