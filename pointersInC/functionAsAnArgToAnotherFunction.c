#include<stdio.h>
void function1(void (*ptr)());
void function2();

int main() {
    function1(function2);
    return 0;
}

void function1(void (*ptr)()) {
    printf("Function1 is called!");
    (*ptr)();
}

void function2() {
    printf("\nFunction2 is called!");
}