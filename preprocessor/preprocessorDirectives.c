#include<stdio.h>
#define VERSION 2
#define DEBUG_MODE
#undef PI
#ifndef PI
#define PI 3.14
#endif
#ifdef DEBUG_MODE
    #define LOG(x) printf("DEBUG: %s\n", x)
#else
    #define LOG(x)
#endif

#if VERSION != 2
    #error "Unsupported VERSION. Please use version 2"
#endif

#line 100 "main_program.c"

int main() {
    float rad = 7.0;
    float area = PI * rad * rad;

    printf("Area of circle: %.2f\n", area);

    LOG("Computation complete.");
    return 0;
}