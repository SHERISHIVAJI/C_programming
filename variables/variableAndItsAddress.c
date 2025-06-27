#include <stdio.h>

int main() {
    int var = 100;
    printf("Variable  = %d\n", var);
    printf("Variable address = %u\n", &var);

    float var1 = 3.14;
    printf("Variable1  = %f\n", var1);
    printf("Variable1 address = %u", &var1);

    return 0;
}