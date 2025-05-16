#include<stdio.h>
//extern keyword in C
extern int global_variable;
int main() {
    global_variable = 10;
    printf("Global Variable is : %d", global_variable);
    return 0;
}
int global_variable;