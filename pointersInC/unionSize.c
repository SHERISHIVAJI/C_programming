#include<stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    printf("Size of the union Data is: %d bytes", sizeof(data));
    return 0;
}