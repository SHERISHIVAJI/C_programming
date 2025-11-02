#include<stdio.h>
#define FEATURE 0
int main() {
    #if FEATURE
    printf("Feature Enabled");
    #else
    printf("Feature Disabled");
    #endif
    return 0;
}