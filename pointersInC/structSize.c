#include<stdio.h>
struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Person p;
    printf("Size of the structure Person is: %d bytes", sizeof(p));
    return 0;
}